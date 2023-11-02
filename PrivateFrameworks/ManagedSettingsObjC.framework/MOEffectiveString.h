
@interface MOEffectiveString : NSObject {
    NSString * _defaultValue;
    NSString * _value;
}

@property (readonly) NSString *defaultValue;
@property (readonly) NSString *value;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)initWithValue:(id)arg1 defaultValue:(id)arg2;
- (id)value;

@end
