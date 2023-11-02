
@protocol MSSubscribeStorageProtocolDelegate <NSObject>

@required

- (void)subscribeStorageProtocol:(id <MSSubscribeStorageProtocol>)arg1 didFinishRetrievingAsset:(MSAsset *)arg2 error:(NSError *)arg3;
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id <MSSubscribeStorageProtocol>)arg1;

@end
