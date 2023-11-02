
@interface PFLFetchPatchResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int modelVersion : 1; 
    }  _has;
    long long  _modelVersion;
    CKCodeRecordTransport * _patchAsset;
}

@property (nonatomic) bool hasModelVersion;
@property (nonatomic, readonly) bool hasPatchAsset;
@property (nonatomic) long long modelVersion;
@property (nonatomic, retain) CKCodeRecordTransport *patchAsset;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasModelVersion;
- (bool)hasPatchAsset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)modelVersion;
- (id)patchAsset;
- (bool)readFrom:(id)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setModelVersion:(long long)arg1;
- (void)setPatchAsset:(id)arg1;
- (void)writeTo:(id)arg1;

@end
