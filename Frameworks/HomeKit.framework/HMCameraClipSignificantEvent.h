
@interface HMCameraClipSignificantEvent : HMCameraSignificantEvent {
    NSUUID * _clipUUID;
    double  _timeOffsetWithinClip;
}

@property (readonly, copy) NSUUID *clipUUID;
@property (readonly) double timeOffsetWithinClip;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)clipUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 cameraProfileUUID:(id)arg5 faceClassification:(id)arg6 timeOffsetWithinClip:(double)arg7 clipUUID:(id)arg8;
- (id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 faceClassification:(id)arg5 timeOffsetWithinClip:(double)arg6 clipUUID:(id)arg7;
- (bool)isEqual:(id)arg1;
- (double)timeOffsetWithinClip;

@end
