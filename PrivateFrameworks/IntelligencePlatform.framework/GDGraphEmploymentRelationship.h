
@interface GDGraphEmploymentRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allDepartment;
    NSArray * _allOrganizationId;
    NSString * _department;
    GDEntityIdentifier<GDGraphEntityIdentifier> * _organizationId;
}

@property (nonatomic, readonly, copy) NSArray *allDepartment;
@property (nonatomic, readonly, copy) NSArray *allOrganizationId;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *department;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) GDEntityIdentifier<GDGraphEntityIdentifier> *organizationId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allDepartment;
- (id)allOrganizationId;
- (id)department;
- (Class)graphObjectType;
- (id)initWithDepartmentField:(id)arg1 organizationIdField:(id)arg2 allDepartmentField:(id)arg3 allOrganizationIdField:(id)arg4;
- (id)organizationId;

@end
