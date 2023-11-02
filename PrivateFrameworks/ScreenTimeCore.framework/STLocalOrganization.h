
@interface STLocalOrganization : STCoreOrganization <STSerializableMappedObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) STLocalOrganizationSettings *settings;
@property (readonly) Class superclass;

+ (id)fetchOrCreateLocalOrganizationWithContext:(id)arg1 error:(id*)arg2;
+ (id)serializableClassName;

@end
