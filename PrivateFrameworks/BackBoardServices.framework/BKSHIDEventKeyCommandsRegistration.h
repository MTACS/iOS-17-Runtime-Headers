
@interface BKSHIDEventKeyCommandsRegistration : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding> {
    BKSHIDEventDeferringEnvironment * _environment;
    NSSet * _keyCommands;
    BKSHIDEventDeferringToken * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (nonatomic, readonly, copy) BKSHIDEventDeferringToken *deferringToken;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *keyCommands;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithEnvironment:(id)arg1 token:(id)arg2 keyCommands:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)deferringEnvironment;
- (id)deferringToken;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyCommands;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
