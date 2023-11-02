
@interface PKPendingProvisioning : NSObject <NSSecureCoding> {
    NSDate * _createdAt;
    unsigned long long  _provisioningAttemptCounter;
    PKSecureElementProvisioningState * _provisioningState;
    bool  _shouldAutoProvision;
    long long  _status;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) NSDate *createdAt;
@property (nonatomic) unsigned long long provisioningAttemptCounter;
@property (nonatomic, retain) PKSecureElementProvisioningState *provisioningState;
@property (nonatomic) bool shouldAutoProvision;
@property (nonatomic) long long status;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)createdAt;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 status:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)provisioningAttemptCounter;
- (id)provisioningState;
- (bool)representsCredential:(id)arg1;
- (bool)representsPass:(id)arg1;
- (void)setCreatedAt:(id)arg1;
- (void)setProvisioningAttemptCounter:(unsigned long long)arg1;
- (void)setProvisioningState:(id)arg1;
- (void)setShouldAutoProvision:(bool)arg1;
- (void)setStatus:(long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (bool)shouldAutoProvision;
- (long long)status;
- (id)type;
- (id)uniqueIdentifier;

@end
