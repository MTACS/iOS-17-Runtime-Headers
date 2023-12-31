
@protocol MSSearchDelegate <NSObject>

@optional

- (bool)search:(MSSearch *)arg1 didFindResults:(NSArray *)arg2;
- (void)search:(MSSearch *)arg1 didFinishWithError:(NSError *)arg2;

@end
