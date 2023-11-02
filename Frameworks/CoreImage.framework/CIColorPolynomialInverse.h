
@interface CIColorPolynomialInverse : CIColorPolynomial

+ (id)customAttributes;

- (bool)_isInvertible;
- (id)_kernel;
- (id)_kernelRGB;
- (id)outputImage;

@end
