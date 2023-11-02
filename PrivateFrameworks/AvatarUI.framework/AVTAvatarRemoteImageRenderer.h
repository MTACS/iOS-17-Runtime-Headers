
@interface AVTAvatarRemoteImageRenderer : NSObject {
    NSXPCConnection * _connection;
    <AVTUILogger> * _logger;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) <AVTUILogger> *logger;

- (void).cxx_destruct;
- (void)_requestStickerAndCacheWithProxy:(id)arg1 avatarRecord:(id)arg2 stickerPackName:(id)arg3 stickerConfigurationName:(id)arg4 resource:(id)arg5 reply:(id /* block */)arg6;
- (id)_setupConnection;
- (void)_startRequestWithRetryCount:(unsigned long long)arg1 withReply:(id /* block */)arg2 connectionRequestHandler:(id /* block */)arg3;
- (void)_tearDownService;
- (id)connection;
- (void)getSnapshotAndCacheForAvatarRecord:(id)arg1 scope:(id)arg2 withReply:(id /* block */)arg3;
- (void)getSnapshotForAvatar:(id)arg1 scope:(id)arg2 withModifications:(id)arg3 withReply:(id /* block */)arg4;
- (void)getSnapshotForAvatar:(id)arg1 scope:(id)arg2 withReply:(id /* block */)arg3;
- (void)getStickerAndCacheForAvatarRecord:(id)arg1 withStickerPackName:(id)arg2 stickerConfigurationName:(id)arg3 resource:(id)arg4 withReply:(id /* block */)arg5;
- (id)init;
- (id)initWithEnvironment:(id)arg1;
- (id)logger;

@end
