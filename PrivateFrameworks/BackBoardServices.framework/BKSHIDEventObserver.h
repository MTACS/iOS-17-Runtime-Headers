
@interface BKSHIDEventObserver : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    BSServiceConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _lock_deferringAssertionsToObservers;
    NSSet * _lock_deferringResolutions;
}

@property (nonatomic, readonly) NSSet *deferringResolutions;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)_lock_disableObservation;
- (void)_lock_enableObservation;
- (id)addDeferringObserver:(id)arg1;
- (id)deferringResolutions;
- (void)didUpdateDeferringResolutions:(id)arg1;
- (id)init;

@end
