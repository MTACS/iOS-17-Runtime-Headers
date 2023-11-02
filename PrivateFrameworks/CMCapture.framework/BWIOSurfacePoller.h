
@interface BWIOSurfacePoller : NSObject {
    NSObject<OS_dispatch_source> * _pollingTimer;
    NSMutableArray * _trackedSurfaces;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _trackedSurfacesLock;
}

+ (void)trackSurface:(struct __IOSurface { }*)arg1 useCountIsZeroHandler:(id /* block */)arg2;

- (void)dealloc;
- (id)init;

@end
