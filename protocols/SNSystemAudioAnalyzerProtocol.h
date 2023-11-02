
@protocol SNSystemAudioAnalyzerProtocol

@required

- (bool)addRequest:(id <SNRequest>)arg1 withObserver:(id <SNResultsObserving>)arg2 error:(id*)arg3;
- (void)removeAllRequests;
- (void)removeRequest:(id <SNRequest>)arg1;
- (void)setAudioConfiguration:(SNAudioConfiguration *)arg1;

@end
