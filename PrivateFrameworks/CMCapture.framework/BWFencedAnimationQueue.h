
@interface BWFencedAnimationQueue : NSObject {
    unsigned int  _fencedAnimationFramerateThrottle;
    NSMutableArray * _fencedAnimationQueue;
    NSObject<OS_dispatch_semaphore> * _fencedAnimationQueueSemaphore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _queueLock;
    double  _timeOfLastFencedAnimation;
}

@property (readonly) unsigned long long count;

- (unsigned long long)count;
- (void)dealloc;
- (id)dequeueFencedAnimation;
- (void)enqueueFencedAnimation:(id)arg1;
- (void)flush;
- (id)initWithQueueSize:(unsigned int)arg1;

@end
