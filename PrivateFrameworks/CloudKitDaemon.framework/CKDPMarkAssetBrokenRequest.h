
@interface CKDPMarkAssetBrokenRequest : PBRequest <NSCopying> {
    NSString * _affectedRecordType;
    CKDPRecordIdentifier * _brokenAssetRecordID;
    NSString * _fieldName;
    NSMutableArray * _fileSignatures;
    struct { 
        unsigned int listIndex : 1; 
        unsigned int isPackage : 1; 
        unsigned int skipWriteMissingAssetStatusRecord : 1; 
    }  _has;
    bool  _isPackage;
    int  _listIndex;
    NSMutableArray * _referenceSignatures;
    bool  _skipWriteMissingAssetStatusRecord;
}

@property (nonatomic, retain) NSString *affectedRecordType;
@property (nonatomic, retain) CKDPRecordIdentifier *brokenAssetRecordID;
@property (nonatomic, retain) NSString *fieldName;
@property (nonatomic, retain) NSMutableArray *fileSignatures;
@property (nonatomic, readonly) bool hasAffectedRecordType;
@property (nonatomic, readonly) bool hasBrokenAssetRecordID;
@property (nonatomic, readonly) bool hasFieldName;
@property (nonatomic) bool hasIsPackage;
@property (nonatomic) bool hasListIndex;
@property (nonatomic) bool hasSkipWriteMissingAssetStatusRecord;
@property (nonatomic) bool isPackage;
@property (nonatomic) int listIndex;
@property (nonatomic, retain) NSMutableArray *referenceSignatures;
@property (nonatomic) bool skipWriteMissingAssetStatusRecord;

+ (Class)fileSignatureType;
+ (id)options;
+ (Class)referenceSignatureType;

- (void).cxx_destruct;
- (void)addFileSignature:(id)arg1;
- (void)addReferenceSignature:(id)arg1;
- (id)affectedRecordType;
- (id)brokenAssetRecordID;
- (void)clearFileSignatures;
- (void)clearReferenceSignatures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fieldName;
- (id)fileSignatureAtIndex:(unsigned long long)arg1;
- (id)fileSignatures;
- (unsigned long long)fileSignaturesCount;
- (bool)hasAffectedRecordType;
- (bool)hasBrokenAssetRecordID;
- (bool)hasFieldName;
- (bool)hasIsPackage;
- (bool)hasListIndex;
- (bool)hasSkipWriteMissingAssetStatusRecord;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPackage;
- (int)listIndex;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referenceSignatureAtIndex:(unsigned long long)arg1;
- (id)referenceSignatures;
- (unsigned long long)referenceSignaturesCount;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAffectedRecordType:(id)arg1;
- (void)setBrokenAssetRecordID:(id)arg1;
- (void)setFieldName:(id)arg1;
- (void)setFileSignatures:(id)arg1;
- (void)setHasIsPackage:(bool)arg1;
- (void)setHasListIndex:(bool)arg1;
- (void)setHasSkipWriteMissingAssetStatusRecord:(bool)arg1;
- (void)setIsPackage:(bool)arg1;
- (void)setListIndex:(int)arg1;
- (void)setReferenceSignatures:(id)arg1;
- (void)setSkipWriteMissingAssetStatusRecord:(bool)arg1;
- (bool)skipWriteMissingAssetStatusRecord;
- (void)writeTo:(id)arg1;

@end
