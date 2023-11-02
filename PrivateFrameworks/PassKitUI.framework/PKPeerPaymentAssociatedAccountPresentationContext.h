
@interface PKPeerPaymentAssociatedAccountPresentationContext : NSObject {
    PKFamilyMember * _member;
    long long  _setupType;
    PKPaymentTransaction * _transaction;
}

@property (nonatomic, retain) PKFamilyMember *member;
@property (nonatomic) long long setupType;
@property (nonatomic, retain) PKPaymentTransaction *transaction;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFAFamilyMember:(id)arg1 options:(id)arg2;
- (id)initWithPKFamilyMember:(id)arg1 options:(id)arg2;
- (id)initWithPKFamilyMember:(id)arg1 setupType:(long long)arg2;
- (id)initWithPKFamilyMember:(id)arg1 transaction:(id)arg2;
- (id)member;
- (void)setMember:(id)arg1;
- (void)setSetupType:(long long)arg1;
- (void)setTransaction:(id)arg1;
- (long long)setupType;
- (id)transaction;

@end
