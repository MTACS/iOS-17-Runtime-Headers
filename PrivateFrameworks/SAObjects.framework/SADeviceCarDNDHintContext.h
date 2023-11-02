
@interface SADeviceCarDNDHintContext : SADomainObject

@property (nonatomic, copy) NSString *utteranceDomainIdentifier;

+ (id)carDNDHintContext;
+ (id)carDNDHintContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setUtteranceDomainIdentifier:(id)arg1;
- (id)utteranceDomainIdentifier;

@end
