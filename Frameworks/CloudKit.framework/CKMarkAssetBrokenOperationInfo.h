
@interface CKMarkAssetBrokenOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    bool  _bypassPCSEncryptionForTouchRepairZone;
    NSString * _field;
    long long  _listIndex;
    CKRecordID * _recordID;
    bool  _simulateCorruptAsset;
    bool  _touchRepairZone;
    CKUploadRequestConfiguration * _uploadRequestConfiguration;
    bool  _writeRepairRecord;
}

@property (nonatomic) bool bypassPCSEncryptionForTouchRepairZone;
@property (nonatomic, retain) NSString *field;
@property (nonatomic) long long listIndex;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic) bool simulateCorruptAsset;
@property (nonatomic) bool touchRepairZone;
@property (nonatomic, retain) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (nonatomic) bool writeRepairRecord;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)bypassPCSEncryptionForTouchRepairZone;
- (void)encodeWithCoder:(id)arg1;
- (id)field;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)listIndex;
- (id)recordID;
- (void)setBypassPCSEncryptionForTouchRepairZone:(bool)arg1;
- (void)setField:(id)arg1;
- (void)setListIndex:(long long)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSimulateCorruptAsset:(bool)arg1;
- (void)setTouchRepairZone:(bool)arg1;
- (void)setUploadRequestConfiguration:(id)arg1;
- (void)setWriteRepairRecord:(bool)arg1;
- (bool)simulateCorruptAsset;
- (bool)touchRepairZone;
- (id)uploadRequestConfiguration;
- (bool)writeRepairRecord;

@end
