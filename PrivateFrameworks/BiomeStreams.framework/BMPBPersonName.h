
@interface BMPBPersonName : PBCodable <NSCopying> {
    NSString * _name;
    BMPBNameComponents * _nameComponents;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasNameComponents;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) BMPBNameComponents *nameComponents;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasNameComponents;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)nameComponents;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameComponents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
