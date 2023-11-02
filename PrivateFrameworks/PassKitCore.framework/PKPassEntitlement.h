
@interface PKPassEntitlement : NSObject <NSCopying, NSSecureCoding> {
    bool  _active;
    NSString * _entitlementTemplate;
    bool  _hasRemainingShares;
    NSString * _identifier;
    NSArray * _manageability;
    NSArray * _shareability;
    NSString * _subcredentialIdentifier;
    NSDictionary * _templateFields;
    PKPassShareTimeConfiguration * _timeConfiguration;
    NSNumber * _value;
    NSArray * _visibility;
}

@property (nonatomic) bool active;
@property (nonatomic, readonly) long long carKeyEntitlementType;
@property (nonatomic, retain) NSString *entitlementTemplate;
@property (nonatomic) bool hasRemainingShares;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSArray *manageability;
@property (nonatomic, retain) NSArray *shareability;
@property (nonatomic, retain) NSString *subcredentialIdentifier;
@property (nonatomic, retain) NSDictionary *templateFields;
@property (nonatomic, retain) PKPassShareTimeConfiguration *timeConfiguration;
@property (nonatomic, retain) NSNumber *value;
@property (nonatomic, retain) NSArray *visibility;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)active;
- (long long)carKeyEntitlementType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlementTemplate;
- (bool)hasCanonicallyEquivalentRightsToPassEntitlement:(id)arg1;
- (bool)hasRemainingShares;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSubcredentialDictionary:(id)arg1 subcredentialIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)manageability;
- (void)setActive:(bool)arg1;
- (void)setEntitlementTemplate:(id)arg1;
- (void)setHasRemainingShares:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setManageability:(id)arg1;
- (void)setShareability:(id)arg1;
- (void)setSubcredentialIdentifier:(id)arg1;
- (void)setTemplateFields:(id)arg1;
- (void)setTimeConfiguration:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setVisibility:(id)arg1;
- (id)shareability;
- (id)subcredentialDictionaryRepresentation;
- (id)subcredentialIdentifier;
- (id)templateFields;
- (id)timeConfiguration;
- (id)value;
- (id)visibility;

@end
