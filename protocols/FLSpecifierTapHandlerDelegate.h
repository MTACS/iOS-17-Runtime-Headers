
@protocol FLSpecifierTapHandlerDelegate <NSObject>

@required

- (void)startPresentingForHandler:(FLSpecifierTapHandler *)arg1 withRemoteController:(UIViewController *)arg2;

@optional

- (void)preflightNetworkConnectivityForHandler:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: FLSpecifierTapHandler *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
