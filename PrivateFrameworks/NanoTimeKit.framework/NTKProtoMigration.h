
@interface NTKProtoMigration : PBCodable <NSCopying> {
    NSString * _from;
    NSString * _to;
}

@property (nonatomic, retain) NSString *from;
@property (nonatomic, readonly) bool hasFrom;
@property (nonatomic, readonly) bool hasTo;
@property (nonatomic, retain) NSString *to;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)from;
- (bool)hasFrom;
- (bool)hasTo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setTo:(id)arg1;
- (id)to;
- (void)writeTo:(id)arg1;

@end
