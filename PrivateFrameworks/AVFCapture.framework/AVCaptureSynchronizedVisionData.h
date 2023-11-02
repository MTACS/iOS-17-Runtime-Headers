
@interface AVCaptureSynchronizedVisionData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedVisionDataInternal * _internal;
}

@property (readonly) long long droppedReason;
@property (readonly) struct __CVBuffer { }*visionDataPixelBuffer;
@property (readonly) bool visionDataWasDropped;

- (id)_initWithVisionDataPixelBuffer:(struct __CVBuffer { }*)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 visionDataWasDropped:(bool)arg3 droppedReason:(long long)arg4;
- (void)dealloc;
- (long long)droppedReason;
- (struct __CVBuffer { }*)visionDataPixelBuffer;
- (bool)visionDataWasDropped;

@end
