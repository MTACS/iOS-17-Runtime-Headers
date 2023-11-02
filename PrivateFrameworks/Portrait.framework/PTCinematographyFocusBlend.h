
@interface PTCinematographyFocusBlend : NSObject {
    float  _primaryFocusCoefficient;
    PTCinematographyDetection * _primaryFocusDetection;
    float  _secondaryFocusCoefficient;
    PTCinematographyDetection * _secondaryFocusDetection;
}

@property (nonatomic, readonly) float primaryFocusCoefficient;
@property (nonatomic, readonly) PTCinematographyDetection *primaryFocusDetection;
@property (nonatomic, readonly) float secondaryFocusCoefficient;
@property (nonatomic, readonly) PTCinematographyDetection *secondaryFocusDetection;

- (void).cxx_destruct;
- (id)_asCinematographyDictionary;
- (id)_asCoefficientsDictionary;
- (id)_initWithDetections:(id)arg1 cinematographyDictionary:(id)arg2;
- (id)_initWithDetections:(id)arg1 coefficients:(id)arg2;
- (id)_initWithDetections:(id)arg1 coefficientsDictionary:(id)arg2;
- (void)_setFocusBetweenDetection:(id)arg1 detection:(id)arg2 coefficient:(float)arg3;
- (void)_setFocusOnDetection:(id)arg1;
- (void)_setFocusOnPrimaryDetection:(id)arg1 secondaryDetection:(id)arg2 primaryCoefficient:(float)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initFocusedBetweenDetection:(id)arg1 detection:(id)arg2 coefficient:(float)arg3;
- (id)initFocusedOnDetection:(id)arg1;
- (id)initWithPrimaryDetection:(id)arg1 secondaryDetection:(id)arg2 primaryCoefficient:(float)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float)primaryFocusCoefficient;
- (id)primaryFocusDetection;
- (float)secondaryFocusCoefficient;
- (id)secondaryFocusDetection;

@end
