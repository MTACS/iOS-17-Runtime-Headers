
@interface _LABKOperation : NSObject <BKOperationDelegate> {
    BKOperation * __BKOperation;
    <BKOperationDelegate> * _delegate;
    _LABKDevice * _device;
    bool  _isUserPresent;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
}

@property (nonatomic, readonly) BKOperation *_BKOperation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BKOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _LABKDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isUserPresent;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

+ (id)_wrapperForBKOperation:(id)arg1 device:(id)arg2;

- (void).cxx_destruct;
- (id)_BKOperation;
- (id)_initWithBKOperation:(id)arg1 device:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)device;
- (void)dispatchDelegateSelector:(SEL)arg1 block:(id /* block */)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (bool)isUserPresent;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)operation:(id)arg1 finishedWithReason:(long long)arg2;
- (void)operation:(id)arg1 presenceStateChanged:(bool)arg2;
- (void)operation:(id)arg1 stateChanged:(long long)arg2;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setIsUserPresent:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setState:(long long)arg1;
- (id)shim;
- (bool)startWithError:(id*)arg1;
- (void)startWithReply:(id /* block */)arg1;
- (long long)state;

@end
