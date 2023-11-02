
@interface AVTAvatarImageRenderer : NSObject {
    <AVTUILogger> * _logger;
    AVTAvatarRemoteImageRenderer * _remoteImageRenderer;
    AVTSnapshotBuilder * _snapshotBuilder;
    NSObject<OS_dispatch_queue> * _snapshotBuilderQueue;
}

@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, retain) AVTAvatarRemoteImageRenderer *remoteImageRenderer;
@property (nonatomic, retain) AVTSnapshotBuilder *snapshotBuilder;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *snapshotBuilderQueue;

- (void).cxx_destruct;
- (id)_imageForAvatar:(id)arg1 scope:(id)arg2;
- (double)fieldOfViewForNodeWithName:(id)arg1;
- (id)imageForAvatar:(id)arg1 scope:(id)arg2;
- (id)imageForAvatar:(id)arg1 scope:(id)arg2 usingService:(bool)arg3;
- (id)imageForAvatar:(id)arg1 scope:(id)arg2 withSCNModifications:(id)arg3 usingService:(bool)arg4;
- (id)init;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithSceneNodeModifications:(id)arg1;
- (id)initWithSnapshotBuilder:(id)arg1 lockProvider:(id /* block */)arg2 remoteImageRenderer:(id)arg3 logger:(id)arg4;
- (id)logger;
- (id)nts_imageForAvatar:(id)arg1 scope:(id)arg2;
- (id)remoteImageRenderer;
- (void)setRemoteImageRenderer:(id)arg1;
- (void)setSnapshotBuilder:(id)arg1;
- (id)snapshotBuilder;
- (id)snapshotBuilderQueue;
- (void)updateSnapshotBuilderModifications:(id)arg1;

@end
