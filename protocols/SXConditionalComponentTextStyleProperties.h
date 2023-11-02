
@protocol SXConditionalComponentTextStyleProperties <SXConditionalTextStyleProperties>

@required

- (SXDropCapStyle *)dropCapStyle;
- (long long)exactLineHeight;
- (long long)firstLineIndent;
- (bool)fontScaling;
- (bool)hangingPunctuation;
- (long long)hyphenation;
- (unsigned long long)hyphenationMinimumCharactersAfter;
- (unsigned long long)hyphenationMinimumCharactersBefore;
- (unsigned long long)hyphenationMinimumWordLength;
- (double)hyphenationZone;
- (bool)lineBalancing;
- (long long)lineHeight;
- (SXTextStyle *)linkStyle;
- (long long)paragraphSpacingAfter;
- (long long)paragraphSpacingBefore;
- (double)relativeLineHeight;
- (long long)textAlignment;

@end
