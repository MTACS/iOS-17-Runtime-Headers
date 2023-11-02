
@protocol SNResultsObservingXPCProtocol <NSObject>

@required

- (void)xpcRequest:(void *)arg1 didFailWithError:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: <SNRequest> *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcRequest:(void *)arg1 didProduceResult:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: <SNRequest> *, <SNResult> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcRequestDidComplete:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: <SNRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
