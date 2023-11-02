
@interface BWSphereResonanceCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    unsigned int  _calibrationStatus;
    int  _deltaSphereXAxisDampingCoefficient;
    int  _deltaSphereXAxisResonantFrequency;
    int  _deltaSphereYAxisDampingCoefficient;
    int  _deltaSphereYAxisResonantFrequency;
    long long  _magneticFieldMagnitude;
    NSString * _portType;
    int  _sphereXAxisDampingCoefficient;
    int  _sphereXAxisLoopGain;
    int  _sphereXAxisResonantFrequency;
    int  _sphereYAxisDampingCoefficient;
    int  _sphereYAxisLoopGain;
    int  _sphereYAxisResonantFrequency;
}

@property (nonatomic) unsigned int calibrationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int deltaSphereXAxisDampingCoefficient;
@property (nonatomic) int deltaSphereXAxisResonantFrequency;
@property (nonatomic) int deltaSphereYAxisDampingCoefficient;
@property (nonatomic) int deltaSphereYAxisResonantFrequency;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long magneticFieldMagnitude;
@property (nonatomic, copy) NSString *portType;
@property (nonatomic) int sphereXAxisDampingCoefficient;
@property (nonatomic) int sphereXAxisLoopGain;
@property (nonatomic) int sphereXAxisResonantFrequency;
@property (nonatomic) int sphereYAxisDampingCoefficient;
@property (nonatomic) int sphereYAxisLoopGain;
@property (nonatomic) int sphereYAxisResonantFrequency;
@property (readonly) Class superclass;

- (unsigned int)calibrationStatus;
- (void)dealloc;
- (int)deltaSphereXAxisDampingCoefficient;
- (int)deltaSphereXAxisResonantFrequency;
- (int)deltaSphereYAxisDampingCoefficient;
- (int)deltaSphereYAxisResonantFrequency;
- (id)eventDictionary;
- (id)eventName;
- (id)init;
- (long long)magneticFieldMagnitude;
- (id)portType;
- (void)reset;
- (void)setCalibrationStatus:(unsigned int)arg1;
- (void)setDeltaSphereXAxisDampingCoefficient:(int)arg1;
- (void)setDeltaSphereXAxisResonantFrequency:(int)arg1;
- (void)setDeltaSphereYAxisDampingCoefficient:(int)arg1;
- (void)setDeltaSphereYAxisResonantFrequency:(int)arg1;
- (void)setMagneticFieldMagnitude:(long long)arg1;
- (void)setPortType:(id)arg1;
- (void)setSphereXAxisDampingCoefficient:(int)arg1;
- (void)setSphereXAxisLoopGain:(int)arg1;
- (void)setSphereXAxisResonantFrequency:(int)arg1;
- (void)setSphereYAxisDampingCoefficient:(int)arg1;
- (void)setSphereYAxisLoopGain:(int)arg1;
- (void)setSphereYAxisResonantFrequency:(int)arg1;
- (int)sphereXAxisDampingCoefficient;
- (int)sphereXAxisLoopGain;
- (int)sphereXAxisResonantFrequency;
- (int)sphereYAxisDampingCoefficient;
- (int)sphereYAxisLoopGain;
- (int)sphereYAxisResonantFrequency;

@end
