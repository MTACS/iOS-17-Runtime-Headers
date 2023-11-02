
@interface CRKMeCardUserProvider : NSObject <CRKUserProviding> {
    <CRKContactsPrimitives> * _contactsPrimitives;
    <CRKCancelable> * _contactsSubscription;
    CRKUser * _user;
}

@property (nonatomic, readonly) <CRKContactsPrimitives> *contactsPrimitives;
@property (nonatomic, retain) <CRKCancelable> *contactsSubscription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) CRKUser *user;

- (void).cxx_destruct;
- (void)beginObservingContacts;
- (id)contactsPrimitives;
- (id)contactsSubscription;
- (id)fetchCurrentUser;
- (id)init;
- (id)initWithContactsPrimitives:(id)arg1;
- (void)rebuildUser;
- (void)rebuildUserDebounced;
- (void)setContactsSubscription:(id)arg1;
- (void)setUser:(id)arg1;
- (id)user;

@end
