
@interface CMStrideCalibrationHistory : NSObject <NSCopying, NSSecureCoding, SRSampling> {
    NSArray * _calibrationTracks;
    NSArray * _rawSpeedToKValueBins;
    NSArray * _stepCadenceToStrideLengthBins;
}

@property (nonatomic, retain) NSArray *calibrationTracks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *rawSpeedToKValueBins;
@property (nonatomic, retain) NSArray *stepCadenceToStrideLengthBins;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)binarySampleRepresentation;
- (id)calibrationTracks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCalibrationTracks:(id)arg1 rawSpeedToKValueBins:(id)arg2 stepCadenceToStrideLengthBins:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)rawSpeedToKValueBins;
- (void)setCalibrationTracks:(id)arg1;
- (void)setRawSpeedToKValueBins:(id)arg1;
- (void)setStepCadenceToStrideLengthBins:(id)arg1;
- (id)stepCadenceToStrideLengthBins;

@end
