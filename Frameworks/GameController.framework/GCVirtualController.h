
@interface GCVirtualController : NSObject {
    NSError * _error;
    _GCVirtualControllerImpl * _impl;
}

@property (nonatomic, readonly) GCController *controller;

+ (id)virtualControllerWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)connectWithReplyHandler:(id /* block */)arg1;
- (id)controller;
- (void)disconnect;
- (id)initWithConfiguration:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1 forDirectionPadElement:(id)arg2;
- (void)setValue:(double)arg1 forButtonElement:(id)arg2;
- (void)updateConfigurationForElement:(id)arg1 configuration:(id /* block */)arg2;

@end
