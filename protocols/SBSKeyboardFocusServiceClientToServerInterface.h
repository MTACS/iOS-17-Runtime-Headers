
@protocol SBSKeyboardFocusServiceClientToServerInterface <NSObject>

@required

- (oneway void)deferAdditionalEnvironments:(NSData *)arg1 whenSceneHasKeyboardFocus:(FBSSceneIdentityToken *)arg2 pid:(NSNumber *)arg3;
- (oneway void)removeKeyboardFocusFromSceneIdentity:(FBSSceneIdentityToken *)arg1 pid:(NSNumber *)arg2;
- (oneway void)requestKeyboardFocusForSceneIdentity:(void *)arg1 pid:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: FBSSceneIdentityToken *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (oneway void)setExternalSceneIdentities:(NSSet<__NSString__> *)arg1;
- (oneway void)stopApplyingAdditionalDeferringRulesWhenSceneHasKeyboardFocus:(FBSSceneIdentityToken *)arg1 pid:(NSNumber *)arg2;

@end
