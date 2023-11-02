
@interface SBSDispatch : NSObject <SBSDispatchProtocol> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)async:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)sync:(id /* block */)arg1;

@end
