
@protocol WFDiagnosticsResultItem <NSObject>

@required

- (bool)didPassTest;
- (NSArray *)failedTests;
- (NSArray *)results;
- (void)setDidPassTest:(bool)arg1;
- (void)setFailedTests:(NSArray *)arg1;
- (void)setResults:(NSArray *)arg1;
- (void)setSuggestion:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)suggestion;
- (NSString *)title;

@end
