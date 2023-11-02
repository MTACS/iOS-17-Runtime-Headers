
@protocol SKStepable <NSObject>

@required

- (void)activate;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)invalidate;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setSkCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setSkMessaging:(id <CUMessaging>)arg1;
- (void)setSkSetupObject:(SKSetupBase *)arg1;
- (id /* block */)skCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (<CUMessaging> *)skMessaging;
- (SKSetupBase *)skSetupObject;

@end
