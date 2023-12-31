
@interface CNReputationContactsAdapter : NSObject {
    CNContactStore * _contactStore;
    <CNSchedulerProvider> * _schedulerProvider;
    <CNScheduler> * _storeScheduler;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic, readonly) <CNScheduler> *storeScheduler;

- (void).cxx_destruct;
- (id)contactStore;
- (id)contactsForEmailAddress:(id)arg1;
- (id)contactsForPhoneNumber:(id)arg1;
- (id)contactsForPredicate:(id)arg1 keys:(id)arg2;
- (id)init;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2;
- (id)schedulerProvider;
- (id)storeScheduler;

@end
