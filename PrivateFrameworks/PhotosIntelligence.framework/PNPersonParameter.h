
@interface PNPersonParameter : NSObject {
    double  _endValue;
    double  _incrementValue;
    NSString * _name;
    double  _startValue;
}

@property (nonatomic) double endValue;
@property (nonatomic) double incrementValue;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) double startValue;

- (void).cxx_destruct;
- (id)description;
- (double)endValue;
- (double)incrementValue;
- (id)init;
- (bool)isValid;
- (id)name;
- (void)setEndValue:(double)arg1;
- (void)setIncrementValue:(double)arg1;
- (void)setName:(id)arg1;
- (void)setStartValue:(double)arg1;
- (double)startValue;

@end
