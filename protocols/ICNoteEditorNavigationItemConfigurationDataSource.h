
@protocol ICNoteEditorNavigationItemConfigurationDataSource <NSObject>

@required

- (NSString *)noteEditorNavigationItemConfigurationChecklistAccessibilityValue:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (UIBarButtonItem *)noteEditorNavigationItemConfigurationCollaborationBarButtonItem:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (UIToolbar *)noteEditorNavigationItemConfigurationInputAccessoryToolbar:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (UITextInputAssistantItem *)noteEditorNavigationItemConfigurationInputAssistantItem:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (UIView *)noteEditorNavigationItemConfigurationPresentingSourceView:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (UIViewController *)noteEditorNavigationItemConfigurationPresentingViewController:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (UIWindowScene *)noteEditorNavigationItemConfigurationPresentingWindowScene:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (ICStyleSelectorViewController *)noteEditorNavigationItemConfigurationStyleSelectorViewController:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (ICTableAttachmentViewController *)noteEditorNavigationItemConfigurationTableAttachmentViewController:(ICNoteEditorNavigationItemConfiguration *)arg1;
- (UIToolbar *)noteEditorNavigationItemConfigurationToolbar:(ICNoteEditorNavigationItemConfiguration *)arg1;

@end
