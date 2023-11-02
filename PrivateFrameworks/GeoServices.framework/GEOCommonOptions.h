
@interface GEOCommonOptions : PBCodable <NSCopying> {
    bool  _excludeGuidance;
    struct { 
        unsigned int has_excludeGuidance : 1; 
        unsigned int has_includeSnapScoreMetadataDebug : 1; 
        unsigned int has_includeSummaryForPredictedDestination : 1; 
        unsigned int has_includeTravelTimeAggressive : 1; 
        unsigned int has_includeTravelTimeConservative : 1; 
        unsigned int has_includeTravelTimeEstimate : 1; 
        unsigned int has_supportsArMode : 1; 
    }  _flags;
    bool  _includeSnapScoreMetadataDebug;
    bool  _includeSummaryForPredictedDestination;
    bool  _includeTravelTimeAggressive;
    bool  _includeTravelTimeConservative;
    bool  _includeTravelTimeEstimate;
    bool  _supportsArMode;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool excludeGuidance;
@property (nonatomic) bool hasExcludeGuidance;
@property (nonatomic) bool hasIncludeSnapScoreMetadataDebug;
@property (nonatomic) bool hasIncludeSummaryForPredictedDestination;
@property (nonatomic) bool hasIncludeTravelTimeAggressive;
@property (nonatomic) bool hasIncludeTravelTimeConservative;
@property (nonatomic) bool hasIncludeTravelTimeEstimate;
@property (nonatomic) bool hasSupportsArMode;
@property (nonatomic) bool includeSnapScoreMetadataDebug;
@property (nonatomic) bool includeSummaryForPredictedDestination;
@property (nonatomic) bool includeTravelTimeAggressive;
@property (nonatomic) bool includeTravelTimeConservative;
@property (nonatomic) bool includeTravelTimeEstimate;
@property (nonatomic) bool supportsArMode;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)excludeGuidance;
- (bool)hasExcludeGuidance;
- (bool)hasIncludeSnapScoreMetadataDebug;
- (bool)hasIncludeSummaryForPredictedDestination;
- (bool)hasIncludeTravelTimeAggressive;
- (bool)hasIncludeTravelTimeConservative;
- (bool)hasIncludeTravelTimeEstimate;
- (bool)hasSupportsArMode;
- (unsigned long long)hash;
- (bool)includeSnapScoreMetadataDebug;
- (bool)includeSummaryForPredictedDestination;
- (bool)includeTravelTimeAggressive;
- (bool)includeTravelTimeConservative;
- (bool)includeTravelTimeEstimate;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExcludeGuidance:(bool)arg1;
- (void)setHasExcludeGuidance:(bool)arg1;
- (void)setHasIncludeSnapScoreMetadataDebug:(bool)arg1;
- (void)setHasIncludeSummaryForPredictedDestination:(bool)arg1;
- (void)setHasIncludeTravelTimeAggressive:(bool)arg1;
- (void)setHasIncludeTravelTimeConservative:(bool)arg1;
- (void)setHasIncludeTravelTimeEstimate:(bool)arg1;
- (void)setHasSupportsArMode:(bool)arg1;
- (void)setIncludeSnapScoreMetadataDebug:(bool)arg1;
- (void)setIncludeSummaryForPredictedDestination:(bool)arg1;
- (void)setIncludeTravelTimeAggressive:(bool)arg1;
- (void)setIncludeTravelTimeConservative:(bool)arg1;
- (void)setIncludeTravelTimeEstimate:(bool)arg1;
- (void)setSupportsArMode:(bool)arg1;
- (bool)supportsArMode;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
