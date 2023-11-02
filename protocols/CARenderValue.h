
@protocol CARenderValue <NSObject>

@optional

- (unsigned long long)CA_copyNumericValue:(double*)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3 : 8; unsigned int x4 : 24; }*)CA_copyRenderValue;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3 : 8; unsigned int x4 : 24; }*)CA_copyRenderValueWithColorspace:(struct CGColorSpace { }*)arg1;
- (unsigned long long)CA_numericValueCount;
- (void)CA_prepareRenderValue;

@end
