
@interface CRXFAppClipCode : NSObject {
    bool  _cylLeftSignFlipped;
    bool  _cylRightSignFlipped;
    unsigned int  _identifyingColorRGBA;
    float  _leftAddVR;
    unsigned long long  _leftAxisID;
    unsigned long long  _leftCalibrationAxis;
    float  _leftCalibrationCylinder;
    unsigned long long  _leftCalibrationRXID;
    float  _leftCalibrationSphere;
    unsigned long long  _leftDisplayAxis;
    float  _leftDisplayCylinder;
    float  _leftDisplaySphere;
    unsigned long long  _leftRXID;
    unsigned long long  _lensType;
    float  _rightAddVR;
    unsigned long long  _rightAxisID;
    unsigned long long  _rightCalibrationAxis;
    float  _rightCalibrationCylinder;
    unsigned long long  _rightCalibrationRXID;
    float  _rightCalibrationSphere;
    unsigned long long  _rightDisplayAxis;
    float  _rightDisplayCylinder;
    float  _rightDisplaySphere;
    unsigned long long  _rightRXID;
    NSData * _secret;
    unsigned long long  _version;
}

@property (nonatomic, readonly) bool cylLeftSignFlipped;
@property (nonatomic, readonly) bool cylRightSignFlipped;
@property (nonatomic, readonly) bool hasLeftAndRightRX;
@property (nonatomic, readonly) bool hasLeftRX;
@property (nonatomic, readonly) bool hasOnlyLeftRX;
@property (nonatomic, readonly) bool hasOnlyRightRX;
@property (nonatomic, readonly) bool hasRightRX;
@property (nonatomic, readonly) bool hasSingleLensRX;
@property (nonatomic, readonly) unsigned int identifyingColorRGBA;
@property (nonatomic, readonly) bool isLeftRXOutsideSupportedRange;
@property (nonatomic, readonly) bool isRightRXOutsideSupportedRange;
@property (nonatomic, readonly) float leftAddVR;
@property (nonatomic, readonly) unsigned long long leftAxisID;
@property (nonatomic, readonly) unsigned long long leftCalibrationAxis;
@property (nonatomic, readonly) float leftCalibrationCylinder;
@property (nonatomic, readonly) unsigned long long leftCalibrationRXID;
@property (nonatomic, readonly) float leftCalibrationSphere;
@property (nonatomic, readonly) unsigned long long leftDisplayAxis;
@property (nonatomic, readonly) float leftDisplayCylinder;
@property (nonatomic, readonly) float leftDisplaySphere;
@property (nonatomic, readonly) unsigned long long leftRXID;
@property (nonatomic, readonly) unsigned long long lensType;
@property (nonatomic, readonly) float rightAddVR;
@property (nonatomic, readonly) unsigned long long rightAxisID;
@property (nonatomic, readonly) unsigned long long rightCalibrationAxis;
@property (nonatomic, readonly) float rightCalibrationCylinder;
@property (nonatomic, readonly) unsigned long long rightCalibrationRXID;
@property (nonatomic, readonly) float rightCalibrationSphere;
@property (nonatomic, readonly) unsigned long long rightDisplayAxis;
@property (nonatomic, readonly) float rightDisplayCylinder;
@property (nonatomic, readonly) float rightDisplaySphere;
@property (nonatomic, readonly) unsigned long long rightRXID;
@property (nonatomic, readonly) NSData *secret;
@property (nonatomic, readonly) unsigned long long version;

- (void).cxx_destruct;
- (bool)cylLeftSignFlipped;
- (bool)cylRightSignFlipped;
- (id)description;
- (bool)hasLeftAndRightRX;
- (bool)hasLeftRX;
- (bool)hasOnlyLeftRX;
- (bool)hasOnlyRightRX;
- (bool)hasRightRX;
- (bool)hasSingleLensRX;
- (unsigned int)identifyingColorRGBA;
- (id)initWithVersion:(unsigned long long)arg1 lensType:(unsigned long long)arg2 cylLeftSignFlipped:(bool)arg3 cylRightSignFlipped:(bool)arg4 leftRXID:(unsigned long long)arg5 leftCalibrationRXID:(unsigned long long)arg6 leftDisplaySphere:(float)arg7 leftDisplayCylinder:(float)arg8 leftCalibrationSphere:(float)arg9 leftCalibrationCylinder:(float)arg10 leftAddVR:(float)arg11 leftAxisID:(unsigned long long)arg12 leftDisplayAxis:(unsigned long long)arg13 leftCalibrationAxis:(unsigned long long)arg14 rightRXID:(unsigned long long)arg15 rightCalibrationRXID:(unsigned long long)arg16 rightDisplaySphere:(float)arg17 rightDisplayCylinder:(float)arg18 rightCalibrationSphere:(float)arg19 rightCalibrationCylinder:(float)arg20 rightAddVR:(float)arg21 rightAxisID:(unsigned long long)arg22 rightDisplayAxis:(unsigned long long)arg23 rightCalibrationAxis:(unsigned long long)arg24 identifyingColor:(unsigned int)arg25 secret:(id)arg26;
- (bool)isLeftRXOutsideSupportedRange;
- (bool)isRightRXOutsideSupportedRange;
- (float)leftAddVR;
- (unsigned long long)leftAxisID;
- (unsigned long long)leftCalibrationAxis;
- (float)leftCalibrationCylinder;
- (unsigned long long)leftCalibrationRXID;
- (float)leftCalibrationSphere;
- (unsigned long long)leftDisplayAxis;
- (float)leftDisplayCylinder;
- (float)leftDisplaySphere;
- (unsigned long long)leftRXID;
- (unsigned long long)lensType;
- (float)rightAddVR;
- (unsigned long long)rightAxisID;
- (unsigned long long)rightCalibrationAxis;
- (float)rightCalibrationCylinder;
- (unsigned long long)rightCalibrationRXID;
- (float)rightCalibrationSphere;
- (unsigned long long)rightDisplayAxis;
- (float)rightDisplayCylinder;
- (float)rightDisplaySphere;
- (unsigned long long)rightRXID;
- (id)secret;
- (unsigned long long)version;

@end