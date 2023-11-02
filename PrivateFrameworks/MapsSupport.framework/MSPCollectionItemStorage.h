
@interface MSPCollectionItemStorage : PBCodable <NSCopying> {
    NSData * _contents;
    NSData * _contentsTimestamp;
    NSData * _position;
    NSData * _positionTimestamp;
    NSData * _storageIdentifier;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSData *contents;
@property (nonatomic, retain) NSData *contentsTimestamp;
@property (nonatomic, readonly) bool hasContents;
@property (nonatomic, readonly) bool hasContentsTimestamp;
@property (nonatomic, readonly) bool hasPosition;
@property (nonatomic, readonly) bool hasPositionTimestamp;
@property (nonatomic, readonly) bool hasStorageIdentifier;
@property (nonatomic, retain) NSData *position;
@property (nonatomic, retain) NSData *positionTimestamp;
@property (nonatomic, retain) NSData *storageIdentifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)contents;
- (id)contentsTimestamp;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContents;
- (bool)hasContentsTimestamp;
- (bool)hasPosition;
- (bool)hasPositionTimestamp;
- (bool)hasStorageIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)position;
- (id)positionTimestamp;
- (bool)readFrom:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setContentsTimestamp:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setPositionTimestamp:(id)arg1;
- (void)setStorageIdentifier:(id)arg1;
- (id)storageIdentifier;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
