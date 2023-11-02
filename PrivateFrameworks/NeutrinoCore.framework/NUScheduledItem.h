
@interface NUScheduledItem : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _scheduledTime;
}

@property (readonly) id /* block */ block;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long scheduledTime;

- (void).cxx_destruct;
- (id /* block */)block;
- (long long)compare:(id)arg1;
- (void)dispatch;
- (id)initWithScheduledTime:(unsigned long long)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)queue;
- (unsigned long long)scheduledTime;

@end
