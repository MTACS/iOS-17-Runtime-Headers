
@interface GEORPFeedbackLongField : PBCodable <NSCopying> {
    long long  _edited;
    struct { 
        unsigned int has_edited : 1; 
        unsigned int has_original : 1; 
    }  _flags;
    long long  _original;
}

@property (nonatomic) long long edited;
@property (nonatomic) bool hasEdited;
@property (nonatomic) bool hasOriginal;
@property (nonatomic) long long original;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)edited;
- (bool)hasEdited;
- (bool)hasOriginal;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (long long)original;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEdited:(long long)arg1;
- (void)setHasEdited:(bool)arg1;
- (void)setHasOriginal:(bool)arg1;
- (void)setOriginal:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
