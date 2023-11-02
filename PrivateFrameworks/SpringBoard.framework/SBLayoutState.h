
@interface SBLayoutState : NSObject <BSDescriptionProviding> {
    NSSet * _elements;
    long long  _interfaceOrientation;
    NSDictionary * _interfaceOrientationByLayoutElementIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *elements;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, copy) NSDictionary *interfaceOrientationByLayoutElementIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_defaultInterfaceOrientation;
- (id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 interfaceOrientationByLayoutElement:(id)arg3;
- (long long)_interfaceOrientationForElementIdentifier:(id)arg1 unknownAllowed:(bool)arg2;
- (id)appLayout;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)elementWithIdentifier:(id)arg1;
- (id)elementWithRole:(long long)arg1;
- (id)elements;
- (id)floatingAppLayout;
- (unsigned long long)hash;
- (id)init;
- (long long)interfaceOrientation;
- (id)interfaceOrientationByLayoutElementIdentifier;
- (long long)interfaceOrientationForElementIdentifier:(id)arg1;
- (long long)interfaceOrientationForLayoutElement:(id)arg1;
- (long long)interfaceOrientationForLayoutElement:(id)arg1 unknownAllowed:(bool)arg2;
- (long long)interfaceOrientationForLayoutRole:(long long)arg1;
- (void)invalidateAppLayout;
- (void)invalidateFloatingAppLayout;
- (bool)isEqual:(id)arg1;
- (bool)isEqual:(id)arg1 withRole:(long long)arg2;
- (bool)isMeaningfullyDifferentFromLayoutState:(id)arg1;
- (bool)layoutContainsRole:(long long)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setInterfaceOrientationByLayoutElementIdentifier:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
