
@interface STiCloudOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAppAndWebsiteActivityEnabled;
@property (nonatomic, retain) STiCloudOrganization *organization;
@property (nonatomic, copy) NSString *recoveryAltDSID;
@property (readonly) Class superclass;

+ (id)serializableClassName;

- (id)computeUniqueIdentifier;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)arg1;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
