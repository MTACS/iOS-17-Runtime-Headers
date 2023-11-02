
@interface ADDynamicPolynomialsLensDistortionModel : ADPolynomialsLensDistortionModel {
    float  _dynamicFactor;
    struct ADDistortionPolynomials { 
        float forwardOrders[8]; 
        float inverseOrders[8]; 
    }  _polynomialsBase;
    struct ADDistortionPolynomials { 
        float forwardOrders[8]; 
        float inverseOrders[8]; 
    }  _polynomialsDynamic;
}

@property (nonatomic) const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*distortionPolynomialsBase;
@property (nonatomic) const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*distortionPolynomialsDynamic;
@property (nonatomic) float dynamicFactor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)distortionPolynomialsBase;
- (const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)distortionPolynomialsDynamic;
- (float)dynamicFactor;
- (unsigned long long)hash;
- (id)initWithDistortionCenter:(struct CGPoint { double x1; double x2; })arg1 dynFactor:(float)arg2 polynomialsBase:(const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)arg3 polynomialsDynamic:(const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)arg4;
- (bool)isEqual:(id)arg1;
- (void)setDistortionPolynomials:(const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)arg1;
- (void)setDistortionPolynomialsBase:(const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)arg1;
- (void)setDistortionPolynomialsDynamic:(const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)arg1;
- (void)setDynamicFactor:(float)arg1;
- (void)updatePolynomials;

@end
