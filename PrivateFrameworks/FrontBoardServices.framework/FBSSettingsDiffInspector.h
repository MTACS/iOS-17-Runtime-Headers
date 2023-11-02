
@interface FBSSettingsDiffInspector : NSObject {
    bool  _iteratingObservers;
    BSMutableKeyedSettings * _observerInfo;
    BSMutableSettings * _otherSettingsObserverInfo;
}

- (void).cxx_destruct;
- (void)_observeSettingNamed:(id)arg1 withBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)inspectDiff:(id)arg1 withContext:(void*)arg2;
- (void)observeOtherSetting:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (void)observeProperty:(SEL)arg1 withBlock:(id /* block */)arg2;
- (void)removeAllObservers;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
