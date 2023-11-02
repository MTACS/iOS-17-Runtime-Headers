
@interface SBAtomicObjectQueue : NSObject {
    NSMutableArray * _data;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)init;

@end
