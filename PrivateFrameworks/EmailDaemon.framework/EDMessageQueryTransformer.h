
@interface EDMessageQueryTransformer : NSObject {
    <EDAccountsProvider> * _accountsProvider;
    EDMailboxPersistence * _mailboxPersistence;
    EDMessagePersistence * _messagePersistence;
    <EMVIPManager> * _vipManager;
}

@property (nonatomic, readonly) <EDAccountsProvider> *accountsProvider;
@property (nonatomic, readonly) EDMailboxPersistence *mailboxPersistence;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) <EMVIPManager> *vipManager;

- (void).cxx_destruct;
- (id)accountsProvider;
- (id)initWithAccountsProvider:(id)arg1 mailboxPersistence:(id)arg2 messagePersistence:(id)arg3 vipManager:(id)arg4;
- (id)mailboxPersistence;
- (id)messagePersistence;
- (id)transformComparisonPredicate:(id)arg1;
- (id)transformCompoundPredicate:(id)arg1;
- (id)transformPredicate:(id)arg1;
- (id)transformSubpredicates:(id)arg1;
- (id)vipManager;

@end
