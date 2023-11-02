
@interface MRBlockGuard : MSVBlockGuard

- (id)initWithTimeout:(double)arg1 reason:(id)arg2 handler:(id /* block */)arg3;
- (id)initWithTimeout:(double)arg1 reason:(id)arg2 queue:(id)arg3 handler:(id /* block */)arg4;

@end
