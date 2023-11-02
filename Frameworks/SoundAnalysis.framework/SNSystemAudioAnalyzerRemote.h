
@interface SNSystemAudioAnalyzerRemote : NSObject <SNSystemAudioAnalyzerProtocol> {
    <SNSystemAudioAnalyzerProtocol> * _analyzer;
    SNAudioConfiguration * _audioConfiguration;
    id /* block */  _generator;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _registeredRequests;
}

- (void).cxx_destruct;
- (bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3;
- (id)init;
- (void)removeAllRequests;
- (void)removeRequest:(id)arg1;
- (void)setAudioConfiguration:(id)arg1;

@end
