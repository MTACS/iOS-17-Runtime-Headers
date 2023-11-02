
@protocol SVXSpeechSynthesisListening <NSObject>

@required

- (void)speechSynthesizerDidBecomeBusy;
- (void)speechSynthesizerDidBecomeIdle;
- (void)speechSynthesizerDidCancelRequest:(SVXSpeechSynthesisRequest *)arg1 taskTracker:(id <SVXTaskTracking>)arg2;
- (void)speechSynthesizerDidFailRequest:(SVXSpeechSynthesisRequest *)arg1 taskTracker:(id <SVXTaskTracking>)arg2 error:(NSError *)arg3;
- (void)speechSynthesizerDidFinishRequest:(SVXSpeechSynthesisRequest *)arg1 utteranceInfo:(SVXSpeechSynthesisUtteranceInfo *)arg2 record:(AFSpeechSynthesisRecord *)arg3 taskTracker:(id <SVXTaskTracking>)arg4;
- (void)speechSynthesizerDidInterruptRequest:(SVXSpeechSynthesisRequest *)arg1 taskTracker:(id <SVXTaskTracking>)arg2;
- (void)speechSynthesizerDidStartRequest:(SVXSpeechSynthesisRequest *)arg1 record:(AFSpeechSynthesisRecord *)arg2 taskTracker:(id <SVXTaskTracking>)arg3;
- (void)speechSynthesizerWillEnqueueRequest:(SVXSpeechSynthesisRequest *)arg1 taskTracker:(id <SVXTaskTracking>)arg2;
- (void)speechSynthesizerWillStartRequest:(SVXSpeechSynthesisRequest *)arg1 taskTracker:(id <SVXTaskTracking>)arg2;

@end
