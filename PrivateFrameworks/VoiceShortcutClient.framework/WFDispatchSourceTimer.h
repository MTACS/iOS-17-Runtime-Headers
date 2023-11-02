
@interface WFDispatchSourceTimer : NSObject {
    RBSAssertion * _assertion;
    bool  _preventSuspension;
    NSObject<OS_dispatch_source> * _source;
}

@property (nonatomic, retain) RBSAssertion *assertion;
@property (nonatomic) bool preventSuspension;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *source;

- (void).cxx_destruct;
- (id)assertion;
- (void)cancel;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (id)initWithInterval:(double)arg1 repeatInterval:(double)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (id)initWithInterval:(double)arg1 repeatIntervalInt:(unsigned long long)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (bool)isCancelled;
- (bool)preventSuspension;
- (void)setAssertion:(id)arg1;
- (void)setPreventSuspension:(bool)arg1;
- (id)source;
- (void)start;

@end
