
@interface SPProtoAudioFilePlayerAsset : PBCodable <NSCopying> {
    SPProtoObjectMessage * _destroy;
    SPProtoAudioFilePlayerAssetUpdateMetaData * _upsertWithMetaData;
}

@property (nonatomic, retain) SPProtoObjectMessage *destroy;
@property (nonatomic, readonly) bool hasDestroy;
@property (nonatomic, readonly) bool hasUpsertWithMetaData;
@property (nonatomic, retain) SPProtoAudioFilePlayerAssetUpdateMetaData *upsertWithMetaData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destroy;
- (id)dictionaryRepresentation;
- (bool)hasDestroy;
- (bool)hasUpsertWithMetaData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDestroy:(id)arg1;
- (void)setUpsertWithMetaData:(id)arg1;
- (id)sockPuppetMessage;
- (id)upsertWithMetaData;
- (void)writeTo:(id)arg1;

@end
