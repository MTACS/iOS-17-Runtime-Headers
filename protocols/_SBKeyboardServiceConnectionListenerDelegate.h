
@protocol _SBKeyboardServiceConnectionListenerDelegate <NSObject>

@required

- (void)client:(_SBKeyboardServiceClient *)arg1 deferAdditionalEnvironments:(NSData *)arg2 whenSceneHasKeyboardFocus:(FBSSceneIdentityToken *)arg3 pid:(NSNumber *)arg4;
- (void)client:(_SBKeyboardServiceClient *)arg1 removeKeyboardFocusFromSceneIdentity:(FBSSceneIdentityToken *)arg2 pid:(NSNumber *)arg3;
- (void)client:(void *)arg1 requestKeyboardFocusForSceneIdentity:(void *)arg2 pid:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: _SBKeyboardServiceClient *, FBSSceneIdentityToken *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)client:(_SBKeyboardServiceClient *)arg1 setExternalSceneIdentities:(NSSet *)arg2;
- (void)client:(_SBKeyboardServiceClient *)arg1 stopApplyingAdditionalDeferringRulesWhenSceneHasKeyboardFocus:(FBSSceneIdentityToken *)arg2 pid:(NSNumber *)arg3;
- (void)clientDidConnect:(_SBKeyboardServiceClient *)arg1;
- (void)clientDidDisconnect:(_SBKeyboardServiceClient *)arg1;

@end
