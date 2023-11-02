
@interface WFPlayMusicAction : WFAction <WFActionSupportsContextualMediaPlayback> {
    WFIntentExecutor * executor;
}

@property (nonatomic, retain) WFIntentExecutor *executor;

- (void).cxx_destruct;
- (bool)attemptContextualPlayback;
- (bool)canOfferSuggestionsForParameterWithKey:(id)arg1;
- (void)executePlayMediaIntent:(id)arg1;
- (id)executor;
- (void)fetchSuggestedEntititiesForParameterWithKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finishRunningWithError:(id)arg1;
- (void)getContentWithCompletionHandler:(id /* block */)arg1;
- (bool)hasPlaybackArchive;
- (void)initializeParameters;
- (id)localizedKeyParameterDisplayName;
- (id)mediaQueryFromMediaCollection:(id)arg1;
- (void)playContent:(id)arg1 withMusicPlayer:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)playContentViaMPCAssistant:(id)arg1 routeDescriptor:(id)arg2;
- (void)playContentViaMusicPlayer:(id)arg1;
- (bool)populatesInputFromInputParameter;
- (long long)repeatMode;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)sendPlaybackArchive:(id)arg1 orPlaybackQueue:(id)arg2 toDestination:(id)arg3 completion:(id /* block */)arg4;
- (id)serializedParametersForContextualActionMediaIntent:(id)arg1;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (void)setExecutor:(id)arg1;
- (void)setShuffleAndRepeatModesOnMusicPlayer:(id)arg1;
- (long long)shuffleMode;
- (id)systemEntityCollectionIdentifierForDisambiguatingParameterWithKey:(id)arg1;

@end
