
@interface RFARSessionObserver : NSObject <ARInternalSessionObserver> {
    NSObject<OS_dispatch_queue> * _backgroundComputeQueue;
    struct function<void (rf::data_flow::provider::InputData &&)>="__f_"{__value_func<void (rf::data_flow::provider::InputData &&)>="__buf_"{type="__lx"[24C] {}  _callback;
    NSObject<OS_dispatch_group> * _dispatchGroup;
    bool  _pinchLeft;
    bool  _pinchRight;
    bool  isUsingV1;
    struct function<void (rf::data_flow::provider::InputData &&)>="__f_"{__value_func<void (rf::data_flow::provider::InputData &&)>="__buf_"{type="__lx"[24C] {}  m_callback;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *backgroundComputeQueue;
@property (nonatomic) struct function<void (rf::data_flow::provider::InputData &&)>={__value_func<void (rf::data_flow::provider::InputData &&)>={type=[24C] {} callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *dispatchGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool pinchLeft;
@property (nonatomic, readonly) bool pinchRight;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)backgroundComputeQueue;
- (struct function<void (rf::data_flow::provider::InputData &&)>={__value_func<void (rf::data_flow::provider::InputData &&)>={type=[24C] {})callback;
- (void)dealloc;
- (id)dispatchGroup;
- (id)init;
- (bool)pinchLeft;
- (bool)pinchRight;
- (void)processAddedAnchors:(id)arg1;
- (void)processRemovedAnchors:(id)arg1;
- (void)processUpdatedAnchors:(id)arg1;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (void)session:(id)arg1 didRemoveAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateAnchors:(id)arg2;
- (void)setBackgroundComputeQueue:(id)arg1;
- (void)setCallback:(struct function<void (rf::data_flow::provider::InputData &&)>={__value_func<void (rf::data_flow::provider::InputData &&)>={type=[24C] {})arg1;
- (void)setDispatchGroup:(id)arg1;
- (void)updateSession:(id)arg1 withTime:(double)arg2;

@end
