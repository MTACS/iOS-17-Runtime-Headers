
@interface MOEffectiveCategoryShieldPolicy : NSObject {
    MOCategoryShieldPolicy * _defaultValue;
    MOCategoryShieldPolicy * _value;
}

@property (readonly) MOCategoryShieldPolicy *defaultValue;
@property (readonly) MOCategoryShieldPolicy *value;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)initWithValue:(id)arg1 defaultValue:(id)arg2;
- (id)value;

@end
