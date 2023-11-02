
@interface CLEmergencyLocationUsabilityCriteria : NSObject {
    bool  _altitudeStitchingEnabled;
    double  _maxUsableAge;
    double  _maxUsableHunc;
    double  _maxUsableVunc;
    unsigned int  _minUsableIntegrity;
    bool  _vuncCheckRequiredForUsability;
}

@property (nonatomic) bool altitudeStitchingEnabled;
@property (nonatomic) double maxUsableAge;
@property (nonatomic) double maxUsableHunc;
@property (nonatomic) double maxUsableVunc;
@property (nonatomic) unsigned int minUsableIntegrity;
@property (nonatomic) bool vuncCheckRequiredForUsability;

- (bool)altitudeStitchingEnabled;
- (id)init;
- (double)maxUsableAge;
- (double)maxUsableHunc;
- (double)maxUsableVunc;
- (unsigned int)minUsableIntegrity;
- (void)printUsabilityCriteria:(id)arg1;
- (void)setAltitudeStitchingEnabled:(bool)arg1;
- (void)setMaxUsableAge:(double)arg1;
- (void)setMaxUsableHunc:(double)arg1;
- (void)setMaxUsableVunc:(double)arg1;
- (void)setMinUsableIntegrity:(unsigned int)arg1;
- (void)setVuncCheckRequiredForUsability:(bool)arg1;
- (bool)vuncCheckRequiredForUsability;

@end
