
@interface SIRINLUINTERNALCompareOptions : PBCodable <NSCopying> {
    bool  _caseInsensitive;
    bool  _diacriticInsensitive;
    struct { 
        unsigned int caseInsensitive : 1; 
        unsigned int diacriticInsensitive : 1; 
        unsigned int widthInsensitive : 1; 
    }  _has;
    bool  _widthInsensitive;
}

@property (nonatomic) bool caseInsensitive;
@property (nonatomic) bool diacriticInsensitive;
@property (nonatomic) bool hasCaseInsensitive;
@property (nonatomic) bool hasDiacriticInsensitive;
@property (nonatomic) bool hasWidthInsensitive;
@property (nonatomic) bool widthInsensitive;

- (bool)caseInsensitive;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)diacriticInsensitive;
- (id)dictionaryRepresentation;
- (bool)hasCaseInsensitive;
- (bool)hasDiacriticInsensitive;
- (bool)hasWidthInsensitive;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCaseInsensitive:(bool)arg1;
- (void)setDiacriticInsensitive:(bool)arg1;
- (void)setHasCaseInsensitive:(bool)arg1;
- (void)setHasDiacriticInsensitive:(bool)arg1;
- (void)setHasWidthInsensitive:(bool)arg1;
- (void)setWidthInsensitive:(bool)arg1;
- (bool)widthInsensitive;
- (void)writeTo:(id)arg1;

@end
