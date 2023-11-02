
@interface BMPBTextInputSessionEvent : PBCodable <NSCopying> {
    NSString * _bundleID;
    double  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int timestamp : 1; 
        unsigned int sessionType : 1; 
    }  _has;
    NSString * _sessionID;
    int  _sessionType;
    double  _timestamp;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) double duration;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasDuration;
@property (nonatomic, readonly) bool hasSessionID;
@property (nonatomic) bool hasSessionType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) int sessionType;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (int)StringAsSessionType:(id)arg1;
- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (bool)hasBundleID;
- (bool)hasDuration;
- (bool)hasSessionID;
- (bool)hasSessionType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionID;
- (int)sessionType;
- (id)sessionTypeAsString:(int)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasSessionType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSessionType:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
