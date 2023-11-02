
@interface UIWindowSceneActivationAction : UIAction {
    UIAction * __alternateAction;
    id /* block */  __configurationProvider;
    <_UIWindowSceneActivator> * __preferredActivator;
}

@property (setter=_setAlternateAction:, nonatomic, copy) UIAction *_alternateAction;
@property (setter=_setConfigurationProvider:, nonatomic, copy) id /* block */ _configurationProvider;
@property (nonatomic) <_UIWindowSceneActivator> *_preferredActivator;
@property (nonatomic, copy) NSString *title;

+ (id)_defaultImage;
+ (id)_defaultTitle;
+ (id)actionWithHandler:(id /* block */)arg1;
+ (id)actionWithIdentifier:(id)arg1 alternateAction:(id)arg2 configurationProvider:(id /* block */)arg3;
+ (id)actionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 handler:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)_alternateAction;
- (id /* block */)_configurationProvider;
- (id)_immutableCopy;
- (id)_preferredActivator;
- (void)_requestSceneActivation;
- (void)_setAlternateAction:(id)arg1;
- (void)_setConfigurationProvider:(id /* block */)arg1;
- (void)_willBePreparedForInitialDisplay:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 discoverabilityTitle:(id)arg4 attributes:(unsigned long long)arg5 alternateAction:(id)arg6 configurationProvider:(id /* block */)arg7;
- (id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 discoverabilityTitle:(id)arg4 attributes:(unsigned long long)arg5 state:(long long)arg6 handler:(id /* block */)arg7;
- (bool)keepsMenuPresented;
- (void)setTitle:(id)arg1;
- (void)set_preferredActivator:(id)arg1;

@end
