
@interface ATXPBUserNotificationLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    int  _deliveryReason;
    int  _eventType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int deliveryReason : 1; 
        unsigned int eventType : 1; 
    }  _has;
    NSString * _modeIdentifier;
    ATXPBUserNotification * _notification;
    double  _timestamp;
}

@property (nonatomic) int deliveryReason;
@property (nonatomic) int eventType;
@property (nonatomic) bool hasDeliveryReason;
@property (nonatomic) bool hasEventType;
@property (nonatomic, readonly) bool hasModeIdentifier;
@property (nonatomic, readonly) bool hasNotification;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *modeIdentifier;
@property (nonatomic, retain) ATXPBUserNotification *notification;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (int)StringAsDeliveryReason:(id)arg1;
- (int)StringAsEventType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deliveryReason;
- (id)deliveryReasonAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasDeliveryReason;
- (bool)hasEventType;
- (bool)hasModeIdentifier;
- (bool)hasNotification;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)initFromJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)modeIdentifier;
- (id)notification;
- (bool)readFrom:(id)arg1;
- (void)setDeliveryReason:(int)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasDeliveryReason:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setModeIdentifier:(id)arg1;
- (void)setNotification:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
