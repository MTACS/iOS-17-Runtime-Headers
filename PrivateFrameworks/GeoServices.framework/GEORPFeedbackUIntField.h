
@interface GEORPFeedbackUIntField : PBCodable <NSCopying> {
    unsigned int  _edited;
    struct { 
        unsigned int has_edited : 1; 
        unsigned int has_original : 1; 
    }  _flags;
    unsigned int  _original;
}

@property (nonatomic) unsigned int edited;
@property (nonatomic) bool hasEdited;
@property (nonatomic) bool hasOriginal;
@property (nonatomic) unsigned int original;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)edited;
- (bool)hasEdited;
- (bool)hasOriginal;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)original;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEdited:(unsigned int)arg1;
- (void)setHasEdited:(bool)arg1;
- (void)setHasOriginal:(bool)arg1;
- (void)setOriginal:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
