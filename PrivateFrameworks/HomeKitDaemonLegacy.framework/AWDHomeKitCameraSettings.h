
@interface AWDHomeKitCameraSettings : PBCodable <NSCopying> {
    struct { 
        unsigned int recordingEventTriggers : 1; 
        unsigned int isInclusionZone : 1; 
        unsigned int isReachabilityNotificationEnabled : 1; 
        unsigned int isRecordingAudioEnabled : 1; 
        unsigned int isRecordingCapable : 1; 
        unsigned int isRecordingEnabled : 1; 
        unsigned int isSmartBulletinBoardNotificationEnabled : 1; 
    }  _has;
    bool  _isInclusionZone;
    bool  _isReachabilityNotificationEnabled;
    bool  _isRecordingAudioEnabled;
    bool  _isRecordingCapable;
    bool  _isRecordingEnabled;
    bool  _isSmartBulletinBoardNotificationEnabled;
    NSString * _numActivityZonesBinString;
    unsigned int  _recordingEventTriggers;
}

@property (nonatomic) bool hasIsInclusionZone;
@property (nonatomic) bool hasIsReachabilityNotificationEnabled;
@property (nonatomic) bool hasIsRecordingAudioEnabled;
@property (nonatomic) bool hasIsRecordingCapable;
@property (nonatomic) bool hasIsRecordingEnabled;
@property (nonatomic) bool hasIsSmartBulletinBoardNotificationEnabled;
@property (nonatomic, readonly) bool hasNumActivityZonesBinString;
@property (nonatomic) bool hasRecordingEventTriggers;
@property (nonatomic) bool isInclusionZone;
@property (nonatomic) bool isReachabilityNotificationEnabled;
@property (nonatomic) bool isRecordingAudioEnabled;
@property (nonatomic) bool isRecordingCapable;
@property (nonatomic) bool isRecordingEnabled;
@property (nonatomic) bool isSmartBulletinBoardNotificationEnabled;
@property (nonatomic, retain) NSString *numActivityZonesBinString;
@property (nonatomic) unsigned int recordingEventTriggers;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsInclusionZone;
- (bool)hasIsReachabilityNotificationEnabled;
- (bool)hasIsRecordingAudioEnabled;
- (bool)hasIsRecordingCapable;
- (bool)hasIsRecordingEnabled;
- (bool)hasIsSmartBulletinBoardNotificationEnabled;
- (bool)hasNumActivityZonesBinString;
- (bool)hasRecordingEventTriggers;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isInclusionZone;
- (bool)isReachabilityNotificationEnabled;
- (bool)isRecordingAudioEnabled;
- (bool)isRecordingCapable;
- (bool)isRecordingEnabled;
- (bool)isSmartBulletinBoardNotificationEnabled;
- (void)mergeFrom:(id)arg1;
- (id)numActivityZonesBinString;
- (bool)readFrom:(id)arg1;
- (unsigned int)recordingEventTriggers;
- (void)setHasIsInclusionZone:(bool)arg1;
- (void)setHasIsReachabilityNotificationEnabled:(bool)arg1;
- (void)setHasIsRecordingAudioEnabled:(bool)arg1;
- (void)setHasIsRecordingCapable:(bool)arg1;
- (void)setHasIsRecordingEnabled:(bool)arg1;
- (void)setHasIsSmartBulletinBoardNotificationEnabled:(bool)arg1;
- (void)setHasRecordingEventTriggers:(bool)arg1;
- (void)setIsInclusionZone:(bool)arg1;
- (void)setIsReachabilityNotificationEnabled:(bool)arg1;
- (void)setIsRecordingAudioEnabled:(bool)arg1;
- (void)setIsRecordingCapable:(bool)arg1;
- (void)setIsRecordingEnabled:(bool)arg1;
- (void)setIsSmartBulletinBoardNotificationEnabled:(bool)arg1;
- (void)setNumActivityZonesBinString:(id)arg1;
- (void)setRecordingEventTriggers:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
