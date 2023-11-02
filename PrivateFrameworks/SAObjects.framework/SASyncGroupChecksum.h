
@interface SASyncGroupChecksum : AceObject <SAAceSerializable>

@property (nonatomic) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domainObjectClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifierChecksum;
@property (readonly) Class superclass;
@property (nonatomic, retain) SASyncAnchor *syncAnchor;

+ (id)groupChecksum;
+ (id)groupChecksumWithDictionary:(id)arg1 context:(id)arg2;

- (long long)count;
- (id)domainObjectClass;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifierChecksum;
- (void)setCount:(long long)arg1;
- (void)setDomainObjectClass:(id)arg1;
- (void)setIdentifierChecksum:(id)arg1;
- (void)setSyncAnchor:(id)arg1;
- (id)syncAnchor;

@end