
@interface STFamilyOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject, STVersionVectorable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *isAppAndWebsiteActivityEnabled;
@property (nonatomic) bool isDirty;
@property (nonatomic) bool isManaged;
@property (nonatomic, retain) STFamilyOrganization *organization;
@property (nonatomic) bool shareWebUsage;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *versionVector;

+ (id)serializableClassName;

- (id)computeUniqueIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)arg1;
- (id)redactedDescription;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
