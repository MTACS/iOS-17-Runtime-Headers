
@protocol CBPairable <NSObject>

@required

- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (id /* block */)pairingCompletedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, CBDevice *, NSError *, void*, id, SEL
- (void)pairingPerformAction:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)pairingPerformAction:(void *)arg1 withOptions:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: int, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (id /* block */)pairingPromptHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, CBPairingInfo *, void*, id, SEL
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setPairingCompletedHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CBDevice *, NSError *, void*
- (void)setPairingPromptHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CBPairingInfo *, void*

@end
