
@protocol SiriSharedUICompactConversationViewDelegate

@required

- (void)conversationView:(id <SiriSharedUICompactConversationViewHosting>)arg1 didUpdateHeightDuringExpansionTransition:(double)arg2 didCompleteGesture:(bool)arg3;
- (void)conversationView:(id <SiriSharedUICompactConversationViewHosting>)arg1 viewDidAppearForAceObject:(AceObject *)arg2;
- (void)conversationView:(id <SiriSharedUICompactConversationViewHosting>)arg1 viewDidDisappearForAceObject:(AceObject *)arg2;
- (void)conversationViewContentScrolled:(id <SiriSharedUICompactConversationViewHosting>)arg1 toContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)conversationViewDidBeginExpandTransition:(id <SiriSharedUICompactConversationViewHosting>)arg1;
- (void)conversationViewDidResetExpandedState:(id <SiriSharedUICompactConversationViewHosting>)arg1;
- (void)conversationViewDidTransitionToCollapsedState:(id <SiriSharedUICompactConversationViewHosting>)arg1;
- (void)conversationViewDidTransitionToExpandedState:(id <SiriSharedUICompactConversationViewHosting>)arg1;
- (void)conversationViewDidUpdatePresentedContentHeight:(id <SiriSharedUICompactConversationViewHosting>)arg1;
- (bool)conversationViewShouldAlwaysShowSpeechFeedback:(id <SiriSharedUICompactConversationViewHosting>)arg1;
- (double)expectedExpandedHeightForConversationView:(id <SiriSharedUICompactConversationViewHosting>)arg1;
- (double)maximumHeightForConversationView:(id <SiriSharedUICompactConversationViewHosting>)arg1;
- (<SRUIFSpeakableObjectProviding> *)parserSpeakableObjectProviderForConversationView:(id <SiriSharedUICompactConversationViewHosting>)arg1;
- (void)tapToEditRequestedFromView:(id <SiriSharedUICompactConversationViewHosting>)arg1;

@end
