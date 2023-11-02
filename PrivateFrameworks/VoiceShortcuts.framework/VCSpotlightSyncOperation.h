
@interface VCSpotlightSyncOperation : NSObject {
    <VCSpotlightSyncOperationDelegate> * _delegate;
    bool  _fullResync;
    NSSet * _identifiersToRemove;
    CSSearchableIndex * _index;
    NSDictionary * _keyedReferences;
    VCSpotlightState * _localState;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _searchableItemRegistry;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic) <VCSpotlightSyncOperationDelegate> *delegate;
@property (nonatomic, readonly) bool fullResync;
@property (nonatomic, readonly) NSSet *identifiersToRemove;
@property (nonatomic, readonly) CSSearchableIndex *index;
@property (nonatomic, readonly) NSDictionary *keyedReferences;
@property (nonatomic, readonly) VCSpotlightState *localState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSDictionary *searchableItemRegistry;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;

+ (void)_fillIdentifiersToRemove:(id*)arg1 searchableItemRegistry:(id*)arg2 withMaximumUpdatedItems:(long long)arg3 references:(id)arg4 localState:(id)arg5;

- (void).cxx_destruct;
- (void)cleanupAndExitWithRequestToRelaunch:(bool)arg1;
- (void)clearLocalStateAndExit;
- (id)delegate;
- (void)deleteSpotlightFileAndCleanup;
- (bool)fullResync;
- (id)identifiersToRemove;
- (id)index;
- (void)indexSearchableItems;
- (id)init;
- (id)initWithModifiedReferences:(id)arg1 inserted:(id)arg2 removed:(id)arg3 spotlightIndex:(id)arg4 localState:(id)arg5 transaction:(id)arg6;
- (id)initWithReferences:(id)arg1 forceFullResync:(bool)arg2 spotlightIndex:(id)arg3 localState:(id)arg4 transaction:(id)arg5;
- (id)keyedReferences;
- (id)localState;
- (id)queue;
- (void)saveLocalState;
- (id)searchableItemRegistry;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)transaction;

@end
