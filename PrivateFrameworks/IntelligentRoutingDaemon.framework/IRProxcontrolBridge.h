
@interface IRProxcontrolBridge : NSObject <IRProximityBridgeProtocol> {
    <IRProximityBridgeDelegateProtocol> * _delegate;
    NSString * _name;
    PCLockscreenControlsObserver * _pclControlsObserver;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IRProximityBridgeDelegateProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) PCLockscreenControlsObserver *pclControlsObserver;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createProxControlObserver;
- (void)_runProxControlObserver;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 name:(id)arg2;
- (void)invalidate;
- (id)name;
- (id)pclControlsObserver;
- (id)queue;
- (void)run;
- (void)setDelegate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPclControlsObserver:(id)arg1;
- (void)setQueue:(id)arg1;

@end
