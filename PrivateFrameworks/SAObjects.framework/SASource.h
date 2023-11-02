
@interface SASource : SADomainObject

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *accountName;
@property (nonatomic, copy) NSString *domainIdentifier;
@property (nonatomic, copy) NSNumber *remote;

+ (id)source;
+ (id)sourceWithDictionary:(id)arg1 context:(id)arg2;

- (id)accountIdentifier;
- (id)accountName;
- (id)domainIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)remote;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountName:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setRemote:(id)arg1;

@end
