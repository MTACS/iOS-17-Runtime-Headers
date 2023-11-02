
@interface _UIPrototypingValue : NSObject {
    NSValue * _currentValue;
    NSValue * _defaultValue;
    NSValue * _maximumValue;
    NSValue * _minimumValue;
    NSString * _name;
    double  _stepSize;
    long long  _type;
}

@property (nonatomic, retain) NSValue *currentValue;
@property (nonatomic, retain) NSValue *defaultValue;
@property (nonatomic, retain) NSValue *maximumValue;
@property (nonatomic, retain) NSValue *minimumValue;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double stepSize;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)currentValue;
- (id)defaultValue;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)maximumValue;
- (id)minimumValue;
- (id)name;
- (void)setCurrentValue:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStepSize:(double)arg1;
- (void)setType:(long long)arg1;
- (double)stepSize;
- (long long)type;

@end
