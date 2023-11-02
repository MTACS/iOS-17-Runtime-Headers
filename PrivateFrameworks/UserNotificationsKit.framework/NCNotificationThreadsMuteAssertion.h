
@interface NCNotificationThreadsMuteAssertion : NSObject <BSDescriptionProviding, NCNotificationMuteAssertion> {
    NSSet * _mutedThreadIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)threadsMuteAssertionWithMutedThreadIDs:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithMutedThreadIDs:(id)arg1;
- (unsigned long long)activeMuteAssertionLevelForThreadIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
