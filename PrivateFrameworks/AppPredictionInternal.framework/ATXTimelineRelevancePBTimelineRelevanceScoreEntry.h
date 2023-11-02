
@interface ATXTimelineRelevancePBTimelineRelevanceScoreEntry : PBCodable <NSCopying> {
    long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int relevanceScore : 1; 
        unsigned int timestamp : 1; 
        unsigned int suggestionMappingReason : 1; 
    }  _has;
    double  _relevanceScore;
    NSString * _suggestionID;
    int  _suggestionMappingReason;
    long long  _timestamp;
}

@property (nonatomic) long long duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasRelevanceScore;
@property (nonatomic, readonly) bool hasSuggestionID;
@property (nonatomic) bool hasSuggestionMappingReason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) double relevanceScore;
@property (nonatomic, retain) NSString *suggestionID;
@property (nonatomic) int suggestionMappingReason;
@property (nonatomic) long long timestamp;

- (void).cxx_destruct;
- (int)StringAsSuggestionMappingReason:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)duration;
- (bool)hasDuration;
- (bool)hasRelevanceScore;
- (bool)hasSuggestionID;
- (bool)hasSuggestionMappingReason;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)relevanceScore;
- (void)setDuration:(long long)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasRelevanceScore:(bool)arg1;
- (void)setHasSuggestionMappingReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRelevanceScore:(double)arg1;
- (void)setSuggestionID:(id)arg1;
- (void)setSuggestionMappingReason:(int)arg1;
- (void)setTimestamp:(long long)arg1;
- (id)suggestionID;
- (int)suggestionMappingReason;
- (id)suggestionMappingReasonAsString:(int)arg1;
- (long long)timestamp;
- (void)writeTo:(id)arg1;

@end
