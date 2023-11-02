
@interface HKSPChange : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    <NSObject><NSSecureCoding><NSCopying> * _changedValue;
    <NSObject><NSSecureCoding><NSCopying> * _originalValue;
    HKSPProperty * _property;
}

@property (nonatomic, readonly) <NSObject><NSSecureCoding><NSCopying> *changedValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSObject><NSSecureCoding><NSCopying> *originalValue;
@property (nonatomic, readonly, copy) HKSPProperty *property;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)changedValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deepCopy;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1 changedValue:(id)arg2 originalValue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)originalValue;
- (id)property;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
