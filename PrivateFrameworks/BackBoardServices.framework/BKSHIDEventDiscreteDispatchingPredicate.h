
@interface BKSHIDEventDiscreteDispatchingPredicate : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSSet * _descriptors;
    NSSet * _senderDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *descriptors;
@property (nonatomic, readonly, copy) NSSet *displays;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *senderDescriptors;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSourceDescriptors:(id)arg1 descriptors:(id)arg2;
- (bool)containsDescriptor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)descriptors;
- (id)displays;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)senderDescriptors;
- (bool)specifiesDescriptor:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
