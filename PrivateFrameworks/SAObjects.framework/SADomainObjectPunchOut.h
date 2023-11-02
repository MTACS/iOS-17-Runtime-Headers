
@interface SADomainObjectPunchOut : SABaseClientBoundCommand

@property (nonatomic, retain) SADomainObject *domainItem;

+ (id)domainObjectPunchOut;
+ (id)domainObjectPunchOutWithDictionary:(id)arg1 context:(id)arg2;

- (id)domainItem;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDomainItem:(id)arg1;

@end
