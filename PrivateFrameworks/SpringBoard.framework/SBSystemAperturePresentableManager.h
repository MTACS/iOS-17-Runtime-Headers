
@interface SBSystemAperturePresentableManager : NSObject <SAUILayoutObserving, SBPresentableIntercepting> {
    SBSystemApertureController * _elementRegistrar;
    NSHashTable * _elementsThatDidAppear;
    NSMapTable * _elementsToAssertions;
    NSMapTable * _presentablesToElements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBSystemApertureController *elementRegistrar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_elementForPresentableCreatingIfNecessary:(id)arg1 elementGenerator:(id /* block */)arg2;
- (id)_existingAssertionForElement:(id)arg1;
- (id)_existingElementForPresentableWithIdentification:(id)arg1;
- (id)_existingPresentableWithIdentification:(id)arg1;
- (id)_existingPresentablesWithIdentification:(id)arg1;
- (void)_invalidateElement:(id)arg1 withReason:(id)arg2;
- (void)_noteElementDidAppear:(id)arg1;
- (void)_noteElementDidDisappear:(id)arg1 reason:(id)arg2;
- (void)_noteElementDidInvalidate:(id)arg1 reason:(id)arg2;
- (id)_presentableElementForElementLayoutSpecifier:(id)arg1;
- (void)_registerElement:(id)arg1;
- (void)_removeAssertionForElement:(id)arg1;
- (void)_removeElementForPresentableWithIdentification:(id)arg1;
- (void)_removePresentableForElement:(id)arg1;
- (void)_sync_registerAssertion:(id)arg1 forElement:(id)arg2;
- (void)elementLayoutSpecifier:(id)arg1 layoutModeDidChange:(long long)arg2 reason:(long long)arg3;
- (id)elementRegistrar;
- (id)initWithElementRegistrar:(id)arg1;
- (id)revocationRequestedForPresentablesWithIdentification:(id)arg1 reason:(id)arg2;
- (bool)willInterceptPresentable:(id)arg1 userInfo:(id)arg2;

@end
