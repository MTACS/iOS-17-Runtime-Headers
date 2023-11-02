
@interface CKSyncEngineFailedRecordSave : NSObject <CKPropertiesDescription> {
    NSError * _error;
    CKRecord * _record;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecord *record;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKDescriptionClassName;
- (bool)CKDescriptionShouldPrintPointer;
- (id)description;
- (id)error;
- (id)initWithRecord:(id)arg1 error:(id)arg2;
- (id)record;
- (id)redactedDescription;

@end
