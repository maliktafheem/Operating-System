#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_LIGHT_CYAN, PRINT_COLOR_BLACK);
    
print_str("\n%#####%,        %#####%  %######%     %######%    %%%%%%%%#.   #################");
print_str("\n    %%%%,         #%        %#           #%     .%%       %#   %#     #%      #%");
print_str("\n    %% %%%*       #%        %#           #%     %%%       ./   \\      #%       /");
print_str("\n    %%   %%%*     (%        %#           #%      %%%%%/               #%        ");
print_str("\n    %%     %%%/   /%        %#           #%          .%%%%%%          #%        ");
print_str("\n    %%       #%%  /%        %#           #%    \\.         %%%         #%        ");
print_str("\n    %%         #% %%        %#           #%    #%         %%.         #%        ");
print_str("\n    %%           #%%        %%%%%%%%%%%%%%%      %%%%%%%%%%%'         #%        ");
print_str("\n                                                                                ");
print_set_color(PRINT_COLOR_LIGHT_GREEN, PRINT_COLOR_BLACK);
print_str("\n                                        ,                                       ");
print_str("\n                                    #   %  .%                                   ");
print_str("\n                             .,*,,%, , *%  / (%####(                            ");
print_str("\n                         .*   ,(  % %, %%( /% ( .%   .#                         ");
print_str("\n                           *%%.  #%%%,.%%% /%%%*  /%%                           ");
print_str("\n                       , ,*  (%%%( .%,(%%%*/%  %%%%.  % #                       ");
print_str("\n                       .%# %%  %%%%%%.#*,*#*%%%%%* /%,.%%*                      ");
print_str("\n                     #(   *#%%%( %%   #%%%(   %# %%%%%%/.  #                    ");
print_str("\n                             ,(%%%  %%%%%%%%%  %%%%#*.                          ");
print_set_color(PRINT_COLOR_LIGHT_RED, PRINT_COLOR_BLACK);
print_str("\n                                ENCODED BY: TAFHEEM                             ");

}
