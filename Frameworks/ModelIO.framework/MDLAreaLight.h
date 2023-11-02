
@interface MDLAreaLight : MDLPhysicallyPlausibleLight {
    float  _areaRadius;
    float  _aspect;
    void _superEllipticPower;
}

@property (nonatomic) float areaRadius;
@property (nonatomic) float aspect;
@property (nonatomic) void superEllipticPower;

- (float)areaRadius;
- (float)aspect;
- (id)init;
- (void)setAreaRadius:(float)arg1;
- (void)setAspect:(float)arg1;
- (void)setSuperEllipticPower;
- (void)superEllipticPower;

@end
