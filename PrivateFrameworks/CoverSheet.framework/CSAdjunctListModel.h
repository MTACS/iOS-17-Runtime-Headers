
@interface CSAdjunctListModel : NSObject <CSItemDestination> {
    <CSAdjunctListModelDelegate> * _delegate;
    NSMutableDictionary * _identifiersToItems;
    NSMutableSet * _pendingItems;
    bool  _suspended;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSAdjunctListModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reallyAddOrUpdateItem:(id)arg1;
- (void)_replayPendingChanges;
- (void)addOrUpdateItem:(id)arg1;
- (id)delegate;
- (id)init;
- (void)removeItemForIdentifier:(id)arg1;
- (void)resumeItemHandling;
- (void)setDelegate:(id)arg1;
- (void)suspendItemHandling;

@end
