
@interface _UIFieldEditorHost : NSObject {
    UIFieldEditor * _hostedFieldEditor;
    UIView<_UIFieldEditorHostingViewRequirements> * _hostingView;
}

@property (nonatomic, readonly) UIFieldEditor *hostedFieldEditor;
@property (getter=isHostingFieldEditor, nonatomic, readonly) bool hostingFieldEditor;
@property (nonatomic, readonly) UIView<_UIFieldEditorHostingViewRequirements> *hostingView;

+ (id)fieldEditorHostForTextField:(id)arg1;

- (void).cxx_destruct;
- (id)_viewForHostingFieldEditor;
- (void)addFieldEditor:(id)arg1;
- (void)addPlaceholderLabel:(id)arg1;
- (id)description;
- (id)hostedFieldEditor;
- (id)hostingView;
- (id)initWithHostingView:(id)arg1;
- (bool)isHostingFieldEditor;
- (void)layoutIfNeeded;
- (void)removeFieldEditor;

@end
