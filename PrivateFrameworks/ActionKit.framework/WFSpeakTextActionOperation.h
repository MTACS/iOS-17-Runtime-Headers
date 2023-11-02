
@interface WFSpeakTextActionOperation : NSObject <WFActionExtendedOperation, WFSpeechSynthesizerDelegate> {
    NSMutableArray * _completionHandlers;
    NSProgress * _progress;
    NSObject<OS_dispatch_queue> * _queue;
    WFSpeechSynthesizer * _synthesizer;
}

@property (nonatomic, readonly) NSMutableArray *completionHandlers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSProgress *progress;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFSpeechSynthesizer *synthesizer;

- (void).cxx_destruct;
- (void)addCompletionHandlerIfRunning:(id /* block */)arg1;
- (void)callCompletionHandlersWithError:(id)arg1;
- (void)cancel;
- (void)cleanupSpeechSynthesizer;
- (id)completionHandlers;
- (id)init;
- (id)progress;
- (id)queue;
- (void)setProgress:(id)arg1;
- (void)speakTextUsingSynthesizer:(id)arg1 voice:(id)arg2 rate:(float)arg3 pitch:(float)arg4;
- (void)speechSynthesizer:(id)arg1 didFailSpeakingUtterance:(id)arg2 error:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfUtterance:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 utterance:(id)arg3;
- (id)synthesizer;

@end
