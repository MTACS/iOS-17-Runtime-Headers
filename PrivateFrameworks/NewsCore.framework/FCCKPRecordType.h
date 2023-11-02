
@interface FCCKPRecordType : PBCodable <NSCopying> {
    NSString * _name;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
