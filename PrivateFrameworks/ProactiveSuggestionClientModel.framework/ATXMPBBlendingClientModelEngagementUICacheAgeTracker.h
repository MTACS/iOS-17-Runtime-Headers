
@interface ATXMPBBlendingClientModelEngagementUICacheAgeTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    NSString * _consumerSubType;
    struct { 
        unsigned int outcomeType : 1; 
    }  _has;
    int  _outcomeType;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic) bool hasOutcomeType;
@property (nonatomic) int outcomeType;

- (void).cxx_destruct;
- (int)StringAsOutcomeType:(id)arg1;
- (id)abGroup;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbGroup;
- (bool)hasConsumerSubType;
- (bool)hasOutcomeType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)outcomeType;
- (id)outcomeTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setHasOutcomeType:(bool)arg1;
- (void)setOutcomeType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
