
@interface BKSHIDEventKeyCommandsDispatchingPredicate : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSSet * _senderDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *displays;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *senderDescriptors;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSenderDescriptors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displays;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)senderDescriptors;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
