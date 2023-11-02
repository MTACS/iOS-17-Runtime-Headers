
@interface FBSDisplayLayoutTransitionContext : NSObject <BSDescriptionProviding, BSXPCCoding> {
    NSOrderedSet * _transitionReasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *transitionReason;
@property (nonatomic, readonly, copy) NSSet *transitionReasons;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setTransitionReasons:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)transitionReason;
- (id)transitionReasons;

@end
