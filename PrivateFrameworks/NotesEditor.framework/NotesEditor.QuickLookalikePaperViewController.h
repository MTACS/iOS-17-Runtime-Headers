
@interface NotesEditor.QuickLookalikePaperViewController : UINavigationController <PKToolPickerObserver> {
    void _undoManager;
    void dataSource;
    void dismissAction;
    void doneButton;
    void findButton;
    void formFillingButton;
    void markupButton;
    void paperDocumentViewController;
    void redoButton;
    void shareButton;
    void state;
    void syncCancellable;
    void syncManager;
    void undoButton;
}

@property (nonatomic, readonly) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (void)done:(id)arg1;
- (void)fillForm:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)markup:(id)arg1;
- (void)redo:(id)arg1;
- (void)search:(id)arg1;
- (void)share:(id)arg1;
- (void)toolPickerVisibilityDidChange:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManager;
- (void)updateBarButtonItems;

@end
