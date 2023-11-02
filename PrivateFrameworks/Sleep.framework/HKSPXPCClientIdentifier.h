
@interface HKSPXPCClientIdentifier : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    NSString * _loggingIdentifier;
    NSUUID * _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *loggingIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 loggingIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)loggingIdentifier;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uniqueIdentifier;

@end
