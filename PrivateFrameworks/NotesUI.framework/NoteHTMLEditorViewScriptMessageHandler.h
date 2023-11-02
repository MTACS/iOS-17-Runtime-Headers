
@interface NoteHTMLEditorViewScriptMessageHandler : NSObject <WKScriptMessageHandler> {
    NoteHTMLEditorView * _noteHTMLEditorView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NoteHTMLEditorView *noteHTMLEditorView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithNoteHMLEditorView:(id)arg1;
- (id)noteHTMLEditorView;
- (void)setNoteHTMLEditorView:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

@end
