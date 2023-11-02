
@interface PersonalizationPortraitInternals.BackgroundTextConsumer : PersonalizationPortraitInternals.Consumer <HVMailConsumer, HVNewsConsumer, HVNotesConsumer, HVSafariConsumer, HVThirdPartyAppConsumer>

- (void).cxx_destruct;
- (id)consumeMailContentWithContext:(id)arg1;
- (id)consumeNewsArticleViewsWithContext:(id)arg1;
- (id)consumeNotesContentWithContext:(id)arg1;
- (id)consumeSafariContentWithContext:(id)arg1;
- (id)consumeThirdPartyAppContentWithContext:(id)arg1;
- (id)consumerName;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)arg1;

@end
