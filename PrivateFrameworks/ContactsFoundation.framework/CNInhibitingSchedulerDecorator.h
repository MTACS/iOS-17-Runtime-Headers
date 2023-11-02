
@interface CNInhibitingSchedulerDecorator : NSObject <CNScheduler> {
    id /* block */  _inhibitorFactory;
    <CNScheduler> * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ inhibitorFactory;
@property (nonatomic, readonly) <CNScheduler> *scheduler;
@property (readonly) Class superclass;
@property (readonly) double timestamp;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2 qualityOfService:(unsigned long long)arg3;
- (id /* block */)inhibitorFactory;
- (id)initWithScheduler:(id)arg1 inhibitorFactory:(id /* block */)arg2;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)scheduler;
- (double)timestamp;

@end
