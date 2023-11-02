
@interface CKDUpdateMissingAssetStatusURLRequest : CKDURLRequest {
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
@property (nonatomic, copy) CKRecordID *repairRecordID;

- (void).cxx_destruct;
- (id)assetPutReceipts;
- (id)assetSizes;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 recoveredAssetRepairRecordID:(id)arg2 size:(unsigned long long)arg3 putReceipt:(id)arg4;
- (id)initWithOperation:(id)arg1 recoveredPackageRepairRecordID:(id)arg2 sizes:(id)arg3 putReceipts:(id)arg4;
- (id)initWithOperation:(id)arg1 repairRecordID:(id)arg2 recovered:(bool)arg3 package:(bool)arg4 sizes:(id)arg5 putReceipts:(id)arg6;
- (id)initWithOperation:(id)arg1 unrecoveredRepairRecordID:(id)arg2;
- (bool)isPackage;
- (bool)recovered;
- (id)repairRecordID;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setAssetPutReceipts:(id)arg1;
- (void)setAssetSizes:(id)arg1;
- (void)setIsPackage:(bool)arg1;
- (void)setRecovered:(bool)arg1;
- (void)setRepairRecordID:(id)arg1;

@end
