
@interface CKSyncEngineFailedZoneSave : NSObject <CKPropertiesDescription> {
    NSError * _error;
    CKRecordZone * _recordZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecordZone *recordZone;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKDescriptionClassName;
- (bool)CKDescriptionShouldPrintPointer;
- (id)description;
- (id)error;
- (id)initWithZone:(id)arg1 error:(id)arg2;
- (id)recordZone;
- (id)redactedDescription;

@end
