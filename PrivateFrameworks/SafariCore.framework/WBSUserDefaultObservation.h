
@interface WBSUserDefaultObservation : NSObject <WBSUserDefaultObservation> {
    NSUserDefaults * _defaults;
    id /* block */  _handler;
    NSString * _key;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUserDefaults:(id)arg1 key:(id)arg2 queue:(id)arg3 notifyForInitialValue:(bool)arg4 handler:(id /* block */)arg5;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
