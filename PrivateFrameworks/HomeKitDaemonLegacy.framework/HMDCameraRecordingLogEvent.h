
@interface HMDCameraRecordingLogEvent : HMMLogEvent {
    NSUUID * _cameraID;
    unsigned long long  _sequenceNumber;
    NSUUID * _sessionID;
}

@property (readonly, copy) NSUUID *cameraID;
@property (readonly) unsigned long long endTimestamp;
@property (readonly, copy) NSUUID *ephemeralCameraID;
@property unsigned long long sequenceNumber;
@property (readonly, copy) NSUUID *sessionID;
@property (readonly) unsigned long long startTimestamp;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)cameraID;
- (unsigned long long)endTimestamp;
- (id)ephemeralCameraID;
- (id)initWithSessionID:(id)arg1 cameraID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (unsigned long long)sequenceNumber;
- (id)sessionID;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (unsigned long long)startTimestamp;

@end
