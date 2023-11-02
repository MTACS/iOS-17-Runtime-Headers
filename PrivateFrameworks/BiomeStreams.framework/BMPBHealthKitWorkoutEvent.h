
@interface BMPBHealthKitWorkoutEvent : PBCodable <NSCopying> {
    NSString * _activityType;
    NSString * _activityUUID;
    int  _eventType;
    struct { 
        unsigned int eventType : 1; 
        unsigned int isFirstPartyDonation : 1; 
        unsigned int isIndoor : 1; 
        unsigned int isUpdate : 1; 
    }  _has;
    bool  _isFirstPartyDonation;
    bool  _isIndoor;
    bool  _isUpdate;
}

@property (nonatomic, retain) NSString *activityType;
@property (nonatomic, retain) NSString *activityUUID;
@property (nonatomic) int eventType;
@property (nonatomic, readonly) bool hasActivityType;
@property (nonatomic, readonly) bool hasActivityUUID;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasIsFirstPartyDonation;
@property (nonatomic) bool hasIsIndoor;
@property (nonatomic) bool hasIsUpdate;
@property (nonatomic) bool isFirstPartyDonation;
@property (nonatomic) bool isIndoor;
@property (nonatomic) bool isUpdate;

- (void).cxx_destruct;
- (int)StringAsEventType:(id)arg1;
- (id)activityType;
- (id)activityUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasActivityType;
- (bool)hasActivityUUID;
- (bool)hasEventType;
- (bool)hasIsFirstPartyDonation;
- (bool)hasIsIndoor;
- (bool)hasIsUpdate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isFirstPartyDonation;
- (bool)isIndoor;
- (bool)isUpdate;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)setActivityUUID:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasIsFirstPartyDonation:(bool)arg1;
- (void)setHasIsIndoor:(bool)arg1;
- (void)setHasIsUpdate:(bool)arg1;
- (void)setIsFirstPartyDonation:(bool)arg1;
- (void)setIsIndoor:(bool)arg1;
- (void)setIsUpdate:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
