
@interface NFMProtoSendSharedConfiguration : PBCodable <NSCopying> {
    NSData * _sharedConfiguration;
}

@property (nonatomic, retain) NSData *sharedConfiguration;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSharedConfiguration:(id)arg1;
- (id)sharedConfiguration;
- (void)writeTo:(id)arg1;

@end
