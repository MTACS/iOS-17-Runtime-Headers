
@interface PHASEGeometricSpreadingDistanceModelParameters : PHASEDistanceModelParameters {
    double  _rolloffFactor;
}

@property (nonatomic) double rolloffFactor;

- (id)init;
- (double)rolloffFactor;
- (void)setRolloffFactor:(double)arg1;

@end
