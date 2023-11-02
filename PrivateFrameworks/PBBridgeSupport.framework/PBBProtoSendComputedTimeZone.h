
@interface PBBProtoSendComputedTimeZone : PBCodable <NSCopying> {
    NSString * _computedTimeZone;
}

@property (nonatomic, retain) NSString *computedTimeZone;

- (void).cxx_destruct;
- (id)computedTimeZone;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setComputedTimeZone:(id)arg1;
- (void)writeTo:(id)arg1;

@end
