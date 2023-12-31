
@interface NADeallocationSentinel : NSObject <NADeallocationTracerDelegate> {
    id /* block */  _finalizer;
    id  _targetObject;
    NADeallocationTracer * _tracer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ finalizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id targetObject;
@property (nonatomic, readonly) NADeallocationTracer *tracer;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)finalizer;
- (id)initWithTargetObject:(id)arg1 finalizer:(id /* block */)arg2;
- (id)targetObject;
- (id)tracer;
- (void)tracerIsDeallocating;

@end
