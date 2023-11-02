
@interface ATXPBBlendingSessionClientModelSuggestion : PBCodable <NSCopying> {
    NSString * _executableId;
    struct { 
        unsigned int rawScore : 1; 
        unsigned int suggestedConfidenceCategory : 1; 
    }  _has;
    double  _rawScore;
    int  _suggestedConfidenceCategory;
}

@property (nonatomic, retain) NSString *executableId;
@property (nonatomic, readonly) bool hasExecutableId;
@property (nonatomic) bool hasRawScore;
@property (nonatomic) bool hasSuggestedConfidenceCategory;
@property (nonatomic) double rawScore;
@property (nonatomic) int suggestedConfidenceCategory;

- (void).cxx_destruct;
- (int)StringAsSuggestedConfidenceCategory:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)executableId;
- (bool)hasExecutableId;
- (bool)hasRawScore;
- (bool)hasSuggestedConfidenceCategory;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)rawScore;
- (bool)readFrom:(id)arg1;
- (void)setExecutableId:(id)arg1;
- (void)setHasRawScore:(bool)arg1;
- (void)setHasSuggestedConfidenceCategory:(bool)arg1;
- (void)setRawScore:(double)arg1;
- (void)setSuggestedConfidenceCategory:(int)arg1;
- (int)suggestedConfidenceCategory;
- (id)suggestedConfidenceCategoryAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
