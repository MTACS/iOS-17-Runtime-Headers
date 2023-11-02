
@interface AVTStickerGenerator : NSObject {
    bool  _async;
    AVTAvatar * _avatar;
    AVTStickerConfigurationReversionContext * _context;
    AVTRenderer * _renderer;
    AVTSnapshotHelper * _snapshotHelper;
}

@property (nonatomic) bool async;
@property (nonatomic, retain) AVTAvatar *avatar;

+ (id)addCamera:(id)arg1 inScene:(id)arg2 reversionContext:(id)arg3;
+ (void)addProps:(id)arg1 toScene:(id)arg2 forAvatar:(id)arg3 withCamera:(id)arg4 options:(id)arg5 reversionContext:(id)arg6;
+ (void)applyViewTransitionConfiguration:(id)arg1 toNewComponentAssetNode:(id)arg2;
+ (void)applyViewTransitionConfiguration:(id)arg1 toView:(id)arg2 scope:(unsigned long long)arg3 options:(unsigned long long)arg4 duration:(double)arg5 avatar:(id)arg6 context:(id)arg7 completionHandler:(id /* block */)arg8;
+ (id)findNodesNamed:(id)arg1 inHierarchy:(id)arg2;
+ (id)poseByApplyingAdjustmentsForConfiguration:(id)arg1 avatar:(id)arg2;
+ (id)workQueue;

- (void).cxx_destruct;
- (void)_snapshotAtTime:(double)arg1 configuration:(id)arg2 options:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_stickerImageWithConfiguration:(id)arg1 options:(id)arg2 startTime:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)applyConfiguration:(id)arg1 options:(id)arg2 snapshotBlock:(id /* block */)arg3;
- (bool)async;
- (id)avatar;
- (void)dealloc;
- (id)initWithAvatar:(id)arg1;
- (void)posterWithConfiguration:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAsync:(bool)arg1;
- (void)setAvatar:(id)arg1;
- (void)stickerImageWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stickerImageWithConfiguration:(id)arg1 correctClipping:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)stickerImageWithConfiguration:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateConfiguration:(id)arg1 atTime:(double)arg2;

@end
