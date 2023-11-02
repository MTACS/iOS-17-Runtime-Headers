
@interface _CFPrefsSynchronizer : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _CFPrefsDirtySourcesLock;
    bool  _active;
    struct __CFSet { } * _dirtySources;
    NSObject<OS_dispatch_queue> * _synchQueue;
    NSObject<OS_dispatch_source> * _synchTimer;
}

- (id)init;

@end
