
@interface VCPBIntentDefinitionFile : PBCodable <NSCopying> {
    NSData * _data;
    NSString * _name;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
