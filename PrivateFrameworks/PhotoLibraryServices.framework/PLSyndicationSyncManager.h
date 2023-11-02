
@interface PLSyndicationSyncManager : NSObject {
    <PLSyndicationSyncManagerDelegate> * _delegate;
    unsigned short  _savedAssetTypeMask;
    NSSet * _suppportedQueryTypes;
}

@property (nonatomic, readonly) <PLSyndicationSyncManagerDelegate> *delegate;

+ (void)_recursiveFindStartDateForMessagesSpotlightItemsWithStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)findStartDateForMessagesSpotlightItemsWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)_canHandleSearchableItem:(id)arg1 forQueryType:(long long)arg2;
- (void)_changeSyncRangeDenominatorWithInterrupted:(bool)arg1 success:(bool)arg2 library:(id)arg3;
- (void)_createOrUpdateObjectFromSearchableItem:(id)arg1 library:(id)arg2 fullIndexSyncStartDate:(id)arg3;
- (bool)_deleteConversationWithSyndicationIdentifiers:(id)arg1 library:(id)arg2;
- (bool)_deleteGuestAssetWithSyndicationIdentifiers:(id)arg1 library:(id)arg2;
- (bool)_isQueryTypeSupported:(long long)arg1;
- (void)_processSearchableItem:(id)arg1 forQueryType:(long long)arg2 library:(id)arg3 fullIndexSyncStartDate:(id)arg4;
- (void)_processZombieItem:(id)arg1 library:(id)arg2;
- (void)_processZombieItems:(id)arg1 library:(id)arg2;
- (void)_updateSyncTokenWithDate:(id)arg1 queryType:(long long)arg2 library:(id)arg3 syncTokenIsCurrent:(bool)arg4;
- (id)delegate;
- (id)initWithQueryTypes:(id)arg1 savedAssetTypeMask:(unsigned short)arg2 delegate:(id)arg3;
- (bool)syncSyndicationItemWithUniqueIdentifier:(id)arg1 bundleID:(id)arg2 queryType:(long long)arg3 library:(id)arg4 error:(id*)arg5;
- (void)syncSyndicationItemsWithStartDate:(id)arg1 endDate:(id)arg2 queryType:(long long)arg3 library:(id)arg4 completion:(id /* block */)arg5;

@end
