
@protocol SBSExternalDisplayServiceClientToServerInterface <NSObject>

@required

- (oneway void)getConnectedDisplayInfoWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray<__SBSConnectedDisplayInfo__> *, NSError *, void*
- (oneway void)setDisplayArrangement:(SBSRelativeDisplayArrangement *)arg1 forDisplay:(NSString *)arg2;
- (oneway void)setDisplayMirroringEnabled:(NSNumber *)arg1 forDisplay:(NSString *)arg2;
- (oneway void)setDisplayModeSettings:(void *)arg1 forDisplay:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: SBSDisplayModeSettings *, NSString *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
