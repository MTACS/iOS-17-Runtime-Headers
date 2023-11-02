
@interface SIRINLUEXTERNALReferenceContext : PBCodable <NSCopying> {
    bool  _contextualReference;
    bool  _disambiguationNeeded;
    struct { 
        unsigned int contextualReference : 1; 
        unsigned int disambiguationNeeded : 1; 
    }  _has;
}

@property (nonatomic) bool contextualReference;
@property (nonatomic) bool disambiguationNeeded;
@property (nonatomic) bool hasContextualReference;
@property (nonatomic) bool hasDisambiguationNeeded;

- (bool)contextualReference;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)disambiguationNeeded;
- (bool)hasContextualReference;
- (bool)hasDisambiguationNeeded;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContextualReference:(bool)arg1;
- (void)setDisambiguationNeeded:(bool)arg1;
- (void)setHasContextualReference:(bool)arg1;
- (void)setHasDisambiguationNeeded:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
