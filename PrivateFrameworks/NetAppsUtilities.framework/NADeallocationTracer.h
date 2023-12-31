
@interface NADeallocationTracer : NSObject {
    <NADeallocationTracerDelegate> * _delegate;
}

@property (nonatomic) <NADeallocationTracerDelegate> *delegate;

- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
