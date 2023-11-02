
@protocol WFSyntaxHighlightToken <JSExport>

@required

+ (WFSyntaxHighlightToken *)constructToken;

- (int)length;
- (bool)overflows;
- (void)setLength:(int)arg1;
- (void)setOverflows:(bool)arg1;
- (void)setStart:(int)arg1;
- (void)setString:(NSString *)arg1;
- (int)start;
- (NSString *)string;

@end
