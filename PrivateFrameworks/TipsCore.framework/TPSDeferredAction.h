
@interface TPSDeferredAction : NSObject {
    <TPSDeferredActionDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _scheduled;
}

@property (nonatomic) <TPSDeferredActionDelegate> *delegate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool scheduled;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)queue;
- (void)scheduleNextRunLoop;
- (bool)scheduled;
- (void)setDelegate:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setQueue:(id)arg1;
- (void)setScheduled:(bool)arg1;

@end
