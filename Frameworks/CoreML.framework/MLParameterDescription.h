
@interface MLParameterDescription : NSObject <NSSecureCoding> {
    id  _defaultValue;
    MLParameterKey * _key;
    MLNumericConstraint * _numericConstraint;
}

@property (nonatomic, retain) id defaultValue;
@property (nonatomic, retain) MLParameterKey *key;
@property (nonatomic, retain) MLNumericConstraint *numericConstraint;

+ (id)parameterDescriptionForKey:(id)arg1 boolParameterSpec:(const void*)arg2;
+ (id)parameterDescriptionForKey:(id)arg1 defaultValue:(id)arg2 numericConstraint:(id)arg3;
+ (id)parameterDescriptionForKey:(id)arg1 doubleParameterSpec:(const void*)arg2;
+ (id)parameterDescriptionForKey:(id)arg1 int64ParameterSpec:(const void*)arg2;
+ (id)parameterDescriptionForKey:(id)arg1 stringParameterSpec:(const void*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)numericConstraint;
- (void)setDefaultValue:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setNumericConstraint:(id)arg1;

@end
