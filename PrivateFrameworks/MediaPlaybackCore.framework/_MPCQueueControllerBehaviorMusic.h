
@interface _MPCQueueControllerBehaviorMusic : NSObject <MPArtworkDataSource, MPCContinueListeningRadioQueueProviding, MPCQueueControllerBehaviorDynamicLoadingImplementation, MPCQueueControllerBehaviorMusic, MPCQueueControllerBehaviorRestorableImplementation, MPCQueueControllerBehaviorTransportableImplementation, MPCQueueControllerBehaviorUpNextImplementation, MPSectionedIdentifierListAnnotationDelegate, MPShuffleableSectionedIdentifierListDelegate, MRGroupSessionDelegate> {
    <MRGroupSession> * _activeGroupSession;
    NSString * _activeHostingSharedSessionID;
    unsigned short  _activeItemFlags;
    MPSectionedIdentifierListPosition * _autoPlayEndPosition;
    MPSectionedIdentifierList * _autoPlayIdentifierList;
    bool  _autoPlayIsTriggered;
    long long  _autoPlayState;
    NSMutableDictionary * _dataSources;
    bool  _hasUserMutations;
    <MPCQueueControllerBehaviorHost> * _host;
    MPShuffleableSectionedIdentifierList * _identifierList;
    NSDictionary * _lastEmittedBehaviorMetadata;
    id /* block */  _loadAdditionalItemsCompletion;
    <MPCQueueControllerBehaviorMusicDelegate> * _musicBehaviorDelegate;
    long long  _repeatType;
    long long  _shuffleType;
    long long  _state;
    bool  _wasDecoded;
}

@property (nonatomic, retain) <MRGroupSession> *activeGroupSession;
@property (nonatomic) bool allowsQueueModifications;
@property (nonatomic, readonly) bool autoPlayEnabled;
@property (nonatomic, retain) MPSectionedIdentifierListPosition *autoPlayEndPosition;
@property (nonatomic, retain) MPSectionedIdentifierList *autoPlayIdentifierList;
@property (nonatomic) bool autoPlayIsTriggered;
@property (nonatomic) long long autoPlayState;
@property (nonatomic, readonly) bool containsRestorableContent;
@property (nonatomic, retain) NSMutableDictionary *dataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasUserMutations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MPCQueueControllerBehaviorHost> *host;
@property (nonatomic, retain) MPShuffleableSectionedIdentifierList *identifierList;
@property (nonatomic) <MPCQueueControllerBehaviorMusicDelegate> *musicBehaviorDelegate;
@property (nonatomic, readonly) long long preferredUpcomingItemCount;
@property (nonatomic, readonly) long long repeatType;
@property (nonatomic, readonly, copy) NSString *sessionID;
@property (nonatomic, readonly) long long shuffleType;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

