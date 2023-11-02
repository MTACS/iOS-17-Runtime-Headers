
@protocol ASDAppQueryResultsObserver <NSObject>

@optional

- (void)appQuery:(ASDAppQuery *)arg1 resultsDidChange:(NSArray *)arg2;

@end
