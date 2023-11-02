
@protocol DARemoteRunnerClientProtocol <NSObject>

@required

- (void)remoteRunnerDeviceEnded;
- (void)requestAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)requestUploadAssets:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: DKAssetUploadItems *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
