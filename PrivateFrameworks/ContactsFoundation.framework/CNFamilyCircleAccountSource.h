
@interface CNFamilyCircleAccountSource : NSObject <CNDelegateAccountSource> {
    FAFamilyCircle * _familyCircle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FAFamilyCircle *familyCircle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegateAccounts;
- (id)description;
- (id)familyCircle;
- (id)initWithFamilyCircle:(id)arg1;
- (id)myFamilyMemberRecord;
- (id)primaryAccount;

@end
