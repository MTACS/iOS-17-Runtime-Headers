
@protocol SNSystemAudioAnalyzerXPCProtocol <NSObject>

@required

- (void)xpcAddRequest:(void *)arg1 withObserver:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: <SNRequest> *, <SNResultsObservingXPCProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcRemoveAllRequestsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcRemoveRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: <SNRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcSetAudioConfiguration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: SNAudioConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
