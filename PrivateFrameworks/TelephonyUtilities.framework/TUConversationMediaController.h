
@interface TUConversationMediaController : NSObject <TUConversationMediaControllerDataSourceDelegate> {
    <TUConversationManagerDataSource> * _dataSource;
    NSHashTable * _delegates;
}

@property (nonatomic, readonly) <TUConversationManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUConversationMediaControllerDelegate> *delegate;
@property (nonatomic, retain) NSHashTable *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (id)delegates;
- (id)initWithConversationDataSource:(id)arg1;
- (void)mediaPrioritiesChangeForConversation:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2;

@end
