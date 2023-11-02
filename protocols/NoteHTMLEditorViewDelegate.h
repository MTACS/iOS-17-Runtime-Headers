
@protocol NoteHTMLEditorViewDelegate <NSObject>

@optional

- (bool)allowsAttachmentsInNoteHTMLEditorView:(NoteHTMLEditorView *)arg1;
- (bool)isNoteManagedForNoteHTMLEditorView:(NoteHTMLEditorView *)arg1;
- (void)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 addAttachmentItemProviders:(NSArray *)arg2;
- (NoteAttachmentPresentation *)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 attachmentPresentationForContentID:(NSString *)arg2;
- (bool)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 canAddAttachmentItemProviders:(NSArray *)arg2;
- (NoteAttachmentPresentation *)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 createAttachmentPresentationWithFileWrapper:(NSFileWrapper *)arg2 mimeType:(NSString *)arg3;
- (void)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 didInvokeFormattingCalloutOption:(long long)arg2;
- (void)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 didInvokeStyleFormattingOption:(long long)arg2;
- (NSURL *)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 fileURLForAttachmentWithContentID:(NSString *)arg2;
- (void)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 openURL:(NSURL *)arg2;
- (NSDictionary *)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 updateAttachments:(NSArray *)arg2;
- (void)noteHTMLEditorViewDidBeginEditing:(NoteHTMLEditorView *)arg1;
- (void)noteHTMLEditorViewDidChange:(NoteHTMLEditorView *)arg1;
- (void)noteHTMLEditorViewDidEndEditing:(NoteHTMLEditorView *)arg1;
- (void)noteHTMLEditorViewNeedsContentReload:(NoteHTMLEditorView *)arg1;
- (bool)noteHTMLEditorViewShouldBeginEditing:(NoteHTMLEditorView *)arg1 isUserInitiated:(bool)arg2;
- (void)noteHTMLEditorViewWillChange:(NoteHTMLEditorView *)arg1;

@end
