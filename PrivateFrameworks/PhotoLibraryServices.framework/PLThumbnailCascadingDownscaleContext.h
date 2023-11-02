
@interface PLThumbnailCascadingDownscaleContext : NSObject {
    PLThumbnailContextCleanupTimer * _idleCleanupTimer;
    struct _CMPhotoCascadeContext { } * _landscapeContext;
    NSLock * _lock;
    struct _CMPhotoCascadeContext { } * _portraitContext;
}

- (void).cxx_destruct;
- (void)_cleanupTimerFired;
- (void)dealloc;
- (void)discardContexts;
- (bool)downscaleImageSurface:(struct __IOSurface { }*)arg1 destinationCount:(int)arg2 sizes:(struct { int x1; int x2; }*)arg3 cropModes:(int*)arg4 pixelFormat:(unsigned int)arg5 bytesPerRowAlignment:(int)arg6 destinationData:(id)arg7;
- (id)init;

@end
