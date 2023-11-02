
@interface ATXPBUserNotificationDigestLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    ATXPBUserNotificationDigest * _digest;
    int  _eventType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int eventType : 1; 
    }  _has;
    double  _timestamp;
}

@property (nonatomic, retain) ATXPBUserNotificationDigest *digest;
@property (nonatomic) int eventType;
@property (nonatomic, readonly) bool hasDigest;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (int)StringAsEventType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)digest;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasDigest;
- (bool)hasEventType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)initFromJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDigest:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
