
@interface PHASENumericPair : NSObject {
    double  _first;
    double  _second;
}

@property (nonatomic) double first;
@property (nonatomic) double second;

- (double)first;
- (id)init;
- (id)initWithFirstValue:(double)arg1 secondValue:(double)arg2;
- (double)second;
- (void)setFirst:(double)arg1;
- (void)setSecond:(double)arg1;

@end
