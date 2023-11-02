
@interface PVLivePlayerCameraSource : NSObject <PVLivePlayerSource> {
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _lock;
    PVFrameSet * _mostRecentFrameSet;
    PVLivePlayerCameraRenderLink * _renderLink;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cameraFrameSetDropped;
- (void)cameraFrameSetRecieved:(id)arg1;
- (void)dealloc;
- (id)imageBufferForHostTime:(double)arg1;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTimeForHostTime:(double)arg1;
- (void)pause;
- (void)play;
- (void)registerRenderLink:(id)arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMuted:(bool)arg1;

@end
