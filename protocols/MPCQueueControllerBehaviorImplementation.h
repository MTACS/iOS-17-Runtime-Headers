
@protocol MPCQueueControllerBehaviorImplementation <MPCQueueControllerBehavior>

@required

- (MPAVItem *)_itemForContentItemID:(NSString *)arg1;
- (NSDictionary *)_stateDictionaryIncludingQueue:(bool)arg1;
- (void)activeItemFlagsDidChange:(unsigned short)arg1;
- (bool)canJumpToContentItemID:(NSString *)arg1 reason:(id*)arg2;
- (bool)canNextItemFromContentItemID:(NSString *)arg1 reason:(id*)arg2;
- (bool)canPreviousItemFromContentItemID:(NSString *)arg1 reason:(id*)arg2;
- (<MPCQueueControllerItemIdentifierComponents> *)componentsForContentItemID:(NSString *)arg1;
- (void)connectToHost:(id <MPCQueueControllerBehaviorHost>)arg1;
- (NSEnumerator *)contentItemIDEnumeratorStartingAfterContentItemID:(NSString *)arg1 mode:(long long)arg2 options:(unsigned long long)arg3;
- (void)currentItemDidChangeFromContentItemID:(NSString *)arg1 toContentItemID:(NSString *)arg2;
- (void)disconnectFromHost:(id <MPCQueueControllerBehaviorHost>)arg1;
- (<MPCQueueControllerBehaviorHost> *)host;
- (id)initWithSessionID:(NSString *)arg1;
- (bool)itemExistsForContentItemID:(NSString *)arg1;
- (NSString *)performLoadCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MPSetPlaybackQueueCommandEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSString *)sessionID;

@optional

- (void)didConnectToHost:(id <MPCQueueControllerBehaviorHost>)arg1;
- (void)didDisconnectFromHost:(id <MPCQueueControllerBehaviorHost>)arg1;

@end
