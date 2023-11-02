
@interface PKPeerPaymentAssociatedAccountInformation : NSObject <NSSecureCoding> {
    NSSet * _associatedAccountInvitations;
    NSSet * _associatedAccountRemovalRecords;
    bool  _associatedAccountStateDirty;
    NSSet * _associatedAccounts;
    NSDate * _lastUpdated;
    double  _proactiveAssociatedAccountFetchPeriod;
}

@property (nonatomic, copy) NSSet *associatedAccountInvitations;
@property (nonatomic, copy) NSSet *associatedAccountRemovalRecords;
@property (getter=isAssociatedAccountStateDirty, nonatomic) bool associatedAccountStateDirty;
@property (nonatomic, copy) NSSet *associatedAccounts;
@property (nonatomic, copy) NSDate *lastUpdated;
@property (nonatomic) double proactiveAssociatedAccountFetchPeriod;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedAccountInvitations;
- (id)associatedAccountRemovalRecords;
- (id)associatedAccounts;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAccountInvitationsUsingBlock:(id /* block */)arg1;
- (void)enumerateAssociatedAccountsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 lastUpdated:(id)arg2;
- (bool)isAssociatedAccountStateDirty;
- (bool)isEqual:(id)arg1;
- (id)lastUpdated;
- (void)markAssociatedAccountActiveWithAltDSID:(id)arg1 hasPresentedNotification:(bool)arg2;
- (void)markAssociatedAccountRemovalRecordWithAltDSID:(id)arg1 hasPresentedNotification:(bool)arg2;
- (double)proactiveAssociatedAccountFetchPeriod;
- (void)setAssociatedAccountInvitations:(id)arg1;
- (void)setAssociatedAccountRemovalRecords:(id)arg1;
- (void)setAssociatedAccountStateDirty:(bool)arg1;
- (void)setAssociatedAccounts:(id)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setProactiveAssociatedAccountFetchPeriod:(double)arg1;

@end
