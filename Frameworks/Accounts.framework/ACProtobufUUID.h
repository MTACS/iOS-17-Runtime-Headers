
@interface ACProtobufUUID : PBCodable <NSCopying> {
    NSString * _value;
}

@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setValue:(id)arg1;
- (id)uuid;
- (id)value;
- (void)writeTo:(id)arg1;

@end
