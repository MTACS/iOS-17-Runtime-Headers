
@interface _NSOperationQueueProgress : NSProgress {
    NSOperationQueue * _queue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _queueLock;
}

- (void)setTotalUnitCount:(long long)arg1;

@end
