
@interface HMDCameraRecordingSessionSignificantEvent : HMFObject <NSCopying, NSMutableCopying> {
    NSUUID * _UUID;
    unsigned long long  _confidenceLevel;
    NSDate * _dateOfOccurrence;
    NSSet * _faceClassifications;
    NSData * _faceCropData;
    NSData * _heroFrameData;
    unsigned long long  _reason;
    NSUUID * _sessionEntityUUID;
    double  _timeOffsetWithinClip;
}

@property (readonly, copy) NSUUID *UUID;
@property unsigned long long confidenceLevel;
@property (copy) NSDate *dateOfOccurrence;
@property (copy) NSSet *faceClassifications;
@property (retain) NSData *faceCropData;
@property (retain) NSData *heroFrameData;
@property unsigned long long reason;
@property (copy) NSUUID *sessionEntityUUID;
@property double timeOffsetWithinClip;

- (void).cxx_destruct;
- (id)UUID;
- (id)attributeDescriptions;
- (unsigned long long)confidenceLevel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateOfOccurrence;
- (id)faceClassifications;
- (id)faceCropData;
- (unsigned long long)hash;
- (id)heroFrameData;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)reason;
- (id)sessionEntityUUID;
- (void)setConfidenceLevel:(unsigned long long)arg1;
- (void)setDateOfOccurrence:(id)arg1;
- (void)setFaceClassifications:(id)arg1;
- (void)setFaceCropData:(id)arg1;
- (void)setHeroFrameData:(id)arg1;
- (void)setReason:(unsigned long long)arg1;
- (void)setSessionEntityUUID:(id)arg1;
- (void)setTimeOffsetWithinClip:(double)arg1;
- (double)timeOffsetWithinClip;

@end
