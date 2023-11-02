
@interface FxVector : NSObject {
    unsigned long long  _count;
    union { 
        double vec[4]; 
        double *ptr; 
    }  _u;
}

+ (id)vectorWithCIVector:(id)arg1;
+ (id)vectorWithString:(id)arg1;
+ (id)vectorWithValues:(const double*)arg1 count:(unsigned long long)arg2;
+ (id)vectorWithX:(double)arg1;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4;

- (double)W;
- (double)X;
- (double)Y;
- (double)Z;
- (id)ciVector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCIVector:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithValues:(const double*)arg1 count:(unsigned long long)arg2;
- (id)initWithX:(double)arg1;
- (id)initWithX:(double)arg1 Y:(double)arg2;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4;
- (id)stringRepresentation;
- (double)valueAtIndex:(unsigned long long)arg1;

@end
