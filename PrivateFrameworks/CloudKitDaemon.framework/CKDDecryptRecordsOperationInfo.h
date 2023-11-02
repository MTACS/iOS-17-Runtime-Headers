
@interface CKDDecryptRecordsOperationInfo : CKDatabaseOperationInfo {
    NSDictionary * _webSharingIdentityDataByRecordID;
}

@property (nonatomic, retain) NSDictionary *webSharingIdentityDataByRecordID;

- (void).cxx_destruct;
- (void)setWebSharingIdentityDataByRecordID:(id)arg1;
- (id)webSharingIdentityDataByRecordID;

@end
