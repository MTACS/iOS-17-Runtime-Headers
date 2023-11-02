
@interface TVLALSCalibrationData : NSObject {
    NSNumber * _channels;
    NSNumber * _displayID;
    NSNumber * _normalizationFactor;
    NSArray * _spectrumNom;
    NSNumber * _version;
    NSNumber * _wavelengthEnd;
    NSNumber * _wavelengthStartNIR;
    NSNumber * _wavelengthStartVisible;
    NSNumber * _wavelengthStep;
}

@property (nonatomic, retain) NSNumber *channels;
@property (nonatomic, retain) NSNumber *displayID;
@property (nonatomic, retain) NSNumber *normalizationFactor;
@property (nonatomic, retain) NSArray *spectrumNom;
@property (nonatomic, retain) NSNumber *version;
@property (nonatomic, retain) NSNumber *wavelengthEnd;
@property (nonatomic, retain) NSNumber *wavelengthStartNIR;
@property (nonatomic, retain) NSNumber *wavelengthStartVisible;
@property (nonatomic, retain) NSNumber *wavelengthStep;

+ (id)instanceFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)channels;
- (id)dictionaryRepresentation;
- (id)displayID;
- (id)normalizationFactor;
- (void)setChannels:(id)arg1;
- (void)setDisplayID:(id)arg1;
- (void)setNormalizationFactor:(id)arg1;
- (void)setSpectrumNom:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setWavelengthEnd:(id)arg1;
- (void)setWavelengthStartNIR:(id)arg1;
- (void)setWavelengthStartVisible:(id)arg1;
- (void)setWavelengthStep:(id)arg1;
- (id)spectrumNom;
- (id)version;
- (id)wavelengthEnd;
- (id)wavelengthStartNIR;
- (id)wavelengthStartVisible;
- (id)wavelengthStep;

@end
