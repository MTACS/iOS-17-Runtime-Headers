
@interface MOEffectiveBool : NSObject {
    bool  _defaultValue;
    bool  _value;
}

@property (readonly) bool defaultValue;
@property (readonly) bool value;

- (bool)defaultValue;
- (id)initWithValue:(bool)arg1 defaultValue:(bool)arg2;
- (bool)value;

@end
