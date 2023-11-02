
@interface CNReputationFutureBuilder : NSObject {
    CNReputationContactsAdapter * _contactsAdapter;
    CNReputationCoreRecentsAdapter * _coreRecentsAdapter;
    CNReputationHandle * _handle;
    CNReputationLogger * _logger;
    CNFuture * _scoreFuture;
}

@property (nonatomic, readonly) CNReputationContactsAdapter *contactsAdapter;
@property (nonatomic, readonly) CNReputationCoreRecentsAdapter *coreRecentsAdapter;
@property (nonatomic, readonly, copy) CNReputationHandle *handle;
@property (nonatomic, readonly) CNReputationLogger *logger;
@property (nonatomic, retain) CNFuture *scoreFuture;

- (void).cxx_destruct;
- (void)addContactsTrustForEmailAddress;
- (void)addContactsTrustForPhoneNumber;
- (void)addCoreRecentsTrust;
- (id)build;
- (id)contactsAdapter;
- (id)contactsTrustForEmailAddress:(id)arg1;
- (id)contactsTrustForPhoneNumber:(id)arg1;
- (id)coreRecentsAdapter;
- (id)coreRecentsTrustForHandle:(id)arg1;
- (id)handle;
- (id)initWithHandle:(id)arg1 coreRecentsAdapter:(id)arg2 contactsAdapter:(id)arg3 logger:(id)arg4;
- (id)logger;
- (id)scoreFuture;
- (void)setScoreFuture:(id)arg1;

@end
