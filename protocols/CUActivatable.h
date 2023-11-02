
@protocol CUActivatable

@required

- (void)activateWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)invalidate;
- (id /* block */)invalidationHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setInvalidationHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
