
@interface LinkEditorViewController : UIViewController <ICLinkAcceleratorControllerDelegate> {
    void $__lazy_storage_$_cancelBarButtonItem;
    void $__lazy_storage_$_doneBarButtonItem;
    void _viewModel;
    void addApproach;
    void delegate;
    void hostingController;
    void linkAcceleratorController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  linkEditorView;
    void linkTextChanged;
    void selectedNoteChange;
    void selectedURLChange;
    void selectedURLTextChange;
    void singleWidthSpace;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  textSelection;
}

@property (nonatomic, readonly) UIView *acceleratorHostingView;
@property (nonatomic) long long addApproach;
@property (nonatomic, retain) <ICLinkEditorDelegate> *delegate;
@property (nonatomic, readonly) ICNAEventReporter *eventReporter;
@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) bool languageHasSpaces;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } lastSelectedRangeForAccelerator;
@property (nonatomic, retain) ICLinkAcceleratorController *linkAcceleratorController;
@property (nonatomic, readonly) ICNote *note;
@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic, readonly) UIView *urlTextFieldView;
@property (nonatomic, readonly) long long writingDirection;

- (void).cxx_destruct;
- (id)acceleratorHostingView;
- (void)acceleratorOriginNeedsUpdate;
- (long long)addApproach;
- (void)cancelAction:(id)arg1;
- (id)delegate;
- (void)didSelectNoteSuggestionWithIdentifier:(id)arg1 title:(id)arg2;
- (void)doneAction;
- (id)eventReporter;
- (void)handleArrowDown:(id)arg1;
- (void)handleArrowUp:(id)arg1;
- (void)handleEscape:(id)arg1;
- (void)handleReturnKey:(id)arg1;
- (void)hideAccelerator;
- (void)horizontalSizeClassDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertAndDismissWithCompletion:(id /* block */)arg1;
- (id)keyCommands;
- (bool)languageHasSpaces;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lastSelectedRangeForAccelerator;
- (id)linkAcceleratorController;
- (id)note;
- (void)presentAcceleratorIfNecessary;
- (void)removeLink;
- (id)searchString;
- (void)selectedSuggestionWithSelection:(id)arg1;
- (void)selectedURLWithSelection:(id)arg1;
- (void)setAddApproach:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLinkAcceleratorController:(id)arg1;
- (void)setupObservers;
- (id)urlTextFieldView;
- (void)validateSelection;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (long long)writingDirection;

@end
