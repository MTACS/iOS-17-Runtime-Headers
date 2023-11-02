
@interface PDSQueueProxy : NSProxy {
    unsigned long long  _mode;
    NSObject<OS_dispatch_queue> * _queue;
    id  _target;
}

@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) id target;

- (void).cxx_destruct;
- (bool)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 queue:(id)arg2 mode:(unsigned long long)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned long long)mode;
- (id)queue;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
