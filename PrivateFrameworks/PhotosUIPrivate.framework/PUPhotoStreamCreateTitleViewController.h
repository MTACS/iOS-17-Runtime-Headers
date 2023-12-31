
@interface PUPhotoStreamCreateTitleViewController : UIViewController <UITextViewDelegate> {
    NSLayoutConstraint * _axHeightConstraint;
    UILabel * _axPlaceholderLabel;
    NSArray * _constraints;
    UILabel * _descriptionLabel;
    bool  _hidePlaceholder;
    UILabel * _instructionLabel;
    UINavigationItem * _navItem;
    NSLayoutConstraint * _standardHeightConstraint;
    UILabel * _textPlaceholderLabel;
    UITextView * _textView;
    <PUPhotoStreamCreateTitleDelegate> * _titleDelegate;
    UITextField * _titleField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <PUPhotoStreamCreateTitleDelegate> *titleDelegate;

- (void).cxx_destruct;
- (void)_addConstraintsForTraitCollection:(id)arg1;
- (void)_cancelPost:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)contentSizeChanged;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)navigationItem;
- (void)setTitleDelegate:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)titleDelegate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
