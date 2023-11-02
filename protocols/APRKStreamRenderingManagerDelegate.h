
@protocol APRKStreamRenderingManagerDelegate <NSObject>

@required

- (void)didStartStreamingWithRenderer:(APRKStreamRenderer *)arg1;
- (void)didStopStreamingWithRenderer:(APRKStreamRenderer *)arg1;
- (void)shouldHideGlobalPasscode;
- (void)shouldShowGlobalPasscodeWithString:(NSString *)arg1 withClientName:(NSString *)arg2;

@optional

- (void)shouldAskPermissionWithRequestID:(void *)arg1 forClientWithName:(void *)arg2 withCompletionBlock:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)shouldCancelPermissionRequestWithRequestID:(NSUUID *)arg1;

@end
