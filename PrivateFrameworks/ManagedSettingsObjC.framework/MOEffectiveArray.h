
@interface MOEffectiveArray : NSObject {
    NSArray * _defaultValue;
    NSArray * _value;
}

@property (readonly) NSArray *defaultValue;
@property (readonly) NSArray *value;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)initWithValue:(id)arg1 defaultValue:(id)arg2;
- (id)value;

@end
