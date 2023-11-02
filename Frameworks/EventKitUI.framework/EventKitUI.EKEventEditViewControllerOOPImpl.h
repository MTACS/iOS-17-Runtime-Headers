
@interface EventKitUI.EKEventEditViewControllerOOPImpl : UIViewController {
    void editViewDelegate;
    void editorBackgroundColor;
    void event;
    void eventStore;
    void hostView;
    void hostViewModel;
    void hostingController;
    void preCommitDeletedObjectIDs;
    void preCommitInsertedObjectIDs;
    void preCommitUpdatedObjectIDs;
}

@property (nonatomic, retain) <EKEventEditViewDelegateAllOutOfProcess> *editViewDelegate;
@property (nonatomic, retain) UIColor *editorBackgroundColor;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, retain) EKEventStore *eventStore;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;

- (void).cxx_destruct;
- (void)cancelEditing;
- (id)editViewDelegate;
- (id)editorBackgroundColor;
- (id)event;
- (id)eventStore;
- (void)focusAndSelectStartDate;
- (void)focusAndSelectTitle;
- (void)focusTitle;
- (bool)hasUnsavedChanges;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setEditViewDelegate:(id)arg1;
- (void)setEditorBackgroundColor:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidLoad;

@end
