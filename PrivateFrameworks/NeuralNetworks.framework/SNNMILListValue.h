
@interface SNNMILListValue : SNNMILValue {
    NSArray * _values;
}

@property (nonatomic, readonly) NSArray *values;

- (void).cxx_destruct;
- (id)initWithValues:(id)arg1;
- (id)values;

@end
