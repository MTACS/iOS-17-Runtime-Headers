
@interface ATXTimelineRelevancePBTimelineRelevanceRotation : PBCodable <NSCopying> {
    int  _clientModelId;
    long long  _duration;
    int  _engagement;
    struct { 
        unsigned int duration : 1; 
        unsigned int timestamp : 1; 
        unsigned int clientModelId : 1; 
        unsigned int engagement : 1; 
        unsigned int rotationEventType : 1; 
        unsigned int isMediumOrHighConfidence : 1; 
    }  _has;
    bool  _isMediumOrHighConfidence;
    int  _rotationEventType;
    long long  _timestamp;
}

@property (nonatomic) int clientModelId;
@property (nonatomic) long long duration;
@property (nonatomic) int engagement;
@property (nonatomic) bool hasClientModelId;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEngagement;
@property (nonatomic) bool hasIsMediumOrHighConfidence;
@property (nonatomic) bool hasRotationEventType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isMediumOrHighConfidence;
@property (nonatomic) int rotationEventType;
@property (nonatomic) long long timestamp;

- (int)StringAsClientModelId:(id)arg1;
- (int)StringAsEngagement:(id)arg1;
- (int)StringAsRotationEventType:(id)arg1;
- (int)clientModelId;
- (id)clientModelIdAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)duration;
- (int)engagement;
- (id)engagementAsString:(int)arg1;
- (bool)hasClientModelId;
- (bool)hasDuration;
- (bool)hasEngagement;
- (bool)hasIsMediumOrHighConfidence;
- (bool)hasRotationEventType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMediumOrHighConfidence;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rotationEventType;
- (id)rotationEventTypeAsString:(int)arg1;
- (void)setClientModelId:(int)arg1;
- (void)setDuration:(long long)arg1;
- (void)setEngagement:(int)arg1;
- (void)setHasClientModelId:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEngagement:(bool)arg1;
- (void)setHasIsMediumOrHighConfidence:(bool)arg1;
- (void)setHasRotationEventType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsMediumOrHighConfidence:(bool)arg1;
- (void)setRotationEventType:(int)arg1;
- (void)setTimestamp:(long long)arg1;
- (long long)timestamp;
- (void)writeTo:(id)arg1;

@end
