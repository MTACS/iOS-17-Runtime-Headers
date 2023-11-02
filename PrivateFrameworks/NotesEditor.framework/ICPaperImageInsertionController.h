
@interface ICPaperImageInsertionController : NSObject {
    ICNoteEditorViewController * _noteEditor;
}

@property (nonatomic) ICNoteEditorViewController *noteEditor;

- (void).cxx_destruct;
- (void)addImagesToPaperWithItemProviders:(id)arg1;
- (id)initWithNoteEditorViewController:(id)arg1;
- (id)noteEditor;
- (void)setNoteEditor:(id)arg1;
- (bool)shouldAddImagesToPaper;

@end
