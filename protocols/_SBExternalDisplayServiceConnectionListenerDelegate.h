
@protocol _SBExternalDisplayServiceConnectionListenerDelegate <NSObject>

@required

- (void)client:(void *)arg1 getConnectedDisplayInfoWithCompletion:(void *)arg2; // needs 2 arg types, found 8: _SBExternalDisplayServiceClient *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)client:(_SBExternalDisplayServiceClient *)arg1 setDisplayArrangement:(SBSRelativeDisplayArrangement *)arg2 forDisplay:(NSString *)arg3;
- (void)client:(_SBExternalDisplayServiceClient *)arg1 setDisplayMirroringEnabled:(NSNumber *)arg2 forDisplay:(NSString *)arg3;
- (void)client:(void *)arg1 setDisplayModeSettings:(void *)arg2 forDisplay:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: _SBExternalDisplayServiceClient *, SBSDisplayModeSettings *, NSString *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
