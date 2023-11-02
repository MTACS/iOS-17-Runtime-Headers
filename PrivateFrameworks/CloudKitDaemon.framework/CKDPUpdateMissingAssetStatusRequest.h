
@interface CKDPUpdateMissingAssetStatusRequest : PBRequest <NSCopying> {
    NSString * _assetPutReceipt;
    long long  _assetSize;
    struct { 
        unsigned int assetSize : 1; 
        unsigned int recovered : 1; 
    }  _has;
    CKDPRecordIdentifier * _missingAssetStatusRecordID;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _packageAssetSizes;
    NSMutableArray * _packagePutReceipts;
    bool  _recovered;
}

@property (nonatomic, retain) NSString *assetPutReceipt;
@property (nonatomic) long long assetSize;
@property (nonatomic, readonly) bool hasAssetPutReceipt;
@property (nonatomic) bool hasAssetSize;
@property (nonatomic, readonly) bool hasMissingAssetStatusRecordID;
@property (nonatomic) bool hasRecovered;
@property (nonatomic, retain) CKDPRecordIdentifier *missingAssetStatusRecordID;
@property (nonatomic, readonly) long long*packageAssetSizes;
@property (nonatomic, readonly) unsigned long long packageAssetSizesCount;
@property (nonatomic, retain) NSMutableArray *packagePutReceipts;
@property (nonatomic) bool recovered;

+ (id)options;
+ (Class)packagePutReceiptsType;

- (void).cxx_destruct;
- (void)addPackageAssetSize:(long long)arg1;
- (void)addPackagePutReceipts:(id)arg1;
- (id)assetPutReceipt;
- (long long)assetSize;
- (void)clearPackageAssetSizes;
- (void)clearPackagePutReceipts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssetPutReceipt;
- (bool)hasAssetSize;
- (bool)hasMissingAssetStatusRecordID;
- (bool)hasRecovered;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)missingAssetStatusRecordID;
- (long long)packageAssetSizeAtIndex:(unsigned long long)arg1;
- (long long*)packageAssetSizes;
- (unsigned long long)packageAssetSizesCount;
- (id)packagePutReceipts;
- (id)packagePutReceiptsAtIndex:(unsigned long long)arg1;
- (unsigned long long)packagePutReceiptsCount;
- (bool)readFrom:(id)arg1;
- (bool)recovered;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAssetPutReceipt:(id)arg1;
- (void)setAssetSize:(long long)arg1;
- (void)setHasAssetSize:(bool)arg1;
- (void)setHasRecovered:(bool)arg1;
- (void)setMissingAssetStatusRecordID:(id)arg1;
- (void)setPackageAssetSizes:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setPackagePutReceipts:(id)arg1;
- (void)setRecovered:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
