
@interface WBSOneShotTimer : NSObject {
    id /* block */  _block;
    NSDate * _fireDate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSDate *fireDate;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)fireDate;
- (id)initWithFireDate:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)initWithFireDate:(id)arg1 queue:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)invalidate;
- (bool)isValid;
- (id)queue;

@end
