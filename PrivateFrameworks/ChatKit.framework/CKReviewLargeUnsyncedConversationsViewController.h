
@interface CKReviewLargeUnsyncedConversationsViewController : CKAbstractReviewViewController {
    NSArray * _conversations;
    <IMDaemonMultiplexedConnectionManaging> * _daemonConnection;
}

@property (nonatomic, retain) NSArray *conversations;
@property (nonatomic, retain) <IMDaemonMultiplexedConnectionManaging> *daemonConnection;

- (void).cxx_destruct;
- (void)_populateConversationsIfNeeded;
- (id)conversations;
- (id)daemonConnection;
- (void)dealloc;
- (void)deleteModelObjectAndUnderlyingData:(id)arg1;
- (void)didSelectModelObjectAtIndex:(unsigned long long)arg1;
- (id)modelObjectAtIndex:(unsigned long long)arg1;
- (id)navigationBarTitle;
- (unsigned long long)numberOfModelObjects;
- (void)reloadModelData;
- (void)setConversations:(id)arg1;
- (void)setDaemonConnection:(id)arg1;
- (Class)tableViewCellClass;
- (id)tableViewCellReuseIdentifier;

@end
