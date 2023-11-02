
@interface GEORPCorrectedFlag : PBCodable <NSCopying> {
    bool  _correctedValue;
    int  _flag;
    struct { 
        unsigned int has_flag : 1; 
        unsigned int has_correctedValue : 1; 
        unsigned int has_originalValue : 1; 
    }  _flags;
    bool  _originalValue;
}

@property (nonatomic) bool correctedValue;
@property (nonatomic) int flag;
@property (nonatomic) bool hasCorrectedValue;
@property (nonatomic) bool hasFlag;
@property (nonatomic) bool hasOriginalValue;
@property (nonatomic) bool originalValue;

+ (bool)isValid:(id)arg1;

- (int)StringAsFlag:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)correctedValue;
- (id)description;
- (id)dictionaryRepresentation;
- (int)flag;
- (id)flagAsString:(int)arg1;
- (bool)hasCorrectedValue;
- (bool)hasFlag;
- (bool)hasOriginalValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)originalValue;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCorrectedValue:(bool)arg1;
- (void)setFlag:(int)arg1;
- (void)setHasCorrectedValue:(bool)arg1;
- (void)setHasFlag:(bool)arg1;
- (void)setHasOriginalValue:(bool)arg1;
- (void)setOriginalValue:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
