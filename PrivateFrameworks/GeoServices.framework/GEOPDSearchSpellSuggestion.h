
@interface GEOPDSearchSpellSuggestion : PBCodable <NSCopying> {
    unsigned int  _editDistance;
    struct { 
        unsigned int has_score : 1; 
        unsigned int has_editDistance : 1; 
        unsigned int has_rawScore : 1; 
    }  _flags;
    float  _rawScore;
    double  _score;
    GEOPDSearchTokenSet * _suggestion;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
