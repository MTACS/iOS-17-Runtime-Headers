
@interface HKSPProperty : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _propertyName;
}

@property (nonatomic, readonly) NSArray *allowedInnerClassesForSecureCoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isRelationshipProperty;
@property (nonatomic, readonly, copy) NSString *propertyName;
@property (readonly) Class superclass;

+ (id)allowedSubclassesForSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedInnerClassesForSecureCoding;
- (void)copyValueFromObject:(id)arg1 toObject:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)decodeValueForObject:(id)arg1 fromCoder:(id)arg2;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeValueForObject:(id)arg1 fromCoder:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 propertyName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isRelationshipProperty;
- (id)propertyName;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
