
@interface FKPaymentPass : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _associatedApplicationIdentifiers;
    NSString * _issuerCountryCode;
    NSString * _localizedDescription;
    NSString * _organizationName;
    NSString * _partnerOrgID;
    NSString * _passTypeIdentifier;
    NSString * _primaryAccountIdentifier;
    NSString * _primaryPaymentApplicationDisplayName;
    NSString * _primaryPaymentApplicationPaymentType;
    NSString * _serialNumber;
    NSString * _uniqueID;
}

@property (nonatomic, copy) NSSet *associatedApplicationIdentifiers;
@property (nonatomic, copy) NSString *issuerCountryCode;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic, copy) NSString *partnerOrgID;
@property (nonatomic, copy) NSString *passTypeIdentifier;
@property (nonatomic, copy) NSString *primaryAccountIdentifier;
@property (nonatomic, copy) NSString *primaryPaymentApplicationDisplayName;
@property (nonatomic, copy) NSString *primaryPaymentApplicationPaymentType;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, copy) NSString *uniqueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedApplicationIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)issuerCountryCode;
- (id)localizedDescription;
- (id)organizationName;
- (id)partnerOrgID;
- (id)passTypeIdentifier;
- (id)primaryAccountIdentifier;
- (id)primaryPaymentApplicationDisplayName;
- (id)primaryPaymentApplicationPaymentType;
- (id)serialNumber;
- (void)setAssociatedApplicationIdentifiers:(id)arg1;
- (void)setIssuerCountryCode:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPartnerOrgID:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPrimaryAccountIdentifier:(id)arg1;
- (void)setPrimaryPaymentApplicationDisplayName:(id)arg1;
- (void)setPrimaryPaymentApplicationPaymentType:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;

@end
