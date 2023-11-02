
@interface PHASESphericalCapDirectivityModelParameters : PHASEDirectivityModelParameters {
    double  _capOpeningAngle;
    double  _sphereRadius;
}

@property (nonatomic) double capOpeningAngle;
@property (nonatomic) double sphereRadius;

- (double)capOpeningAngle;
- (id)init;
- (void)setCapOpeningAngle:(double)arg1;
- (void)setSphereRadius:(double)arg1;
- (double)sphereRadius;

@end
