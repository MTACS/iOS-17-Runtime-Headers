
@interface SGMIMetricsSubmodelStats : PBCodable <NSCopying> {
    unsigned int  _ageOfTheSubmodelInDays;
    struct { 
        unsigned int ageOfTheSubmodelInDays : 1; 
        unsigned int nbExtremelyDiscriminantTokensForIgnorability : 1; 
        unsigned int nbExtremelyDiscriminantTokensForSaliency : 1; 
        unsigned int nbHighlyDiscriminantTokensForIgnorability : 1; 
        unsigned int nbHighlyDiscriminantTokensForSaliency : 1; 
    }  _has;
    unsigned int  _nbExtremelyDiscriminantTokensForIgnorability;
    unsigned int  _nbExtremelyDiscriminantTokensForSaliency;
    unsigned int  _nbHighlyDiscriminantTokensForIgnorability;
    unsigned int  _nbHighlyDiscriminantTokensForSaliency;
}

@property (nonatomic) unsigned int ageOfTheSubmodelInDays;
@property (nonatomic) bool hasAgeOfTheSubmodelInDays;
@property (nonatomic) bool hasNbExtremelyDiscriminantTokensForIgnorability;
@property (nonatomic) bool hasNbExtremelyDiscriminantTokensForSaliency;
@property (nonatomic) bool hasNbHighlyDiscriminantTokensForIgnorability;
@property (nonatomic) bool hasNbHighlyDiscriminantTokensForSaliency;
@property (nonatomic) unsigned int nbExtremelyDiscriminantTokensForIgnorability;
@property (nonatomic) unsigned int nbExtremelyDiscriminantTokensForSaliency;
@property (nonatomic) unsigned int nbHighlyDiscriminantTokensForIgnorability;
@property (nonatomic) unsigned int nbHighlyDiscriminantTokensForSaliency;

- (unsigned int)ageOfTheSubmodelInDays;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAgeOfTheSubmodelInDays;
- (bool)hasNbExtremelyDiscriminantTokensForIgnorability;
- (bool)hasNbExtremelyDiscriminantTokensForSaliency;
- (bool)hasNbHighlyDiscriminantTokensForIgnorability;
- (bool)hasNbHighlyDiscriminantTokensForSaliency;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)nbExtremelyDiscriminantTokensForIgnorability;
- (unsigned int)nbExtremelyDiscriminantTokensForSaliency;
- (unsigned int)nbHighlyDiscriminantTokensForIgnorability;
- (unsigned int)nbHighlyDiscriminantTokensForSaliency;
- (bool)readFrom:(id)arg1;
- (void)setAgeOfTheSubmodelInDays:(unsigned int)arg1;
- (void)setHasAgeOfTheSubmodelInDays:(bool)arg1;
- (void)setHasNbExtremelyDiscriminantTokensForIgnorability:(bool)arg1;
- (void)setHasNbExtremelyDiscriminantTokensForSaliency:(bool)arg1;
- (void)setHasNbHighlyDiscriminantTokensForIgnorability:(bool)arg1;
- (void)setHasNbHighlyDiscriminantTokensForSaliency:(bool)arg1;
- (void)setNbExtremelyDiscriminantTokensForIgnorability:(unsigned int)arg1;
- (void)setNbExtremelyDiscriminantTokensForSaliency:(unsigned int)arg1;
- (void)setNbHighlyDiscriminantTokensForIgnorability:(unsigned int)arg1;
- (void)setNbHighlyDiscriminantTokensForSaliency:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
