
@interface GQUWebViewWaiter : NSObject

+ (id)waiter;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)waitForWebViewToFinishLoading:(id)arg1;

@end
