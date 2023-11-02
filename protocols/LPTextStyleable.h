
@protocol LPTextStyleable

@required

- (double)ascender;
- (long long)computedNumberOfLines;
- (double)descender;
- (NSRegularExpression *)emphasizedTextExpression;
- (double)firstLineLeading;
- (double)lastLineDescent;
- (long long)overrideMaximumNumberOfLines;
- (void)setEmphasizedTextExpression:(NSRegularExpression *)arg1;
- (void)setOverrideMaximumNumberOfLines:(long long)arg1;

@end
