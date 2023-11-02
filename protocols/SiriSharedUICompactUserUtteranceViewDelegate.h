
@protocol SiriSharedUICompactUserUtteranceViewDelegate

@required

- (void)userUtteranceView:(SiriSharedUICompactUserUtteranceView *)arg1 speechRecognitionHypothesisDidAppear:(SRUIFSpeechRecognitionHypothesis *)arg2;
- (void)userUtteranceView:(SiriSharedUICompactUserUtteranceView *)arg1 speechRecognitionHypothesisDidDisappear:(SRUIFSpeechRecognitionHypothesis *)arg2;
- (void)userUtteranceViewTapped:(SiriSharedUICompactUserUtteranceView *)arg1;

@end
