
@interface SPProtoAudioFilePlayerUpdateContainedIdentifier : PBCodable <NSCopying> {
    NSString * _containedIdentifier;
    NSString * _identifier;
}

@property (nonatomic, retain) NSString *containedIdentifier;
@property (nonatomic, readonly) bool hasContainedIdentifier;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (id)containedIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainedIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainedIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)sockPuppetMessageForPlayerItemUpsertWithAsset;
- (id)sockPuppetMessageForQueuePlayerAppendItem;
- (id)sockPuppetMessageForQueuePlayerRemoveItem;
- (id)sockPuppetMessageForQueuePlayerReplaceCurrentItem;
- (id)sockPuppetMessageForQueuePlayerSetCurrentItem;
- (void)writeTo:(id)arg1;

@end
