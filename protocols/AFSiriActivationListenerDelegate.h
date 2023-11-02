
@protocol AFSiriActivationListenerDelegate <NSObject>

@optional

- (void)siriActivationListener:(void *)arg1 activateWithRequestInfo:(void *)arg2 context:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: AFSiriActivationListener *, AFRequestInfo *, AFSiriActivationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)siriActivationListener:(void *)arg1 deactivateForReason:(void *)arg2 options:(void *)arg3 context:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: AFSiriActivationListener *, long long, unsigned long long, AFSiriActivationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)siriActivationListener:(void *)arg1 handleButtonEventFromContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: AFSiriActivationListener *, AFSiriActivationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)siriActivationListener:(void *)arg1 handleIntent:(void *)arg2 inBackgroundAppWithBundleId:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: AFSiriActivationListener *, INIntent *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INIntentResponse *, NSError *, void*
- (void)siriActivationListener:(void *)arg1 handleIntentForwardingAction:(void *)arg2 inBackgroundApplicationWithBundleIdentifier:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: AFSiriActivationListener *, INIntentForwardingAction *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INIntentForwardingActionResponse *, void*
- (void)siriActivationListener:(void *)arg1 myriadEventWithRequestInfo:(void *)arg2 context:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: AFSiriActivationListener *, AFRequestInfo *, AFSiriActivationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)siriActivationListener:(void *)arg1 prewarmWithRequestInfo:(void *)arg2 context:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: AFSiriActivationListener *, AFRequestInfo *, AFSiriActivationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
