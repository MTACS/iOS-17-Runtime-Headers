
@interface _UIPhysicalButtonBehaviorOptions : NSObject <BSDebugDescriptionProviding, BSXPCCoding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    unsigned long long  _behavior;
}

@property (nonatomic, readonly) unsigned long long _behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)behaviorOptions;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (unsigned long long)_behavior;
- (id)_initWithBehavior:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
