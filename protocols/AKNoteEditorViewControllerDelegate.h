
@protocol AKNoteEditorViewControllerDelegate <NSObject>

@required

- (void)noteEditorViewControllerDidBeginEditing:(AKNoteEditorViewController *)arg1;
- (void)noteEditorViewControllerDidEndEditing:(AKNoteEditorViewController *)arg1;

@end
