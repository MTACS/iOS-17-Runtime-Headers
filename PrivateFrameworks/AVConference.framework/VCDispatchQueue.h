
@interface VCDispatchQueue : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSMutableArray * _rootQueues;
}

+ (id)defaultManager;

- (void)dealloc;
- (id)getCustomRootQueueWithPriority:(int)arg1 isFixedPriority:(bool)arg2;
- (id)init;

@end
