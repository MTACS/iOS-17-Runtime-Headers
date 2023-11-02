
@interface PSESchemaPSEHomeFollowUp : SISchemaInstrumentationMessage {
    NSString * _followUpAccessoryType;
    unsigned int  _followUpDayOfWeek;
    unsigned int  _followUpDurationSinceSiriRequestInSeconds;
    unsigned int  _followUpHourOfDay;
    int  _followUpSource;
    int  _followUpType;
    struct { 
        unsigned int followUpType : 1; 
        unsigned int followUpSource : 1; 
        unsigned int isFollowUpInSameContainerAsSiriRequest : 1; 
        unsigned int followUpDayOfWeek : 1; 
        unsigned int followUpHourOfDay : 1; 
        unsigned int followUpDurationSinceSiriRequestInSeconds : 1; 
    }  _has;
    bool  _hasFollowUpAccessoryType;
    bool  _isFollowUpInSameContainerAsSiriRequest;
}

@property (nonatomic, copy) NSString *followUpAccessoryType;
@property (nonatomic) unsigned int followUpDayOfWeek;
@property (nonatomic) unsigned int followUpDurationSinceSiriRequestInSeconds;
@property (nonatomic) unsigned int followUpHourOfDay;
@property (nonatomic) int followUpSource;
@property (nonatomic) int followUpType;
@property (nonatomic) bool hasFollowUpAccessoryType;
@property (nonatomic) bool hasFollowUpDayOfWeek;
@property (nonatomic) bool hasFollowUpDurationSinceSiriRequestInSeconds;
@property (nonatomic) bool hasFollowUpHourOfDay;
@property (nonatomic) bool hasFollowUpSource;
@property (nonatomic) bool hasFollowUpType;
@property (nonatomic) bool hasIsFollowUpInSameContainerAsSiriRequest;
@property (nonatomic) bool isFollowUpInSameContainerAsSiriRequest;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)deleteFollowUpAccessoryType;
- (void)deleteFollowUpDayOfWeek;
- (void)deleteFollowUpDurationSinceSiriRequestInSeconds;
- (void)deleteFollowUpHourOfDay;
- (void)deleteFollowUpSource;
- (void)deleteFollowUpType;
- (void)deleteIsFollowUpInSameContainerAsSiriRequest;
- (id)dictionaryRepresentation;
- (id)followUpAccessoryType;
- (unsigned int)followUpDayOfWeek;
- (unsigned int)followUpDurationSinceSiriRequestInSeconds;
- (unsigned int)followUpHourOfDay;
- (int)followUpSource;
- (int)followUpType;
- (bool)hasFollowUpAccessoryType;
- (bool)hasFollowUpDayOfWeek;
- (bool)hasFollowUpDurationSinceSiriRequestInSeconds;
- (bool)hasFollowUpHourOfDay;
- (bool)hasFollowUpSource;
- (bool)hasFollowUpType;
- (bool)hasIsFollowUpInSameContainerAsSiriRequest;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFollowUpInSameContainerAsSiriRequest;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFollowUpAccessoryType:(id)arg1;
- (void)setFollowUpDayOfWeek:(unsigned int)arg1;
- (void)setFollowUpDurationSinceSiriRequestInSeconds:(unsigned int)arg1;
- (void)setFollowUpHourOfDay:(unsigned int)arg1;
- (void)setFollowUpSource:(int)arg1;
- (void)setFollowUpType:(int)arg1;
- (void)setHasFollowUpAccessoryType:(bool)arg1;
- (void)setHasFollowUpDayOfWeek:(bool)arg1;
- (void)setHasFollowUpDurationSinceSiriRequestInSeconds:(bool)arg1;
- (void)setHasFollowUpHourOfDay:(bool)arg1;
- (void)setHasFollowUpSource:(bool)arg1;
- (void)setHasFollowUpType:(bool)arg1;
- (void)setHasIsFollowUpInSameContainerAsSiriRequest:(bool)arg1;
- (void)setIsFollowUpInSameContainerAsSiriRequest:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
