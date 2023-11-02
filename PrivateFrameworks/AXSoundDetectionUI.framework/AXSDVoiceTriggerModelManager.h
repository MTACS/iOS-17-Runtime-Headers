
@interface AXSDVoiceTriggerModelManager : NSObject <AXSDVoiceTriggerAssetManagerDelegate, SNResultsObserving> {
    AXSDVoiceTriggerAssetManager * _assetManager;
    NSURL * _assetPath;
    <AXSDVoiceTriggerModelManagerDelegate> * _delegate;
    AVAudioFormat * _format;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _startRequested;
    SNAudioStreamAnalyzer * _streamAnalyzer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXSDVoiceTriggerModelManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_readConfigFileWithError:(id*)arg1;
- (void)_startListening;
- (void)_stopListeningWithError:(id)arg1;
- (id)delegate;
- (id)initWithError:(id*)arg1;
- (void)modelDidUpdate:(id)arg1 assetVersion:(unsigned long long)arg2 withError:(id)arg3;
- (void)processAudioBuffer:(id)arg1 atTime:(id)arg2;
- (id)processingQueue;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)startListeningWithFormat:(id)arg1;
- (void)stopListening;

@end
