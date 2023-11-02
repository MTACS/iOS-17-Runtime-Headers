
@interface _SWCDomain : NSObject <NSCopying, NSSecureCoding, SWCRedactedDescription> {
    NSString * _host;
    BOOL  _modeOfOperation;
    NSNumber * _port;
    bool  _wildcard;
}

@property (readonly) NSString *host;
@property (getter=isHostIPAddress, readonly) bool hostIPAddress;
@property (readonly) BOOL modeOfOperation;
@property (readonly) _SWCDomain *nonWildcardDomain;
@property (readonly) NSNumber *port;
@property (readonly) NSString *rawValue;
@property (readonly) NSString *topLevelDomainValue;
@property (getter=isValid, readonly) bool valid;
@property (getter=isWildcard, readonly) bool wildcard;
@property (readonly) _SWCDomain *wildcardDomain;

+ (id)appleDomain;
+ (id)exampleDomain;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)domainRequiringModeOfOperation:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)encompassesDomain:(id)arg1;
- (unsigned long long)hash;
- (id)host;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHost:(id)arg1 port:(id)arg2 wildcard:(bool)arg3 modeOfOperation:(BOOL)arg4;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHostIPAddress;
- (bool)isValid;
- (bool)isWildcard;
- (BOOL)modeOfOperation;
- (id)nonWildcardDomain;
- (id)port;
- (id)rawValue;
- (id)redactedDescription;
- (id)topLevelDomainValue;
- (id)wildcardDomain;

@end
