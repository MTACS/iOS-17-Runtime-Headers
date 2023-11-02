
@interface PVLivePlayerImageSource : NSObject <PVLivePlayerSource> {
    PVFrameSet * _imageFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)imageBufferForHostTime:(double)arg1;
- (id)initWithPVImageBuffer:(id)arg1;
- (id)initWithUImage:(id)arg1;
- (id)initWithURL:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTimeForHostTime:(double)arg1;
- (void)pause;
- (void)play;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMuted:(bool)arg1;

@end
