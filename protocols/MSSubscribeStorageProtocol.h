
@protocol MSSubscribeStorageProtocol <MSStorageProtocol>

@required

- (void)abort;
- (<MSSubscribeStorageProtocolDelegate> *)delegate;
- (void)retrieveAssets:(NSArray *)arg1;
- (void)setDelegate:(id <MSSubscribeStorageProtocolDelegate>)arg1;

@end
