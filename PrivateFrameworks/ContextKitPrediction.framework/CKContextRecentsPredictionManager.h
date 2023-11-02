
@interface CKContextRecentsPredictionManager : NSObject <CKContextRecentsCacheDelegate> {
    ATXProactiveSuggestionClientModel * _clientModel;
    <CKContextRecentsPredictionManagerDelegate> * _delegate;
    DNDModeConfigurationService * _dndService;
    CKContextRecentsCache * _recentsCache;
    NSObject<OS_os_transaction> * _suggestionDonationTransaction;
    NSObject<OS_dispatch_queue> * _suggestionReportingQueue;
    id /* block */  _suggestionsClearingBlock;
    id /* block */  _suggestionsContributionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKContextRecentsPredictionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKContextRecentsCache *recentsCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearSuggestions;
- (void)_createClientModelIfNecessary;
- (void)_createDoNotDisturbServiceIfNecessary;
- (void)_handleModeChangeToModeWithUUIDString:(id)arg1 forCache:(id)arg2;
- (id)_localizedStringForKey:(id)arg1;
- (id)_modeForModeIdentifier:(id)arg1 withConfigurations:(id)arg2;
- (id)_oftenUsedStringForMode:(id)arg1;
- (id)_recentlyUsedStringForMode:(id)arg1;
- (id)_recentsEligibleForDonationMatchingMode:(id)arg1 fromRecents:(id)arg2 uuidsToCounts:(id)arg3;
- (id)_retrieveModeConfigurations;
- (long long)_suggestionConfidenceForRecent:(id)arg1 withCount:(unsigned long long)arg2;
- (void)_updateBlendingLayerWithSuggestions:(id)arg1;
- (id)_userFacingReasonStringForRecentWithNumberOfInstances:(unsigned long long)arg1 mode:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didInitiatePruningMaintenanceTaskForCache:(id)arg1 existingRecentsUUIDs:(id)arg2;
- (id)eligiblePredictionsMatchingMode:(id)arg1 forRecents:(id)arg2 uuidsToCounts:(id)arg3;
- (id)init;
- (void)modeDidChangeToModeWithUUIDString:(id)arg1 forCache:(id)arg2;
- (id)recentsCache;
- (void)retrievePredictionsForMode:(id)arg1 withReply:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)startContributingPredictions;
- (void)stopContributingPredictions;

@end
