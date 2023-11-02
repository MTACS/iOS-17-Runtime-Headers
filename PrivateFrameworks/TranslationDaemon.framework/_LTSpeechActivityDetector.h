
@interface _LTSpeechActivityDetector : NSObject <SNResultsObserving> {
    <_LTSpeechTranslationDelegate> * _delegate;
    long long  _position;
    NSObject<OS_dispatch_queue> * _queue;
    SNAudioStreamAnalyzer * _streamAnalyzer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSpeechAudioData:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)nativeAudioFormat;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;

@end
