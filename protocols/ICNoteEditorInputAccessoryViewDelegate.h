
@protocol ICNoteEditorInputAccessoryViewDelegate <NSObject>

@optional

- (void)inputAccessoryDisclosureStateDidChange:(ICNoteEditorInputAccessoryView *)arg1 tapped:(bool)arg2;
- (void)inputAccessoryDisclosureStateWillChange:(ICNoteEditorInputAccessoryView *)arg1;

@end
