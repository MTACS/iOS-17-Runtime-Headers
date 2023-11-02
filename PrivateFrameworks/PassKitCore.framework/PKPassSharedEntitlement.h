
@interface PKPassSharedEntitlement : NSObject <NSCopying, NSSecureCoding> {
    long long  _creationVersion;
    NSString * _entitlementIdentifier;
    unsigned long long  _recipientManageability;
    unsigned long long  _recipientShareability;
    unsigned long long  _recipientVisibility;
    PKPassShareTimeConfiguration * _timeConfiguration;
}

@property (nonatomic, readonly) unsigned long long carKeyEntitlementValue;
@property (nonatomic) long long creationVersion;
@property (nonatomic, retain) NSString *entitlementIdentifier;
@property (nonatomic) unsigned long long recipientManageability;
@property (nonatomic) unsigned long long recipientShareability;
@property (nonatomic) unsigned long long recipientVisibility;
@property (nonatomic, retain) PKPassShareTimeConfiguration *timeConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)carKeyEntitlementValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)creationVersion;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlementIdentifier;
- (unsigned long long)hash;
- (id)initWithCarKeyEntitlementValue:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithEntitlement:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)recipientManageability;
- (unsigned long long)recipientShareability;
- (unsigned long long)recipientVisibility;
- (void)setCreationVersion:(long long)arg1;
- (void)setEntitlementIdentifier:(id)arg1;
- (void)setRecipientManageability:(unsigned long long)arg1;
- (void)setRecipientShareability:(unsigned long long)arg1;
- (void)setRecipientVisibility:(unsigned long long)arg1;
- (void)setTimeConfiguration:(id)arg1;
- (id)timeConfiguration;

@end
