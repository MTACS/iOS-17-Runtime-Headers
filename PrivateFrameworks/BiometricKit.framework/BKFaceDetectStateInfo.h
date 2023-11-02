
@interface BKFaceDetectStateInfo : NSObject <BKUIFaceDetectStateInfo> {
    NSNumber * _distance;
    unsigned long long  _eyeReliefStatus;
    bool  _faceDetected;
    bool  _flare;
    NSNumber * _frameNumber;
    bool  _glassesMismatch;
    bool  _multipleFaces;
    bool  _occlusion;
    unsigned long long  _orientation;
    bool  _partiallyOutOfView;
    NSNumber * _pitch;
    NSNumber * _roll;
    bool  _tooCloseToCamera;
    bool  _tooFarFromCamera;
    bool  _unsupportedGlasses;
    NSNumber * _yaw;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *distance;
@property (nonatomic) unsigned long long eyeReliefStatus;
@property (nonatomic, readonly) bool faceDetected;
@property (nonatomic) bool faceDetected;
@property (nonatomic, readonly) bool flare;
@property (nonatomic) bool flare;
@property (nonatomic, readonly) NSNumber *frameNumber;
@property (nonatomic, readonly) bool glassesMismatch;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool multipleFaces;
@property (nonatomic) bool multipleFaces;
@property (nonatomic, readonly) bool occlusion;
@property (nonatomic) bool occlusion;
@property (nonatomic, readonly) unsigned long long orientation;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic, readonly) bool partiallyOutOfView;
@property (nonatomic, readonly) NSNumber *pitch;
@property (nonatomic, retain) NSNumber *pitch;
@property (nonatomic, readonly) NSNumber *roll;
@property (nonatomic, retain) NSNumber *roll;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool tooCloseToCamera;
@property (nonatomic) bool tooCloseToCamera;
@property (nonatomic, readonly) bool tooFarFromCamera;
@property (nonatomic) bool tooFarFromCamera;
@property (nonatomic, readonly) bool unsupportedGlasses;
@property (nonatomic, readonly) NSNumber *yaw;
@property (nonatomic, retain) NSNumber *yaw;

// Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit

- (void).cxx_destruct;
- (id)dictionary;
- (id)distance;
- (unsigned long long)eyeReliefStatus;
- (bool)faceDetected;
- (bool)flare;
- (id)frameNumber;
- (bool)glassesMismatch;
- (id)initFromDictionary:(id)arg1;
- (id)initFromFaceInfo:(const struct { unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned int x6; float x7; float x8; float x9; unsigned int x10; }*)arg1;
- (id)initWithPresenceState:(bool)arg1;
- (id)initWithPresenceState:(bool)arg1 details:(id)arg2;
- (bool)multipleFaces;
- (bool)occlusion;
- (unsigned long long)orientation;
- (bool)partiallyOutOfView;
- (id)pitch;
- (id)roll;
- (void)setDistance:(id)arg1;
- (void)setEyeReliefStatus:(unsigned long long)arg1;
- (void)setFaceDetected:(bool)arg1;
- (void)setFlare:(bool)arg1;
- (void)setMultipleFaces:(bool)arg1;
- (void)setOcclusion:(bool)arg1;
- (void)setOrientation:(unsigned long long)arg1;
- (void)setPitch:(id)arg1;
- (void)setRoll:(id)arg1;
- (void)setTooCloseToCamera:(bool)arg1;
- (void)setTooFarFromCamera:(bool)arg1;
- (void)setYaw:(id)arg1;
- (bool)tooCloseToCamera;
- (bool)tooFarFromCamera;
- (bool)unsupportedGlasses;
- (id)yaw;

// Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness

- (id)init;

@end
