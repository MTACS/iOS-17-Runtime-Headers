
@interface PLPropertyValidationRule : NSObject {
    <NSObject> * _expectedValue;
    <NSObject> * _expectedValueRangeHigh;
    <NSObject> * _expectedValueRangeLow;
    NSArray * _expectedValues;
    NSString * _keyPath;
    long long  _type;
}

@property (nonatomic, retain) <NSObject> *expectedValue;
@property (nonatomic, retain) <NSObject> *expectedValueRangeHigh;
@property (nonatomic, retain) <NSObject> *expectedValueRangeLow;
@property (nonatomic, retain) NSArray *expectedValues;
@property (nonatomic, copy) NSString *keyPath;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)currentValuesOfObject:(id)arg1;
- (id)descriptionOfCurrentValuesOfObject:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 outMessage:(id*)arg2;
- (id)expectedValue;
- (id)expectedValueRangeHigh;
- (id)expectedValueRangeLow;
- (id)expectedValues;
- (id)keyPath;
- (id)keyPaths;
- (id)predicate;
- (id)reverseRule;
- (void)setExpectedValue:(id)arg1;
- (void)setExpectedValueRangeHigh:(id)arg1;
- (void)setExpectedValueRangeLow:(id)arg1;
- (void)setExpectedValues:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
