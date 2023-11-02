
@interface _UIFieldEditorSystemInputHost : _UIFieldEditorHost {
    UIVisualEffectView * _backgroundEffectView;
    _UIFieldEditorSystemInputHostView * _containerView;
    UISystemInputViewController * _systemInputViewController;
}

@property (nonatomic, readonly) UISystemInputViewController *_systemInputViewController;

- (void).cxx_destruct;
- (bool)_isTV;
- (id)_systemInputViewController;
- (void)_updateFieldEditorBackgroundViewLayoutForcingDefault:(bool)arg1;
- (id)_viewForHostingFieldEditor;
- (void)addFieldEditor:(id)arg1;
- (void)addPlaceholderLabel:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)layoutIfNeeded;
- (void)removeFieldEditor;

@end
