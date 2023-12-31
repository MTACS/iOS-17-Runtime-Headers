
@protocol NULoadingDelegate <NSObject>

@optional

- (void)loadingDidFinishWithError:(NSError *)arg1;
- (void)loadingDidStart;
- (void)loadingDidUpdateProgress:(double)arg1;
- (void)loadingWillFinishWithError:(NSError *)arg1;
- (void)loadingWillStart;

@end
