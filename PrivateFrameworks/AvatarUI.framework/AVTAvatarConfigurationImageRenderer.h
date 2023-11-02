
@interface AVTAvatarConfigurationImageRenderer : NSObject {
    AVTMemoji * _avatar;
    <AVTUILogger> * _logger;
    AVTSnapshotBuilder * _snapshotBuilder;
    NSObject<OS_dispatch_queue> * _snapshotBuilderQueue;
}

@property (nonatomic, readonly) AVTMemoji *avatar;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, retain) AVTSnapshotBuilder *snapshotBuilder;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *snapshotBuilderQueue;

- (void).cxx_destruct;
- (id)avatar;
- (id)imageForAvatarConfiguration:(id)arg1 scope:(id)arg2;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 avatar:(id)arg2;
- (id)initWithSnapshotBuilder:(id)arg1 avatar:(id)arg2 lockProvider:(id /* block */)arg3 logger:(id)arg4;
- (id)logger;
- (id)nts_imageForAvatarConfiguration:(id)arg1 scope:(id)arg2;
- (void)setSnapshotBuilder:(id)arg1;
- (id)snapshotBuilder;
- (id)snapshotBuilderQueue;

@end
