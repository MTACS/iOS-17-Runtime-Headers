
@interface BWAFResonanceCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    int  _afAxisDampingCoefficient;
    int  _afAxisResonantFreq;
    int  _afGelModelD1Coefficient;
    int  _afGelModelD2Coefficient;
    int  _afGelModelP1Coefficient;
    int  _afGelModelP2Coefficient;
    int  _afLoopGain;
    unsigned int  _calibrationStatus;
    int  _deltaAFAxisDampingCoefficient;
    int  _deltaAFAxisResonantFreq;
    long long  _magneticFieldMagnitude;
    NSString * _portType;
}

@property (nonatomic) int afAxisDampingCoefficient;
@property (nonatomic) int afAxisResonantFreq;
@property (nonatomic) int afGelModelD1Coefficient;
@property (nonatomic) int afGelModelD2Coefficient;
@property (nonatomic) int afGelModelP1Coefficient;
@property (nonatomic) int afGelModelP2Coefficient;
@property (nonatomic) int afLoopGain;
@property (nonatomic) unsigned int calibrationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int deltaAFAxisDampingCoefficient;
@property (nonatomic) int deltaAFAxisResonantFreq;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long magneticFieldMagnitude;
@property (nonatomic, retain) NSString *portType;
@property (readonly) Class superclass;

- (int)afAxisDampingCoefficient;
- (int)afAxisResonantFreq;
- (int)afGelModelD1Coefficient;
- (int)afGelModelD2Coefficient;
- (int)afGelModelP1Coefficient;
- (int)afGelModelP2Coefficient;
- (int)afLoopGain;
- (unsigned int)calibrationStatus;
- (void)dealloc;
- (int)deltaAFAxisDampingCoefficient;
- (int)deltaAFAxisResonantFreq;
- (id)eventDictionary;
- (id)eventName;
- (id)init;
- (long long)magneticFieldMagnitude;
- (id)portType;
- (void)reset;
- (void)setAfAxisDampingCoefficient:(int)arg1;
- (void)setAfAxisResonantFreq:(int)arg1;
- (void)setAfGelModelD1Coefficient:(int)arg1;
- (void)setAfGelModelD2Coefficient:(int)arg1;
- (void)setAfGelModelP1Coefficient:(int)arg1;
- (void)setAfGelModelP2Coefficient:(int)arg1;
- (void)setAfLoopGain:(int)arg1;
- (void)setCalibrationStatus:(unsigned int)arg1;
- (void)setDeltaAFAxisDampingCoefficient:(int)arg1;
- (void)setDeltaAFAxisResonantFreq:(int)arg1;
- (void)setMagneticFieldMagnitude:(long long)arg1;
- (void)setPortType:(id)arg1;

@end
