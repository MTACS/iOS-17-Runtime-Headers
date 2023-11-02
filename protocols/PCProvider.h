
@protocol PCProvider <NSObject>

@required

- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (id /* block */)displayContextHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, PCDisplayContext *, void*, id, SEL
- (id /* block */)progressEventHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, PCProgressEvent *, void*, id, SEL
- (void)receiveEvent:(PCProximityEvent *)arg1;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setDisplayContextHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PCDisplayContext *, void*
- (void)setProgressEventHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PCProgressEvent *, void*

@end
