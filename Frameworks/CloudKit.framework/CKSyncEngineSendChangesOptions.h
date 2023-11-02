
@interface CKSyncEngineSendChangesOptions : NSObject <CKPropertiesDescription, NSCopying> {
    CKOperationGroup * _operationGroup;
    CKSyncEngineSendChangesScope * _scope;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CKOperationGroup *operationGroup;
@property (copy) CKSyncEngineSendChangesScope *scope;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKDescriptionClassName;
- (bool)CKDescriptionShouldPrintPointer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithScope:(id)arg1;
- (id)initWithZoneIDs:(id)arg1;
- (id)operationGroup;
- (id)redactedDescription;
- (id)scope;
- (void)setOperationGroup:(id)arg1;
- (void)setOperationGroup:(id)arg1 updateName:(bool)arg2;
- (void)setScope:(id)arg1;
- (void)updateOperationGroupName;
- (id)zoneIDs;

@end
