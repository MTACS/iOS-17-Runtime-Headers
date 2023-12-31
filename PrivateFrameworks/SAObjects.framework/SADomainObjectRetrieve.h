
@interface SADomainObjectRetrieve : SABaseClientBoundCommand <SADomainObjectCommand>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *identifiers;
@property (readonly) Class superclass;

+ (id)domainObjectRetrieve;
+ (id)domainObjectRetrieveWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifiers;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setIdentifiers:(id)arg1;

@end
