
@interface WFPlayPodcastAction : WFAction <WFActionSupportsContextualMediaPlayback> {
    WFIntentExecutor * executor;
}

@property (nonatomic, retain) WFIntentExecutor *executor;

- (void).cxx_destruct;
- (bool)attemptContextualPlayback;
- (bool)canOfferSuggestionsForParameterWithKey:(id)arg1;
- (id)contentNotFoundError;
- (id)errorPlayingPodcast:(unsigned int)arg1;
- (void)executePlayMediaIntent:(id)arg1;
- (id)executor;
- (void)fetchSuggestedEntititiesForParameterWithKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)genericPlayPodcastFailedError;
- (id)getPlaybackURLForContentItem:(id)arg1;
- (id)localizedKeyParameterDisplayName;
- (void)playQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1 onPlayerPath:(void*)arg2 completion:(id /* block */)arg3;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)serializedParametersForContextualActionMediaIntent:(id)arg1;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (void)setExecutor:(id)arg1;
- (id)systemEntityCollectionIdentifierForDisambiguatingParameterWithKey:(id)arg1;

@end
