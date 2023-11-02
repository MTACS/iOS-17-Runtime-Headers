
@interface STFamilyOrganization : STCoreOrganization <STSerializableMappedObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *settings;
@property (readonly) Class superclass;

+ (id)fetchOrCreateFamilyOrganizationWithContext:(id)arg1 error:(id*)arg2;
+ (id)serializableClassName;

@end
