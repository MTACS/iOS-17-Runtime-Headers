
@interface STiCloudOrganization : STCoreOrganization <STSerializableMappedObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) STiCloudOrganizationSettings *settings;
@property (readonly) Class superclass;

+ (id)fetchOrCreateiCloudOrganizationWithContext:(id)arg1 error:(id*)arg2;
+ (id)serializableClassName;

@end
