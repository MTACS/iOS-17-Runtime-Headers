
@protocol CNAutocompleteQueryCacheMissLogging <NSObject>

@required

- (void)didReturnCacheFalseNegatives:(NSArray *)arg1;
- (void)didReturnCacheFalsePositives:(NSArray *)arg1;

@end
