
@interface CKSyncEngineFetchedRecordDeletion : NSObject <CKPropertiesDescription> {
    CKRecordID * _recordID;
    NSString * _recordType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CKRecordID *recordID;
@property (nonatomic, readonly, copy) NSString *recordType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKDescriptionClassName;
- (bool)CKDescriptionShouldPrintPointer;
- (id)description;
- (id)initWithRecordID:(id)arg1 recordType:(id)arg2;
- (id)recordID;
- (id)recordType;
- (id)redactedDescription;

@end
