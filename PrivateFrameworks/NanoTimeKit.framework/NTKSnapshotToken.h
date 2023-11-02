
@interface NTKSnapshotToken : NSObject {
    id /* block */  _callback;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _lock_priority;
    NTKSnapshotRequest * _request;
}

@property (nonatomic) unsigned long long priority;

- (void).cxx_destruct;
- (id /* block */)callback;
- (void)dealloc;
- (id)initWithPriority:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)arg1;
- (void)setRequest:(id)arg1;
- (void)stopObservingCallbacks;

@end
