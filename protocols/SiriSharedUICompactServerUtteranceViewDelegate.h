
@protocol SiriSharedUICompactServerUtteranceViewDelegate

@required

- (<SRUIFSpeakableObjectProviding> *)parserSpeakableObjectProviderForServerUtterance:(SiriSharedUICompactServerUtteranceView *)arg1;
- (void)serverUtteranceView:(SiriSharedUICompactServerUtteranceView *)arg1 utteranceViewDidAppear:(SAUIAssistantUtteranceView *)arg2;
- (void)serverUtteranceView:(SiriSharedUICompactServerUtteranceView *)arg1 utteranceViewDidDisappear:(SAUIAssistantUtteranceView *)arg2;

@end
