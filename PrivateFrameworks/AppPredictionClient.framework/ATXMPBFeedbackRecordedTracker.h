
@interface ATXMPBFeedbackRecordedTracker : PBCodable <NSCopying> {
    NSString * _consumerSubType;
    int  _engagementType;
    struct { 
        unsigned int engagementType : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic) int engagementType;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic) bool hasEngagementType;

- (void).cxx_destruct;
- (int)StringAsEngagementType:(id)arg1;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)engagementType;
- (id)engagementTypeAsString:(int)arg1;
- (bool)hasConsumerSubType;
- (bool)hasEngagementType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setEngagementType:(int)arg1;
- (void)setHasEngagementType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
