
@interface BMPBAlarmEvent : PBCodable <NSCopying> {
    NSString * _alarmID;
    int  _eventType;
    struct { 
        unsigned int eventType : 1; 
        unsigned int lastEventType : 1; 
        unsigned int isSleepAlarm : 1; 
    }  _has;
    bool  _isSleepAlarm;
    int  _lastEventType;
}

@property (nonatomic, retain) NSString *alarmID;
@property (nonatomic) int eventType;
@property (nonatomic, readonly) bool hasAlarmID;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasIsSleepAlarm;
@property (nonatomic) bool hasLastEventType;
@property (nonatomic) bool isSleepAlarm;
@property (nonatomic) int lastEventType;

- (void).cxx_destruct;
- (int)StringAsEventType:(id)arg1;
- (int)StringAsLastEventType:(id)arg1;
- (id)alarmID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasAlarmID;
- (bool)hasEventType;
- (bool)hasIsSleepAlarm;
- (bool)hasLastEventType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isSleepAlarm;
- (int)lastEventType;
- (id)lastEventTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlarmID:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasIsSleepAlarm:(bool)arg1;
- (void)setHasLastEventType:(bool)arg1;
- (void)setIsSleepAlarm:(bool)arg1;
- (void)setLastEventType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
