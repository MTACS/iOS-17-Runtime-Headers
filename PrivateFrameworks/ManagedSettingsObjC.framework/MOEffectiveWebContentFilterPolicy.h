
@interface MOEffectiveWebContentFilterPolicy : NSObject {
    MOWebContentFilterPolicy * _defaultValue;
    MOWebContentFilterPolicy * _value;
}

@property (readonly) MOWebContentFilterPolicy *defaultValue;
@property (readonly) MOWebContentFilterPolicy *value;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)initWithValue:(id)arg1 defaultValue:(id)arg2;
- (id)value;

@end
