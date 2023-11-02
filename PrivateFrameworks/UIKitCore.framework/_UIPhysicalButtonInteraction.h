
@interface _UIPhysicalButtonInteraction : NSObject <BSDebugDescriptionProviding, UIInteraction, _UIPhysicalButtonInteractionDriverReceiving> {
    NSMutableDictionary * _actionsByPhysicalButton;
    <BSInvalidatable> * _arbiterRegistrationToken;
    _UIPhysicalButtonConfigurationSet * _configurationSet;
    <_UIPhysicalButtonInteractionDelegate> * _delegate;
    NSMutableArray * _drivers;
    bool  _enabled;
    unsigned long long  _identifier;
    struct { 
        unsigned int registrationPendingDidMoveToWindow : 1; 
        unsigned int registrationPendingWindowMoveToScene : 1; 
        unsigned int wantsRelaxedVisibilityRequirement : 1; 
        unsigned int wantsSystemShellExclusivePriority : 1; 
    }  _interactionFlags;
    NSString * _name;
    NSMutableArray * _orderedActionsForAllPhysicalButtons;
    UIView * _view;
}

@property (nonatomic, readonly, copy) _UIPhysicalButtonConfigurationSet *_configurationSet;
@property (setter=_setConfigurations:, nonatomic, copy) NSSet *_configurations;
@property (nonatomic, readonly) <_UIPhysicalButtonInteractionDelegate> *_delegate;
@property (nonatomic, readonly, copy) NSArray *_driverClasses;
@property (getter=_isEnabled, setter=_setEnabled:, nonatomic) bool _enabled;
@property (setter=_setIdentifier:, nonatomic) unsigned long long _identifier;
@property (nonatomic, readonly) bool _isProxyInteraction;
@property (setter=_setName:, nonatomic, copy) NSString *_name;
@property (setter=_setWantsRelaxedVisibilityRequirement:, nonatomic) bool _wantsRelaxedVisibilityRequirement;
@property (setter=_setWantsSystemShellExclusivePriority:, nonatomic) bool _wantsSystemShellExclusivePriority;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)_configurationForButton:(unsigned long long)arg1;
- (id)_configurationSet;
- (id)_configurations;
- (id)_delegate;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_driver:(id)arg1 didCreateProposedAction:(id)arg2;
- (id)_driverClasses;
- (unsigned long long)_identifier;
- (bool)_isEnabled;
- (bool)_isProxyInteraction;
- (id)_name;
- (void)_setConfigurations:(id)arg1;
- (void)_setEnabled:(bool)arg1;
- (void)_setIdentifier:(unsigned long long)arg1;
- (void)_setName:(id)arg1;
- (void)_setWantsRelaxedVisibilityRequirement:(bool)arg1;
- (void)_setWantsSystemShellExclusivePriority:(bool)arg1;
- (void)_viewVisibilityDidChange;
- (bool)_wantsRelaxedVisibilityRequirement;
- (bool)_wantsSystemShellExclusivePriority;
- (void)_willMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_windowDidMoveToScene:(id)arg1;
- (void)_windowWillMoveToScene:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (id)init;
- (id)initWithConfigurations:(id)arg1 delegate:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
