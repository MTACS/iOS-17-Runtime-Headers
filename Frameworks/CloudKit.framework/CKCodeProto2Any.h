
@interface CKCodeProto2Any : PBCodable <NSCopying> {
    NSString * _typeUrl;
    NSData * _value;
}

@property (nonatomic, readonly) bool hasTypeUrl;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSString *typeUrl;
@property (nonatomic, retain) NSData *value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTypeUrl;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTypeUrl:(id)arg1;
- (void)setValue:(id)arg1;
- (id)typeUrl;
- (id)value;
- (void)writeTo:(id)arg1;

@end
