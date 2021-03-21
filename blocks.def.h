//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/  /*Command*/                     /*Update Interval*/  /*Update Signal*/
  {"",    "$HOME/bin/status/vpn.sh",        1,                   0},
  {"",    "$HOME/bin/status/mail.sh",       10,                  0},
  {"",    "$HOME/bin/status/wired.sh",      10,                  0},
  {"",    "$HOME/bin/status/wifi.sh",       10,                  0},
  {"",    "$HOME/bin/status/cpu_load.sh",   5,                   0},
  {"",    "$HOME/bin/status/cpu_temp.sh",   5,                   0},
  {"",    "$HOME/bin/status/used_ram.sh",   5,                   0},
  {"",    "$HOME/bin/status/free_disk.sh",  10,                  0},
  {"",    "$HOME/bin/status/bat.sh",        10,                  0},
  {"",    "$HOME/bin/status/airpods.sh",    5,                   0},
  {"",    "$HOME/bin/status/pacman.sh",     60,                  0},
  {"",    "$HOME/bin/status/volume.sh",     1,                   0},
  {"",    "$HOME/bin/status/clock.sh",      1,                   0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
