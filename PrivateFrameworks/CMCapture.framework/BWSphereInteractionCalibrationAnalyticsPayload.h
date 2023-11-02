
@interface BWSphereInteractionCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    unsigned int  _calibrationStatus;
    long long  _magneticFieldMagnitude;
    NSString * _portType;
    int  _sphereMacroPosition;
    int  _sphereMacroPositionError;
    int  _sphereNeutralPosition;
    int  _sphereNeutralPositionError;
}

@property (nonatomic) unsigned int calibrationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long magneticFieldMagnitude;
@property (nonatomic, retain) NSString *portType;
@property (nonatomic) int sphereMacroPosition;
@property (nonatomic) int sphereMacroPositionError;
@property (nonatomic) int sphereNeutralPosition;
@property (nonatomic) int sphereNeutralPositionError;
@property (readonly) Class superclass;

- (unsigned int)calibrationStatus;
- (void)dealloc;
- (id)eventDictionary;
- (id)eventName;
- (id)init;
- (long long)magneticFieldMagnitude;
- (id)portType;
- (void)reset;
- (void)setCalibrationStatus:(unsigned int)arg1;
- (void)setMagneticFieldMagnitude:(long long)arg1;
- (void)setPortType:(id)arg1;
- (void)setSphereMacroPosition:(int)arg1;
- (void)setSphereMacroPositionError:(int)arg1;
- (void)setSphereNeutralPosition:(int)arg1;
- (void)setSphereNeutralPositionError:(int)arg1;
- (int)sphereMacroPosition;
- (int)sphereMacroPositionError;
- (int)sphereNeutralPosition;
- (int)sphereNeutralPositionError;

@end
