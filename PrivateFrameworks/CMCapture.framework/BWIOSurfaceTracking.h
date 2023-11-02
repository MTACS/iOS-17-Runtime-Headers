
@interface BWIOSurfaceTracking : NSObject {
    NSMutableArray * _trackedSurfaces;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _trackedSurfacesLock;
}

+ (void)initialize;
+ (void)noteSurfaceIDInUse:(unsigned int)arg1 byClient:(id)arg2;
+ (void)noteSurfaceIDNoLongerInUse:(unsigned int)arg1 byClient:(id)arg2;
+ (void)trackPixelBuffer:(struct __CVBuffer { }*)arg1 surfaceUseCountIsZeroHandler:(id /* block */)arg2;

- (void)dealloc;
- (id)init;

@end
