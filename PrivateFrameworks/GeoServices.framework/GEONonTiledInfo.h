
@interface GEONonTiledInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_muid : 1; 
    }  _flags;
    unsigned long long  _muid;
    NSString * _name;
}

@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *name;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMuid;
- (bool)hasName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)name;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
