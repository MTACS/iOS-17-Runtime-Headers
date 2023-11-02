
@protocol MSPublishStorageProtocolDelegate <NSObject>

@required

- (void)publishStorageProtocol:(id <MSPublishStorageProtocol>)arg1 didFinishUploadingAsset:(MSAsset *)arg2 error:(NSError *)arg3;
- (void)publishStorageProtocol:(id <MSPublishStorageProtocol>)arg1 didFinishUsingFD:(int)arg2 forAsset:(MSAsset *)arg3;
- (int)publishStorageProtocol:(id <MSPublishStorageProtocol>)arg1 didRequestFDForAsset:(MSAsset *)arg2;
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(id <MSPublishStorageProtocol>)arg1;

@end
