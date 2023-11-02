
@protocol ICNoteEditorNavigationItemConfigurationDelegate <NSObject>

@required

- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 addChecklistFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 addNoteFromBarButtonItem:(UIBarButtonItem *)arg2 event:(UIEvent *)arg3;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 addTableFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 changeStyleFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 closeAuxiliaryWindowFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 deleteFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 didCompleteAnimationFromInlineSketchBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 doneEditingFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 inlineSketchFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 insertMediaWithSourceType:(unsigned long long)arg2 mediaBarButtonItem:(UIBarButtonItem *)arg3;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 insertSidecarItemWithMenuItems:(NSArray *)arg2 service:(long long)arg3 mediaBarButtonItem:(UIBarButtonItem *)arg4;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 moveFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 quickNoteDidCancelFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 quickNoteDidSaveFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 quickNoteShowAllNotesFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 redoFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 shareFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 showPhotoLibraryFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 startEditingFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 toggleLockFromBarButtonItem:(UIBarButtonItem *)arg2;
- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 undoFromBarButtonItem:(UIBarButtonItem *)arg2;

@optional

- (void)noteEditorNavigationItemConfiguration:(ICNoteEditorNavigationItemConfiguration *)arg1 updateSidecarMenuFromMediaBarButtonItem:(UIBarButtonItem *)arg2;

@end
