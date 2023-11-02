
@protocol SiriSharedUICompactConversationViewHosting <SiriSharedUIStackableContent, SiriSharedUIStackableContentActionOffering>

@required

- (void)animateAppearanceIfNeeded;
- (NSArray *)conversationSnippetViews;
- (<SiriSharedUICompactConversationViewDelegate> *)delegate;
- (SiriSharedUIStandardView<SiriSharedUIStackableContent><SiriSharedUIStackableContentActionOffering> *)hostingView;
- (bool)isCurrentlyTrackingGesture;
- (void)prepareForUpdatesToServerUtterance:(void *)arg1 conversationSnippetViews:(void *)arg2 speechRecognitionHypothesis:(void *)arg3 updateBlock:(void *)arg4; // needs 4 arg types, found 9: bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSArray *)serverUtterances;
- (void)setConversationSnippetViews:(NSArray *)arg1;
- (void)setDelegate:(id <SiriSharedUICompactConversationViewDelegate>)arg1;
- (void)setIsInAmbient:(bool)arg1;
- (void)setIsInAmbientInteractivity:(bool)arg1;
- (void)setServerUtterances:(NSArray *)arg1;
- (void)setSpeechRecognitionHypothesis:(SRUIFSpeechRecognitionHypothesis *)arg1;
- (void)snippetContentDidUpdate;
- (void)snippetContentDidUpdateForHint;
- (SRUIFSpeechRecognitionHypothesis *)speechRecognitionHypothesis;
- (bool)transitionToExpandablePlatterStyle:(long long)arg1;
- (bool)willAutomaticallyCollapseWhenResultIsScrolled;

@end
