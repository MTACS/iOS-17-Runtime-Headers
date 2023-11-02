
@interface _HKSPObjectProperty : HKSPProperty {
    NSArray * _expectedValueClasses;
}

@property (nonatomic, readonly) NSArray *expectedValueClasses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedInnerClassesForSecureCoding;
- (void)copyValueFromObject:(id)arg1 toObject:(id)arg2;
- (void)decodeValueForObject:(id)arg1 fromCoder:(id)arg2;
- (void)encodeValueForObject:(id)arg1 fromCoder:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedValueClasses;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 propertyName:(id)arg2 expectedValueClass:(Class)arg3;
- (id)initWithIdentifier:(id)arg1 propertyName:(id)arg2 expectedValueClasses:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
