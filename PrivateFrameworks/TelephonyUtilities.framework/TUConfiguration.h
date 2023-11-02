
@interface TUConfiguration : NSObject <TUConfiguration> {
    <TUKeyValueDataSource><TUMutableKeyValueDataSource> * _dataSource;
    TUDelegateController * _delegateController;
}

@property (nonatomic) unsigned long long announceCalls;
@property (nonatomic, retain) NSURL *conversationLinkBaseURL;
@property (nonatomic, retain) NSString *conversationLinkBaseURLString;
@property (nonatomic, readonly) <TUKeyValueDataSource><TUMutableKeyValueDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) TUDelegateController *delegateController;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool simulateFatalPersistentStoreError;
@property (nonatomic) bool simulateInternationalCall;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (unsigned long long)announceCalls;
- (id)conversationLinkBaseURL;
- (id)conversationLinkBaseURLString;
- (id)dataSource;
- (id)delegateController;
- (id)initWithDataSource:(id)arg1;
- (id)numberForKey:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)setAnnounceCalls:(unsigned long long)arg1;
- (void)setConversationLinkBaseURL:(id)arg1;
- (void)setConversationLinkBaseURLString:(id)arg1;
- (void)setSimulateFatalPersistentStoreError:(bool)arg1;
- (void)setSimulateInternationalCall:(bool)arg1;
- (bool)simulateFatalPersistentStoreError;
- (bool)simulateInternationalCall;

@end
