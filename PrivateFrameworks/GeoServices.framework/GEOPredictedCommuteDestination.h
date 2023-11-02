
@interface GEOPredictedCommuteDestination : PBCodable <NSCopying> {
    bool  _chosen;
    double  _confidenceScore;
    int  _destinationType;
    struct { 
        unsigned int has_confidenceScore : 1; 
        unsigned int has_destinationType : 1; 
        unsigned int has_chosen : 1; 
    }  _flags;
}

@property (nonatomic) bool chosen;
@property (nonatomic) double confidenceScore;
@property (nonatomic) int destinationType;
@property (nonatomic) bool hasChosen;
@property (nonatomic) bool hasConfidenceScore;
@property (nonatomic) bool hasDestinationType;

+ (bool)isValid:(id)arg1;

- (int)StringAsDestinationType:(id)arg1;
- (bool)chosen;
- (double)confidenceScore;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)destinationType;
- (id)destinationTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasChosen;
- (bool)hasConfidenceScore;
- (bool)hasDestinationType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChosen:(bool)arg1;
- (void)setConfidenceScore:(double)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setHasChosen:(bool)arg1;
- (void)setHasConfidenceScore:(bool)arg1;
- (void)setHasDestinationType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
