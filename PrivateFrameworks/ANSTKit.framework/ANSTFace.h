
@interface ANSTFace : ANSTObject <NSSecureCoding> {
    ANSTEyeBlinkEstimate * _eyeBlinkEstimate;
    bool  _eyeBlinkEstimateExists;
    long long  _eyeCoveringConfidence;
    ANSTEyeRectEstimate * _eyeRectEstimate;
    bool  _eyeRectEstimateExists;
    long long  _faceMaskConfidence;
    bool  _frontal;
    ANST3DPoseEstimate * _poseEstimate;
    bool  _poseEstimateExists;
    ANSTSkinToneEstimate * _skinToneEstimate;
    bool  _skinToneEstimateExists;
    ANSTSmileEstimate * _smileEstimate;
    bool  _smileEstimateExists;
}

@property (nonatomic, readonly) ANSTEyeBlinkEstimate *eyeBlinkEstimate;
@property (nonatomic, readonly) bool eyeBlinkEstimateExists;
@property (nonatomic, readonly) long long eyeCoveringConfidence;
@property (nonatomic, readonly) ANSTEyeRectEstimate *eyeRectEstimate;
@property (nonatomic, readonly) bool eyeRectEstimateExists;
@property (nonatomic, readonly) long long faceMaskConfidence;
@property (getter=isFrontal, nonatomic, readonly) bool frontal;
@property (nonatomic, readonly) ANST3DPoseEstimate *poseEstimate;
@property (nonatomic, readonly) bool poseEstimateExists;
@property (nonatomic, readonly) ANSTSkinToneEstimate *skinToneEstimate;
@property (nonatomic, readonly) bool skinToneEstimateExists;
@property (nonatomic, readonly) ANSTSmileEstimate *smileEstimate;
@property (nonatomic, readonly) bool smileEstimateExists;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugJSONDictionary;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eyeBlinkEstimate;
- (bool)eyeBlinkEstimateExists;
- (long long)eyeCoveringConfidence;
- (id)eyeRectEstimate;
- (bool)eyeRectEstimateExists;
- (long long)faceMaskConfidence;
- (id)init;
- (id)initWithAcFace:(struct { unsigned int x1; unsigned int x2; int x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; unsigned int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; struct { float x_14_1_1; float x_14_1_2; float x_14_1_3; float x_14_1_4; } x14; struct { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; } x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned int x21; struct { float x_22_1_1; float x_22_1_2; float x_22_1_3; float x_22_1_4; } x22; unsigned char x23; unsigned int x24; float x25[64]; unsigned char x26; unsigned int x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; int x37; int x38; unsigned char x39; struct { float x_40_1_1; float x_40_1_2; float x_40_1_3; } x40[98]; int x41; }*)arg1;
- (id)initWithAcObject:(struct { unsigned int x1; unsigned int x2; int x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; unsigned int x5; int x6; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(unsigned long long)arg1 groupID:(unsigned long long)arg2 category:(id)arg3 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 confidence:(unsigned long long)arg5;
- (id)initWithObjectID:(unsigned long long)arg1 groupID:(unsigned long long)arg2 category:(id)arg3 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 confidence:(unsigned long long)arg5 frontal:(bool)arg6 faceMaskConfidence:(long long)arg7 eyeCoveringConfidence:(long long)arg8 poseEstimate:(id)arg9 skinToneEstimate:(id)arg10 smileEstimate:(id)arg11 eyeBlinkEstimate:(id)arg12 eyeRectEstimate:(id)arg13;
- (bool)isFrontal;
- (id)poseEstimate;
- (bool)poseEstimateExists;
- (id)skinToneEstimate;
- (bool)skinToneEstimateExists;
- (id)smileEstimate;
- (bool)smileEstimateExists;

@end
