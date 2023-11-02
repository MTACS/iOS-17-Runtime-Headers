
@interface MOEffectiveData : NSObject {
    NSData * _defaultValue;
    NSData * _value;
}

@property (readonly) NSData *defaultValue;
@property (readonly) NSData *value;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)initWithValue:(id)arg1 defaultValue:(id)arg2;
- (id)value;

@end
