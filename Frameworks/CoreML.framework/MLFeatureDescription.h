
@interface MLFeatureDescription : NSObject <NSCopying, NSSecureCoding> {
    MLDictionaryConstraint * _dictionaryConstraintCached;
    MLImageConstraint * _imageConstraintCached;
    MLMultiArrayConstraint * _multiArrayConstraintCached;
    NSString * _name;
    bool  _optional;
    MLSequenceConstraint * _sequenceConstraintCached;
    long long  _type;
    NSDictionary * _valueConstraints;
}

@property (nonatomic, readonly) MLDictionaryConstraint *dictionaryConstraintCached;
@property (nonatomic, readonly) MLImageConstraint *imageConstraintCached;
@property (nonatomic, readonly) MLMultiArrayConstraint *multiArrayConstraintCached;
@property (nonatomic, readonly, copy) NSString *name;
@property (getter=isOptional, nonatomic, readonly) bool optional;
@property (nonatomic, readonly) MLSequenceConstraint *sequenceConstraintCached;
@property (nonatomic, readonly) long long type;
@property (retain) NSDictionary *valueConstraints;

+ (id)featureDescriptionWithName:(id)arg1 type:(long long)arg2 optional:(bool)arg3 constraints:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsValuesWithDescription:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (id)dictionaryConstraint;
- (id)dictionaryConstraintCached;
- (void)encodeWithCoder:(id)arg1;
- (id)imageConstraint;
- (id)imageConstraintCached;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 optional:(bool)arg3 contraints:(id)arg4;
- (bool)isAllowedValue:(id)arg1;
- (bool)isAllowedValue:(id)arg1 error:(id*)arg2;
- (bool)isOptional;
- (id)multiArrayConstraint;
- (id)multiArrayConstraintCached;
- (id)name;
- (id)sequenceConstraint;
- (id)sequenceConstraintCached;
- (void)setValueConstraints:(id)arg1;
- (long long)type;
- (id)valueConstraints;

@end
