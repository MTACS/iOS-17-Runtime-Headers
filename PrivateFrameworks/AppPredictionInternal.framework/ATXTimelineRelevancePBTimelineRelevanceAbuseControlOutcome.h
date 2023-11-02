
@interface ATXTimelineRelevancePBTimelineRelevanceAbuseControlOutcome : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int outcomeType : 1; 
    }  _has;
    int  _outcomeType;
    long long  _timestamp;
}

@property (nonatomic) bool hasOutcomeType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int outcomeType;
@property (nonatomic) long long timestamp;

- (int)StringAsOutcomeType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOutcomeType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)outcomeType;
- (id)outcomeTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasOutcomeType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOutcomeType:(int)arg1;
- (void)setTimestamp:(long long)arg1;
- (long long)timestamp;
- (void)writeTo:(id)arg1;

@end
