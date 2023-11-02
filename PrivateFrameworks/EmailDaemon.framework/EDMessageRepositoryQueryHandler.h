
@interface EDMessageRepositoryQueryHandler : NSObject <EDMessageRepositoryQueryHandler, EFCancelable> {
    long long  _dateSortOrder;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _didStart;
    EDPersistenceHookRegistry * _hookRegistry;
    NSSet * _mailboxes;
    EDMessagePersistence * _messagePersistence;
    EMObjectID * _observationIdentifier;
    EMQuery * _query;
    EDRemindMeNotificationController * _remindMeNotificationController;
    <EMMessageListItemQueryResultsObserver> * _resultsObserver;
    EFLocked * _summaryLoadersMapTable;
}

@property (nonatomic, readonly) long long dateSortOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic, readonly, copy) NSSet *mailboxes;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) EMObjectID *observationIdentifier;
@property (nonatomic, readonly, copy) EMQuery *query;
@property (nonatomic, readonly) EDRemindMeNotificationController *remindMeNotificationController;
@property (nonatomic, readonly) <EMMessageListItemQueryResultsObserver> *resultsObserver;
@property (nonatomic, retain) EFLocked *summaryLoadersMapTable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_distinctObjectIDs:(id)arg1 queryHandlerLog:(id)arg2;
- (void)cancel;
- (long long)dateSortOrder;
- (void)dealloc;
- (id)hookRegistry;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 remindMeNotificationController:(id)arg4 observer:(id)arg5 observationIdentifier:(id)arg6;
- (bool)keyPathsAffectSorting:(id)arg1;
- (id)mailboxes;
- (id)messagePersistence;
- (id)messageReconciliationQueries;
- (id)observationIdentifier;
- (id)query;
- (id)remindMeNotificationController;
- (void)requestSummaryForMessageObjectID:(id)arg1;
- (id)resultsObserver;
- (void)setSummaryLoadersMapTable:(id)arg1;
- (bool)start;
- (id)summaryLoadersMapTable;
- (void)tearDown;
- (void)test_tearDown;
- (id)threadReconciliationQueries;

@end
