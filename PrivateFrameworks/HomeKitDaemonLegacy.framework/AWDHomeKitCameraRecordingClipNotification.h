
@interface AWDHomeKitCameraRecordingClipNotification : PBCodable <NSCopying> {
    NSString * _cameraUUID;
    unsigned long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int recordingEventTriggers : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _recordingEventTriggers;
    unsigned long long  _sequenceNumber;
    NSString * _sessionUUID;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *cameraUUID;
@property (nonatomic) unsigned long long duration;
@property (nonatomic, readonly) bool hasCameraUUID;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasRecordingEventTriggers;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long recordingEventTriggers;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)cameraUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (bool)hasCameraUUID;
- (bool)hasDuration;
- (bool)hasRecordingEventTriggers;
- (bool)hasSequenceNumber;
- (bool)hasSessionUUID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)recordingEventTriggers;
- (unsigned long long)sequenceNumber;
- (id)sessionUUID;
- (void)setCameraUUID:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasRecordingEventTriggers:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRecordingEventTriggers:(unsigned long long)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
