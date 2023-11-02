
@protocol NoteHTMLEditorViewActionDelegate

@required

- (bool)canInsertImagesInNoteHTMLEditorView:(NoteHTMLEditorView *)arg1;
- (void)insertImageInNoteHTMLEditorView:(NoteHTMLEditorView *)arg1;
- (bool)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 acceptContentsFromPasteboard:(UIPasteboard *)arg2;
- (void)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 showShareSheetForAttachment:(NSString *)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (bool)noteHTMLEditorViewShouldPaste:(NoteHTMLEditorView *)arg1;
- (<ICReaderDelegate> *)readerDelegateInNoteHTMLEditorView:(NoteHTMLEditorView *)arg1;

@end
