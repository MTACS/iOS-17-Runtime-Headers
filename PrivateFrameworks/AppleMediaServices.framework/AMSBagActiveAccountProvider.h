
@interface AMSBagActiveAccountProvider : NSObject <AMSBagAccountProvider> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accountLock;
    ACAccount * _previouslyAccessedAccount;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } accountLock;
@property (nonatomic, readonly) bool bagLoadShouldUpdateAccountProperties;
@property (nonatomic, readonly) NSString *identity;
@property (nonatomic, retain) ACAccount *previouslyAccessedAccount;

+ (id)_bagStorefrontForAccountMediaType:(id)arg1 account:(id)arg2;

- (void).cxx_destruct;
- (id)_bagAccountPromiseForAccountMediaType:(id)arg1 mustContainStorefront:(bool)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })accountLock;
- (bool)associatedAccountIsEqualToAccount:(id)arg1 forMediaType:(id)arg2;
- (id)bagAccountForAccountMediaType:(id)arg1;
- (id)bagAccountPromiseForAccountMediaType:(id)arg1;
- (bool)bagLoadShouldUpdateAccountProperties;
- (id)bagStorefrontForAccountMediaType:(id)arg1;
- (id)bagStorefrontPromiseForAccountMediaType:(id)arg1;
- (id)identity;
- (id)init;
- (id)previouslyAccessedAccount;
- (void)setAccountLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setPreviouslyAccessedAccount:(id)arg1;

@end
