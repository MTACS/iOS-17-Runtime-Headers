
@interface REDispatchQueuePool : NSObject {
    unsigned long long  _currentIndex;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _queues;
}

- (void).cxx_destruct;
- (id)initWithQueueCount:(unsigned long long)arg1 prefix:(id)arg2;
- (id)nextAvailableQueue;

@end
