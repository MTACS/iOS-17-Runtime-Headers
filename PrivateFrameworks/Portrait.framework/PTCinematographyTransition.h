
@interface PTCinematographyTransition : NSObject {
    unsigned long long  _kind;
}

@property (nonatomic) unsigned long long kind;

- (float)coefficientForNormalizedTime:(float)arg1;
- (id)initWithKind:(unsigned long long)arg1;
- (unsigned long long)kind;
- (float)linearCoefficientForNormalizedTime:(float)arg1;
- (void)setKind:(unsigned long long)arg1;

@end
