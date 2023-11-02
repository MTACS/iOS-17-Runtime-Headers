
@protocol DKDiagnosticHostRemoteContext <NSObject>

@required

- (void)remoteHostCompleteWithResult:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: DKDiagnosticResult *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)remoteHostDisplayAlertWithHeader:(void *)arg1 message:(void *)arg2 buttonStrings:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)remoteHostEnableVolumeHUD:(bool)arg1;
- (void)remoteHostGetAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)remoteHostRequestPluginReloadOnFinishWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)remoteHostSetScreenToBrightness:(float)arg1 animate:(bool)arg2;
- (void)remoteHostShowUI:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)remoteHostUnpairSessionAccessoryOnTestCompletion;
- (void)remoteHostUpdateProgress:(DKDiagnosticProgress *)arg1 forTest:(NSNumber *)arg2;
- (void)remoteHostUploadAssets:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: DKAssetUploadItems *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
