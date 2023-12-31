
@interface NTPBWrappingKeyMapEntry : PBCodable <NSCopying> {
    NSData * _wrappingKey;
    NSData * _wrappingKeyId;
}

@property (nonatomic, readonly) bool hasWrappingKey;
@property (nonatomic, readonly) bool hasWrappingKeyId;
@property (nonatomic, retain) NSData *wrappingKey;
@property (nonatomic, retain) NSData *wrappingKeyId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWrappingKey;
- (bool)hasWrappingKeyId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setWrappingKey:(id)arg1;
- (void)setWrappingKeyId:(id)arg1;
- (id)wrappingKey;
- (id)wrappingKeyId;
- (void)writeTo:(id)arg1;

@end
