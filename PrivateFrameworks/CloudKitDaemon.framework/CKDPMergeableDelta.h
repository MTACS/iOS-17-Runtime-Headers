
@interface CKDPMergeableDelta : PBCodable <NSCopying> {
    CKDPAsset * _asset;
    NSData * _data;
    CKDPAsset * _encryptedAsset;
    NSData * _encryptedData;
    struct { 
        unsigned int payload : 1; 
    }  _has;
    CKDPMergeableDeltaMetadata * _metadata;
    int  _payload;
}

@property (nonatomic, retain) CKDPAsset *asset;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) CKDPAsset *encryptedAsset;
@property (nonatomic, retain) NSData *encryptedData;
@property (nonatomic, readonly) bool hasAsset;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic, readonly) bool hasEncryptedAsset;
@property (nonatomic, readonly) bool hasEncryptedData;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic) bool hasPayload;
@property (nonatomic, retain) CKDPMergeableDeltaMetadata *metadata;
@property (nonatomic) int payload;

- (void).cxx_destruct;
- (int)StringAsPayload:(id)arg1;
- (id)asset;
- (void)clearOneofValuesForPayload;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedAsset;
- (id)encryptedData;
- (bool)hasAsset;
- (bool)hasData;
- (bool)hasEncryptedAsset;
- (bool)hasEncryptedData;
- (bool)hasMetadata;
- (bool)hasPayload;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (int)payload;
- (id)payloadAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setData:(id)arg1;
- (void)setEncryptedAsset:(id)arg1;
- (void)setEncryptedData:(id)arg1;
- (void)setHasPayload:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPayload:(int)arg1;
- (void)writeTo:(id)arg1;

@end
