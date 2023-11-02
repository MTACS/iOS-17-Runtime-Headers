
@interface CKSyncEngineFetchChangesOptions : NSObject <CKPropertiesDescription, NSCopying> {
    CKSyncEngineFetchChangesZoneConfiguration * _defaultZoneConfiguration;
    bool  _forceFetchChanges;
    CKOperationGroup * _operationGroup;
    NSArray * _prioritizedZoneIDs;
    CKSyncEngineFetchChangesScope * _scope;
    NSDictionary * _zoneConfigurations;
}

@property (readonly, copy) NSString *debugDescription;
@property (copy) CKSyncEngineFetchChangesZoneConfiguration *defaultZoneConfiguration;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceFetchChanges;
@property (readonly) unsigned long long hash;
@property (retain) CKOperationGroup *operationGroup;
@property (copy) NSArray *prioritizedZoneIDs;
@property (copy) CKSyncEngineFetchChangesScope *scope;
@property (readonly) Class superclass;
@property (copy) NSDictionary *zoneConfigurations;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKDescriptionClassName;
- (bool)CKDescriptionShouldPrintPointer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultZoneConfiguration;
- (id)description;
- (bool)forceFetchChanges;
- (id)init;
- (id)initWithScope:(id)arg1;
- (id)initWithZoneIDs:(id)arg1;
- (id)operationGroup;
- (id)prioritizedZoneIDs;
- (id)redactedDescription;
- (id)scope;
- (void)setDefaultZoneConfiguration:(id)arg1;
- (void)setForceFetchChanges:(bool)arg1;
- (void)setOperationGroup:(id)arg1;
- (void)setOperationGroup:(id)arg1 updateName:(bool)arg2;
- (void)setPrioritizedZoneIDs:(id)arg1;
- (void)setScope:(id)arg1;
- (void)setZoneConfigurations:(id)arg1;
- (void)updateOperationGroupName;
- (id)zoneConfigurations;

@end
