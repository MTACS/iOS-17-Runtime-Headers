
@interface CKDUpdateMissingAssetStatusOperationInfo : CKDatabaseOperationInfo {
    NSArray * _assetPutReceipts;
    NSArray * _assetSizes;
    bool  _isPackage;
    bool  _recovered;
    CKRecordID * _repairRecordID;
}

@property (nonatomic, retain) NSArray *assetPutReceipts;
@property (nonatomic, retain) NSArray *assetSizes;
@property (nonatomic) bool isPackage;
@property (nonatomic) bool recovered;
@property (nonatomic, retain) CKRecordID *repairRecordID;

- (void).cxx_destruct;
- (id)assetPutReceipts;
- (id)assetSizes;
- (bool)isPackage;
- (bool)recovered;
- (id)repairRecordID;
- (void)setAssetPutReceipts:(id)arg1;
- (void)setAssetSizes:(id)arg1;
- (void)setIsPackage:(bool)arg1;
- (void)setRecovered:(bool)arg1;
- (void)setRepairRecordID:(id)arg1;

@end
