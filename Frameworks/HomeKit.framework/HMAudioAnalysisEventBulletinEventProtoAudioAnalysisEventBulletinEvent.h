
@interface HMAudioAnalysisEventBulletinEventProtoAudioAnalysisEventBulletinEvent : PBCodable <NSCopying> {
    NSString * _accessoryIdentifier;
    long long  _dateOfOccurrence;
    long long  _eventStartDate;
    struct { 
        unsigned int dateOfOccurrence : 1; 
        unsigned int eventStartDate : 1; 
        unsigned int reason : 1; 
        unsigned int state : 1; 
    }  _has;
    NSString * _homeIdentifier;
    NSString * _notificationUUID;
    long long  _reason;
    long long  _state;
    NSString * _threadIdentifier;
}

@property (nonatomic, retain) NSString *accessoryIdentifier;
@property (nonatomic) long long dateOfOccurrence;
@property (nonatomic) long long eventStartDate;
@property (nonatomic, readonly) bool hasAccessoryIdentifier;
@property (nonatomic) bool hasDateOfOccurrence;
@property (nonatomic) bool hasEventStartDate;
@property (nonatomic, readonly) bool hasHomeIdentifier;
@property (nonatomic, readonly) bool hasNotificationUUID;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasState;
@property (nonatomic, readonly) bool hasThreadIdentifier;
@property (nonatomic, retain) NSString *homeIdentifier;
@property (nonatomic, retain) NSString *notificationUUID;
@property (nonatomic) long long reason;
@property (nonatomic) long long state;
@property (nonatomic, retain) NSString *threadIdentifier;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dateOfOccurrence;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)eventStartDate;
- (bool)hasAccessoryIdentifier;
- (bool)hasDateOfOccurrence;
- (bool)hasEventStartDate;
- (bool)hasHomeIdentifier;
- (bool)hasNotificationUUID;
- (bool)hasReason;
- (bool)hasState;
- (bool)hasThreadIdentifier;
- (unsigned long long)hash;
- (id)homeIdentifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notificationUUID;
- (bool)readFrom:(id)arg1;
- (long long)reason;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setDateOfOccurrence:(long long)arg1;
- (void)setEventStartDate:(long long)arg1;
- (void)setHasDateOfOccurrence:(bool)arg1;
- (void)setHasEventStartDate:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHomeIdentifier:(id)arg1;
- (void)setNotificationUUID:(id)arg1;
- (void)setReason:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (long long)state;
- (id)threadIdentifier;
- (void)writeTo:(id)arg1;

@end
