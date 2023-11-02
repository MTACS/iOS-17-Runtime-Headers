
@interface MOEffectiveOptionalApplication : NSObject {
    MOApplication * _defaultValue;
    MOApplication * _value;
}

@property (readonly) MOApplication *defaultValue;
@property (readonly) MOApplication *value;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)initWithValue:(id)arg1 defaultValue:(id)arg2;
- (id)value;

@end
