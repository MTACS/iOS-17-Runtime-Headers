
@interface _PSFTZKWSuggestionsTransformerFactory : NSObject {
    _PSContactCache * _contactCache;
    _CDInteractionStore * _interactionStore;
}

@property (nonatomic, readonly, copy) _CDInteractionStore *interactionStore;

+ (id)getCraftedIdentfierForSuggestion:(id)arg1;
+ (id)getResultsFromTransformers:(id)arg1 suggestions:(id)arg2;

- (void).cxx_destruct;
- (id /* block */)annotateWithTrialExperimentIdentifiers:(id)arg1 rolloutIdentifiers:(id)arg2;
- (id /* block */)deduplicateWithMaxSuggestions:(unsigned long long)arg1;
- (id /* block */)deduplicateWithSeedRecipients:(id)arg1;
- (id /* block */)filterIDSReachable;
- (id /* block */)formatWithBundleIdsForGroupMatching:(id)arg1;
- (id)formatWithSuggestion:(id)arg1 bundleIdsForGroupMatching:(id)arg2 checkForMessagesGroupIdentifier:(bool)arg3;
- (id)init;
- (id)initWithInteractionStore:(id)arg1;
- (id)interactionStore;
- (bool)isEligibleRecipient:(id)arg1;
- (id /* block */)mapRecipientsToContactsWithUnmapped:(bool)arg1;

@end
