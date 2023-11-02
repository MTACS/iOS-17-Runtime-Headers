
@interface NoteWKWebView : WKWebView {
    bool  _hasActiveFindSession;
    NoteHTMLEditorView * _noteHTMLEditorView;
}

@property (nonatomic) NoteHTMLEditorView *noteHTMLEditorView;

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (void)calloutOptionInvoked:(long long)arg1 sender:(id)arg2;
- (bool)canBecomeFirstResponder;
- (void)findInteraction:(id)arg1 didBeginFindSession:(id)arg2;
- (void)findInteraction:(id)arg1 didEndFindSession:(id)arg2;
- (void)ic_evaluateJavaScript:(id)arg1;
- (id)noteHTMLEditorView;
- (void)paste:(id)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setNoteHTMLEditorView:(id)arg1;
- (void)strikethrough:(id)arg1;
- (bool)supportsTextReplacement;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;

@end
