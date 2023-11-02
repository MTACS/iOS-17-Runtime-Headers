
@interface ARSessionFrameObserver : NSObject <ARInternalSessionObserver> {
    struct function<void (rf::data_flow::provider::InputFrame &&)>="__f_"{__value_func<void (rf::data_flow::provider::InputFrame &&)>="__buf_"{type="__lx"[24C] {}  _callback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCallback:(struct function<void (rf::data_flow::provider::InputFrame &&)>={__value_func<void (rf::data_flow::provider::InputFrame &&)>={type=[24C] {})arg1;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)setCallback:(struct function<void (rf::data_flow::provider::InputFrame &&)>={__value_func<void (rf::data_flow::provider::InputFrame &&)>={type=[24C] {})arg1;

@end
