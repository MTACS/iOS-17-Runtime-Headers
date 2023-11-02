
@interface _MPCQueueControllerBehaviorEmpty : NSObject <MPCQueueControllerBehaviorImplementation> {
    <MPCQueueControllerBehaviorHost> * _host;
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MPCQueueControllerBehaviorHost> *host;
@property (nonatomic, readonly, copy) NSString *sessionID;
@property (readonly) Class superclass;

+ (bool)canLoadQueue:(id)arg1 reason:(id*)arg2;

- (void).cxx_destruct;
- (id)_itemForContentItemID:(id)arg1;
- (id)_stateDictionaryIncludingQueue:(bool)arg1;
- (void)activeItemFlagsDidChange:(unsigned short)arg1;
- (bool)canJumpToContentItemID:(id)arg1 reason:(id*)arg2;
- (bool)canNextItemFromContentItemID:(id)arg1 reason:(id*)arg2;
- (bool)canPreviousItemFromContentItemID:(id)arg1 reason:(id*)arg2;
- (id)componentsForContentItemID:(id)arg1;
- (void)connectToHost:(id)arg1;
- (id)contentItemIDEnumeratorStartingAfterContentItemID:(id)arg1 mode:(long long)arg2 options:(unsigned long long)arg3;
- (void)currentItemDidChangeFromContentItemID:(id)arg1 toContentItemID:(id)arg2;
- (void)disconnectFromHost:(id)arg1;
- (id)host;
- (id)initWithSessionID:(id)arg1;
- (bool)itemExistsForContentItemID:(id)arg1;
- (id)performLoadCommand:(id)arg1 completion:(id /* block */)arg2;
- (id)sessionID;

@end
