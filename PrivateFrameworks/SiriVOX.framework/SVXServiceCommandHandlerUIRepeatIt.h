
@interface SVXServiceCommandHandlerUIRepeatIt : NSObject <SVXServiceCommandHandling, SVXSpeechSynthesisListening> {
    NSString * _identifier;
    SVXSpeechSynthesisRequest * _lastStartedRequest;
    <SVXPerforming> * _performer;
    SVXSpeechSynthesizer * _speechSynthesizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

+ (Class)supportedCommandClass;

- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(id /* block */)arg4;
- (id)identifier;
- (id)initWithSpeechSynthesizer:(id)arg1 performer:(id)arg2;
- (bool)isCommandUUFR:(id)arg1;
- (bool)shouldDependOnCommand:(id)arg1;
- (void)speechSynthesizerDidBecomeBusy;
- (void)speechSynthesizerDidBecomeIdle;
- (void)speechSynthesizerDidCancelRequest:(id)arg1 taskTracker:(id)arg2;
- (void)speechSynthesizerDidFailRequest:(id)arg1 taskTracker:(id)arg2 error:(id)arg3;
- (void)speechSynthesizerDidFinishRequest:(id)arg1 utteranceInfo:(id)arg2 record:(id)arg3 taskTracker:(id)arg4;
- (void)speechSynthesizerDidInterruptRequest:(id)arg1 taskTracker:(id)arg2;
- (void)speechSynthesizerDidStartRequest:(id)arg1 record:(id)arg2 taskTracker:(id)arg3;
- (void)speechSynthesizerWillEnqueueRequest:(id)arg1 taskTracker:(id)arg2;
- (void)speechSynthesizerWillStartRequest:(id)arg1 taskTracker:(id)arg2;

@end
