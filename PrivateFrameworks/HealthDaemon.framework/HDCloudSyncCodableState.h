
@interface HDCloudSyncCodableState : PBCodable <NSCopying> {
    NSData * _stateData;
}

@property (nonatomic, readonly) bool hasStateData;
@property (nonatomic, retain) NSData *stateData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStateData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setStateData:(id)arg1;
- (id)stateData;
- (void)writeTo:(id)arg1;

@end
