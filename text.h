#pragma once

char to_upper(char c);
bool is_digit(char c);
bool is_letter(char c);
bool is_space(char c);
bool in_range(char c, char min, char max);
bool starts_with(const char *string, const char *prefix);
bool equals(const char *string1, const char *string2);

// Text message formatting: 
//   - replaces lowercase letters with uppercase
//   - merges consecutive spaces into single space
void fmtmsg(char *msg_out, const char *msg_in);