+ (bool)canLoadQueue:(id)arg1 reason:(id*)arg2;
+ (id)makeExtensionWithInvalidatable:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_accountForAutoPlay;
- (void)_addAutoPlayPlaybackContext:(id)arg1 atPosition:(long long)arg2 afterContentItemID:(id)arg3 sectionIdentifier:(id)arg4 actions:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)_addPlaybackContext:(id)arg1 atPosition:(long long)arg2 afterContentItemID:(id)arg3 sectionIdentifier:(id)arg4 actions:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (bool)_allDataSourcesSupportInsertionPositionLast;
- (long long)_autoplayMode;
- (id)_componentsForContentItemID:(id)arg1;
- (long long)_countOfItemsWithinSection:(id)arg1 maxCount:(long long)arg2;
- (void)_emitEventsForAddingPlaybackContext:(id)arg1 sectionIdentifier:(id)arg2;
- (void)_emitEventsForPlaybackBehaviorChangeIfNeeded;
- (void)_evaluateLoadingDataSourceItemThresholds;
- (id)_identifierListForSection:(id)arg1;
- (void)_initializeWithCoder:(id)arg1;
- (id)_itemForComponents:(id)arg1;
- (id)_itemForContentItemID:(id)arg1;
- (id)_mpcParticipantForGroupSessionParticipant:(id)arg1;
- (unsigned long long)_playbackContextOptions;
- (long long)_privateListeningSourceForContext:(id)arg1;
- (void)_setRepeatType:(long long)arg1;
- (void)_setShuffleType:(long long)arg1 startingContentItemID:(id)arg2 randomSource:(id)arg3;
- (id)_stateDictionaryIncludingQueue:(bool)arg1;
- (void)_transitionToAutoPlayState:(long long)arg1;
- (void)_updateGroupSessionParticipants:(id)arg1 localParticipant:(id)arg2;
- (id)activeGroupSession;
- (void)activeItemFlagsDidChange:(unsigned short)arg1;
- (bool)allowsQueueModifications;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (bool)autoPlayEnabled;
- (id)autoPlayEndPosition;
- (id)autoPlayIdentifierList;
- (bool)autoPlayIsTriggered;
- (long long)autoPlayState;
- (bool)canJumpToContentItemID:(id)arg1 reason:(id*)arg2;
- (bool)canNextItemFromContentItemID:(id)arg1 reason:(id*)arg2;
- (bool)canPreviousItemFromContentItemID:(id)arg1 reason:(id*)arg2;
- (bool)canRemoveContentItemID:(id)arg1 reason:(id*)arg2;
- (void)canReuseQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)canUserChangeRepeatTypeWithReason:(id*)arg1;
- (bool)canUserChangeShuffleModeWithReason:(id*)arg1;
- (bool)canUserEnableAutoPlayWithReason:(id*)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (void)clearAllItemsAfterContentItemID:(id)arg1;
- (id)componentsForContentItemID:(id)arg1;
- (void)connectToHost:(id)arg1;
- (bool)containsRestorableContent;
- (id)contentItemIDEnumeratorStartingAfterContentItemID:(id)arg1 mode:(long long)arg2 options:(unsigned long long)arg3;
- (id)contentItemIDWithoutRepeatIteration:(id)arg1;
- (id)copyContentItemID:(id)arg1 repeatIteration:(long long)arg2;
- (void)currentItemDidChangeFromContentItemID:(id)arg1 toContentItemID:(id)arg2;
- (id)dataSources;
- (id)debugDescription;
- (id)debugDescriptionForItem:(id)arg1 inSection:(id)arg2;
- (id)debugDescriptionForSection:(id)arg1;
- (id)description;
- (void)didConnectToHost:(id)arg1;
- (void)didDequeueShuffledItemsInSectionedIdentifierList:(id)arg1;
- (void)didReachEndOfQueueWithReason:(id)arg1;
- (void)disconnectFromHost:(id)arg1;
- (long long)displayItemCount;
- (void)encodeWithCoder:(id)arg1;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)finalizeStateRestorationWithTargetContentItemID:(id)arg1 completion:(id /* block */)arg2;
- (void)findFirstContentItemIDForItemIntersectingIdentifierSet:(id)arg1 completion:(id /* block */)arg2;
- (void)getSharedQueueTracklistWithStartingContentItemID:(id)arg1 completion:(id /* block */)arg2;
- (void)groupSession:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)groupSession:(id)arg1 didUpdateParticipants:(id)arg2;
- (void)groupSessionDidConnect:(id)arg1;
- (bool)hasUserMutations;
- (id)host;
- (id)identifierList;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionID:(id)arg1;
- (bool)isAutoPlayContentItemID:(id)arg1;
- (bool)isExportableSessionType:(id)arg1 forContentItemID:(id)arg2 extension:(id)arg3 reason:(id*)arg4;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (bool)isSupportedInsertionPosition:(long long)arg1 fromContentItemID:(id)arg2 reason:(id*)arg3;
- (bool)itemExistsForContentItemID:(id)arg1;
- (void)loadAdditionalUpcomingItems:(long long)arg1 completion:(id /* block */)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)moveContentItemID:(id)arg1 afterContentItemID:(id)arg2 completion:(id /* block */)arg3;
- (void)moveContentItemID:(id)arg1 beforeContentItemID:(id)arg2 completion:(id /* block */)arg3;
- (id)musicBehaviorDelegate;
- (void)performInsertCommand:(id)arg1 targetContentItemID:(id)arg2 completion:(id /* block */)arg3;
- (id)performLoadCommand:(id)arg1 completion:(id /* block */)arg2;
- (long long)preferredUpcomingItemCount;
- (id)queueReferencesWithMaxCount:(long long)arg1;
- (void)removeContentItemID:(id)arg1 completion:(id /* block */)arg2;
- (long long)repeatType;
- (void)reshuffleWithTargetContentItemID:(id)arg1 completion:(id /* block */)arg2;
- (void)restoreWithSharedCoder:(id)arg1 block:(id /* block */)arg2;
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidAddItems:(id)arg2 toSection:(id)arg3;
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidMoveItems:(id)arg2 inSection:(id)arg3;
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidRemoveItems:(id)arg2 fromSection:(id)arg3;
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidUpdateItems:(id)arg2 inSection:(id)arg3;
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidUpdateSection:(id)arg2;
- (id)sessionID;
- (void)setActiveGroupSession:(id)arg1;
- (void)setAllowsQueueModifications:(bool)arg1;
- (void)setAutoPlayEnabled:(bool)arg1 targetContentItemID:(id)arg2 completion:(id /* block */)arg3;
- (void)setAutoPlayEndPosition:(id)arg1;
- (void)setAutoPlayIdentifierList:(id)arg1;
- (void)setAutoPlayIsTriggered:(bool)arg1;
- (void)setAutoPlayState:(long long)arg1;
- (void)setDataSources:(id)arg1;
- (void)setHostingSharedSessionID:(id)arg1 reason:(id)arg2;
- (void)setIdentifierList:(id)arg1;
- (void)setMusicBehaviorDelegate:(id)arg1;
- (void)setRepeatType:(long long)arg1 completion:(id /* block */)arg2;
- (void)setShuffleType:(long long)arg1 startingContentItemID:(id)arg2 randomSource:(id)arg3;
- (void)setShuffleType:(long long)arg1 targetContentItemID:(id)arg2 completion:(id /* block */)arg3;
- (long long)shuffleType;
- (long long)state;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end