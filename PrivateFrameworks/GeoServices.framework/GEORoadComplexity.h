
@interface GEORoadComplexity : PBCodable <NSCopying> {
    NSMutableArray * _attributes;
    struct { 
        unsigned int has_offset : 1; 
        unsigned int has_zilchPathIndex : 1; 
    }  _flags;
    unsigned int  _offset;
    PBUnknownFields * _unknownFields;
    unsigned int  _zilchPathIndex;
}

@property (nonatomic, retain) NSMutableArray *attributes;
@property (nonatomic) bool hasOffset;
@property (nonatomic) bool hasZilchPathIndex;
@property (nonatomic) unsigned int offset;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int zilchPathIndex;

+ (Class)attributeType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1;
- (id)attributeAtIndex:(unsigned long long)arg1;
- (id)attributes;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOffset;
- (bool)hasZilchPathIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)offset;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setHasOffset:(bool)arg1;
- (void)setHasZilchPathIndex:(bool)arg1;
- (void)setOffset:(unsigned int)arg1;
- (void)setZilchPathIndex:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (unsigned int)zilchPathIndex;

@end
