
@interface HDCodableSyncStateVersionedData : PBCodable <NSCopying> {
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSData * _objectData;
    HDCodableSyncStateOrigin * _origin;
    int  _version;
}

@property (nonatomic, readonly) bool hasObjectData;
@property (nonatomic, readonly) bool hasOrigin;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSData *objectData;
@property (nonatomic, retain) HDCodableSyncStateOrigin *origin;
@property (nonatomic) int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasObjectData;
- (bool)hasOrigin;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectData;
- (id)origin;
- (bool)readFrom:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setObjectData:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setVersion:(int)arg1;
- (int)version;
- (void)writeTo:(id)arg1;

@end
