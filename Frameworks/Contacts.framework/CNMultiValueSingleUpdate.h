
@interface CNMultiValueSingleUpdate : CNMultiValueUpdate {
    CNLabeledValue * _value;
}

@property (nonatomic, readonly) CNLabeledValue *value;

- (void).cxx_destruct;
- (id)description;
- (id)initWithValue:(id)arg1;
- (id)value;

@end
