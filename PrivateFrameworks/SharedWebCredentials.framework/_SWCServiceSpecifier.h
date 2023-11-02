
@interface _SWCServiceSpecifier : NSObject <NSCopying, NSSecureCoding, SWCRedactedDescription> {
    _SWCApplicationIdentifier * _applicationIdentifier;
    _SWCDomain * _domain;
    NSString * _serviceType;
}

@property (readonly) _SWCApplicationIdentifier *SWCApplicationIdentifier;
@property (readonly) _SWCDomain *SWCDomain;
@property (readonly) NSString *applicationIdentifier;
@property (readonly) NSString *applicationIdentifierPrefix;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *domain;
@property (readonly) NSString *domainHost;
@property (readonly) BOOL domainModeOfOperation;
@property (readonly) NSNumber *domainPort;
@property (getter=isDomainWildcard, readonly) bool domainWildcard;
@property (getter=isFullySpecified, readonly) bool fullySpecified;
@property (readonly) NSString *serviceType;
@property (getter=isValid, readonly) bool valid;

+ (id)_serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id*)arg3;
+ (id)serviceSpecifiersWithEntitlementValue:(id)arg1 error:(id*)arg2;
+ (id)serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SWCApplicationIdentifier;
- (id)SWCDomain;
- (id)_initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3;
- (id)applicationIdentifier;
- (id)applicationIdentifierPrefix;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)domain;
- (bool)domainEncompassesDomain:(id)arg1;
- (bool)domainEncompassesDomainOfServiceSpecifier:(id)arg1;
- (id)domainHost;
- (BOOL)domainModeOfOperation;
- (id)domainPort;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3;
- (bool)isDomainWildcard;
- (bool)isEqual:(id)arg1;
- (bool)isFullySpecified;
- (bool)isValid;
- (id)redactedDescription;
- (id)serviceType;

@end
