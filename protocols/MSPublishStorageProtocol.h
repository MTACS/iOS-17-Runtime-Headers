
@protocol MSPublishStorageProtocol <MSStorageProtocol>

@required

- (void)abort;
- (void)computeHashForAsset:(MSAsset *)arg1;
- (<MSPublishStorageProtocolDelegate> *)delegate;
- (void)publishAssets:(NSArray *)arg1 URL:(NSURL *)arg2;
- (void)setDelegate:(id <MSPublishStorageProtocolDelegate>)arg1;

@end
