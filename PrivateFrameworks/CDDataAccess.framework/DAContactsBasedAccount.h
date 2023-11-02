
@interface DAContactsBasedAccount : NSObject <DAContactsAccount> {
    CNAccount * _account;
    bool  _markedForDeletion;
}

@property (nonatomic, readonly) CNAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool markedForDeletion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)account;
- (id)externalIdentifier;
- (id)identifier;
- (id)initWithAccount:(id)arg1;
- (bool)isAccount;
- (bool)isContact;
- (bool)isContainer;
- (bool)isGroup;
- (int)legacyIdentifier;
- (void)markForDeletion;
- (bool)markedForDeletion;
- (void)setMarkedForDeletion:(bool)arg1;
- (void)updateSaveRequest:(id)arg1;

@end
