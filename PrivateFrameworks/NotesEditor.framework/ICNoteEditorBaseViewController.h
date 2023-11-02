
@interface ICNoteEditorBaseViewController : ICScrollViewDelegateViewController {
    long long  _editorIdentifier;
    ICNote * _note;
    unsigned long long  _options;
    long long  _viewAppearanceState;
}

@property (getter=isAuxiliaryEditor, nonatomic, readonly) bool auxiliaryEditor;
@property (getter=isEditingOnSecureScreen, nonatomic, readonly) bool editingOnSecureScreen;
@property (getter=isEditingOnSystemPaper, nonatomic, readonly) bool editingOnSystemPaper;
@property (nonatomic, readonly) long long editorIdentifier;
@property (nonatomic, readonly) NSString *identifierDescription;
@property (nonatomic, retain) ICNote *note;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic) long long viewAppearanceState;

- (void).cxx_destruct;
- (id)description;
- (long long)editorIdentifier;
- (void)groupActivityDidChange;
- (id)identifierDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(long long)arg1 options:(unsigned long long)arg2;
- (id)initWithIdentifier:(long long)arg1 options:(unsigned long long)arg2 nibName:(id)arg3 bundle:(id)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isAuxiliaryEditor;
- (bool)isEditingOnSecureScreen;
- (bool)isEditingOnSystemPaper;
- (id)note;
- (void)noteDidAppear:(id)arg1;
- (void)noteDidDisappear:(id)arg1;
- (void)noteWillAppear:(id)arg1;
- (void)noteWillDisappear:(id)arg1;
- (unsigned long long)options;
- (void)setNote:(id)arg1;
- (void)setViewAppearanceState:(long long)arg1;
- (long long)viewAppearanceState;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
