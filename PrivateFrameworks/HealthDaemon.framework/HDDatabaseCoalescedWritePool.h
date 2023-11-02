
@interface HDDatabaseCoalescedWritePool : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _loggingCategory;
    NSString * _name;
    _HKDelayedOperation * _pendingWriteOperation;
    NSMutableArray * _pendingWriteQueue;
    HDProfile * _profile;
    HDCoalescedTaskPoolQuota * _quota;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, copy) HDCoalescedTaskPoolQuota *quota;

- (void).cxx_destruct;
- (void)flushPendingWriteQueueWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1 name:(id)arg2 loggingCategory:(id)arg3;
- (void)performWriteWithMaximumLatency:(double)arg1 block:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)profile;
- (id)quota;
- (void)setQuota:(id)arg1;

@end
