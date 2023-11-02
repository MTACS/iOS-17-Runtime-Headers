
@interface TUConversationReactionsController : NSObject <TUConversationReactionsControllerDataSourceDelegate> {
    <TUConversationManagerDataSource> * _dataSource;
    NSHashTable * _delegates;
}

@property (nonatomic, readonly) <TUConversationManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSHashTable *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (void)conversation:(id)arg1 participant:(id)arg2 didReact:(id)arg3;
- (void)conversation:(id)arg1 participantDidStopReacting:(id)arg2;
- (id)dataSource;
- (id)delegates;
- (id)initWithConversationDataSource:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)setDelegates:(id)arg1;

@end
