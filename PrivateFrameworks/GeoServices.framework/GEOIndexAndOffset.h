
@interface GEOIndexAndOffset : PBCodable <NSCopying> {
    struct { 
        unsigned int has_index : 1; 
        unsigned int has_offset : 1; 
    }  _flags;
    unsigned int  _index;
    unsigned int  _offset;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIndex;
@property (nonatomic) bool hasOffset;
@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int offset;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIndex;
- (bool)hasOffset;
- (unsigned long long)hash;
- (unsigned int)index;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)offset;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIndex:(bool)arg1;
- (void)setHasOffset:(bool)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setOffset:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
