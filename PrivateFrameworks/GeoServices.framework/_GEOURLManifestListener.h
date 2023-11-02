
@interface _GEOURLManifestListener : NSObject {
    NSMutableArray * _handlers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

+ (id)sharedListener;

- (void).cxx_destruct;
- (void)_finish:(bool)arg1;
- (id)init;
- (void)waitForManifestWithCallback:(id)arg1;

@end
