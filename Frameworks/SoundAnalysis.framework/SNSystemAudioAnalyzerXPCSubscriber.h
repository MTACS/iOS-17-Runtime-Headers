
@interface SNSystemAudioAnalyzerXPCSubscriber : NSObject <SNSystemAudioAnalyzerProtocol, SNSystemAudioAnalyzerXPCProtocol> {
    void receiver;
    void remoteObservers;
}

- (void).cxx_destruct;
- (bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3;
- (id)init;
- (void)removeAllRequests;
- (void)removeRequest:(id)arg1;
- (void)setAudioConfiguration:(id)arg1;
- (void)xpcAddRequest:(id)arg1 withObserver:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)xpcRemoveAllRequestsWithCompletionHandler:(id /* block */)arg1;
- (void)xpcRemoveRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)xpcSetAudioConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;

@end
