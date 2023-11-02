
@interface SNSystemAudioAnalyzer : NSObject {
    <SNSystemAudioAnalyzerProtocol> * _impl;
}

+ (void)configureNewAnalyzersToComputeInThisProcess:(bool)arg1;

- (void).cxx_destruct;
- (bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3;
- (void)addRequestInBackground:(id)arg1 withObserver:(id)arg2;
- (id)init;
- (id)initWithAudioConfiguration:(id)arg1;
- (void)removeAllRequests;
- (void)removeRequest:(id)arg1;
- (void)start;
- (void)stop;

@end
