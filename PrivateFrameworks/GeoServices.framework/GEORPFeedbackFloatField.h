
@interface GEORPFeedbackFloatField : PBCodable <NSCopying> {
    float  _edited;
    struct { 
        unsigned int has_edited : 1; 
        unsigned int has_original : 1; 
    }  _flags;
    float  _original;
}

@property (nonatomic) float edited;
@property (nonatomic) bool hasEdited;
@property (nonatomic) bool hasOriginal;
@property (nonatomic) float original;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)edited;
- (bool)hasEdited;
- (bool)hasOriginal;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (float)original;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEdited:(float)arg1;
- (void)setHasEdited:(bool)arg1;
- (void)setHasOriginal:(bool)arg1;
- (void)setOriginal:(float)arg1;
- (void)writeTo:(id)arg1;

@end
