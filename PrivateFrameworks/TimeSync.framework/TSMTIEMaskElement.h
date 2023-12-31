
@interface TSMTIEMaskElement : NSObject <NSCopying> {
    double  _a;
    double  _b;
    double  _lowerLimit;
    double  _upperLimit;
}

@property (nonatomic, readonly) double a;
@property (nonatomic, readonly) double b;
@property (nonatomic, readonly) double lowerLimit;
@property (nonatomic, readonly) double upperLimit;

- (double)a;
- (double)b;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoefficient:(double)arg1 offset:(double)arg2 lowerLimit:(double)arg3 upperLimit:(double)arg4;
- (id)initWithDictionary:(id)arg1;
- (double)lowerLimit;
- (double)upperLimit;

@end
