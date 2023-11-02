
@interface PKPassUpgradeRequest : NSObject <NSSecureCoding> {
    NSDictionary * _fields;
    PKOSVersionRequirementRange * _osVersionRange;
    NSArray * _paymentApplicationIdentifiers;
    NSString * _secureElementIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSDictionary *fields;
@property (nonatomic, readonly) PKOSVersionRequirement *minimumOSVersion;
@property (nonatomic, readonly) PKOSVersionRequirementRange *osVersionRange;
@property (nonatomic, readonly) NSArray *paymentApplicationIdentifiers;
@property (nonatomic, copy) NSString *secureElementIdentifier;
@property (nonatomic, readonly) unsigned long long type;

+ (id)passUpgradeRequestFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)fields;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)minimumOSVersion;
- (id)osVersionRange;
- (id)paymentApplicationIdentifiers;
- (id)secureElementIdentifier;
- (void)setSecureElementIdentifier:(id)arg1;
- (unsigned long long)type;

@end
