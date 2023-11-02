
@protocol AMSUIWebActionRunnerDelegate <NSObject>

@required

- (void)action:(id <AMSUIWebActionRunnable>)arg1 didEncodeNetworkRequest:(NSMutableURLRequest *)arg2;
- (AMSPromise *)action:(id <AMSUIWebActionRunnable>)arg1 didResolveWithResult:(NSDictionary *)arg2 error:(NSError *)arg3;
- (AMSPromise *)action:(id <AMSUIWebActionRunnable>)arg1 handleActionObject:(NSDictionary *)arg2;
- (AMSPromise *)action:(id <AMSUIWebActionRunnable>)arg1 pauseTimeouts:(bool)arg2 handleAuthenticateCloudRequest:(AMSAuthenticateRequest *)arg3;
- (AMSPromise *)action:(id <AMSUIWebActionRunnable>)arg1 pauseTimeouts:(bool)arg2 handleAuthenticateRequest:(AMSAuthenticateRequest *)arg3;
- (AMSPromise *)action:(id <AMSUIWebActionRunnable>)arg1 pauseTimeouts:(bool)arg2 handleDialogRequest:(AMSDialogRequest *)arg3;
- (void)actionDidFinishPurchaseWithResult:(AMSPurchaseResult *)arg1 error:(NSError *)arg2;

@end
