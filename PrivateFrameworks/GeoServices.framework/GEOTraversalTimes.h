
@interface GEOTraversalTimes : PBCodable <NSCopying> {
    unsigned int  _aggressiveEstimatedSeconds;
    unsigned int  _conservativeEstimatedSeconds;
    unsigned int  _estimatedSeconds;
    struct { 
        unsigned int has_aggressiveEstimatedSeconds : 1; 
        unsigned int has_conservativeEstimatedSeconds : 1; 
        unsigned int has_estimatedSeconds : 1; 
        unsigned int has_freeflowEstimatedSeconds : 1; 
        unsigned int has_historicalEstimatedSeconds : 1; 
    }  _flags;
    unsigned int  _freeflowEstimatedSeconds;
    unsigned int  _historicalEstimatedSeconds;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int aggressiveEstimatedSeconds;
@property (nonatomic) unsigned int conservativeEstimatedSeconds;
@property (nonatomic) unsigned int estimatedSeconds;
@property (nonatomic) unsigned int freeflowEstimatedSeconds;
@property (nonatomic) bool hasAggressiveEstimatedSeconds;
@property (nonatomic) bool hasConservativeEstimatedSeconds;
@property (nonatomic) bool hasEstimatedSeconds;
@property (nonatomic) bool hasFreeflowEstimatedSeconds;
@property (nonatomic) bool hasHistoricalEstimatedSeconds;
@property (nonatomic) unsigned int historicalEstimatedSeconds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)aggressiveEstimatedSeconds;
- (void)clearUnknownFields:(bool)arg1;
- (unsigned int)conservativeEstimatedSeconds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)estimatedSeconds;
- (unsigned int)freeflowEstimatedSeconds;
- (bool)hasAggressiveEstimatedSeconds;
- (bool)hasConservativeEstimatedSeconds;
- (bool)hasEstimatedSeconds;
- (bool)hasFreeflowEstimatedSeconds;
- (bool)hasHistoricalEstimatedSeconds;
- (unsigned long long)hash;
- (unsigned int)historicalEstimatedSeconds;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAggressiveEstimatedSeconds:(unsigned int)arg1;
- (void)setConservativeEstimatedSeconds:(unsigned int)arg1;
- (void)setEstimatedSeconds:(unsigned int)arg1;
- (void)setFreeflowEstimatedSeconds:(unsigned int)arg1;
- (void)setHasAggressiveEstimatedSeconds:(bool)arg1;
- (void)setHasConservativeEstimatedSeconds:(bool)arg1;
- (void)setHasEstimatedSeconds:(bool)arg1;
- (void)setHasFreeflowEstimatedSeconds:(bool)arg1;
- (void)setHasHistoricalEstimatedSeconds:(bool)arg1;
- (void)setHistoricalEstimatedSeconds:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
