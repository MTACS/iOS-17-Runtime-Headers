
@interface ICNoteEditorUserTitleView : UIView <UITextFieldDelegate> {
    UIAlertController * _alertController;
    NSArray * _alternateConstraintsForAXLargerTextSizes;
    NSArray * _defaultConstraints;
    <ICNoteEditorUserTitleViewDelegate> * _delegate;
    UIButton * _editButton;
    UILabel * _label;
    ICNote * _note;
}

@property (nonatomic) UIAlertController *alertController;
@property (nonatomic, retain) NSArray *alternateConstraintsForAXLargerTextSizes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *defaultConstraints;
@property (nonatomic) <ICNoteEditorUserTitleViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIButton *editButton;
@property (readonly) unsigned long long hash;
@property (nonatomic) UILabel *label;
@property (nonatomic, retain) ICNote *note;
@property (nonatomic, readonly) double preferredHeight;
@property (readonly) Class superclass;

+ (id)newUserTitleView;
+ (id)noteKeyPathsAffectingUserTitleView;
+ (bool)shouldShowUserTitleViewForNote:(id)arg1;

- (void).cxx_destruct;
- (bool)accessibilityActivate;
- (id)accessibilityContainer;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)alertController;
- (id)alternateConstraintsForAXLargerTextSizes;
- (void)awakeFromNib;
- (void)dealloc;
- (id)defaultConstraints;
- (id)delegate;
- (id)editButton;
- (void)editButtonPressed:(id)arg1;
- (bool)isAccessibilityElement;
- (id)label;
- (id)note;
- (void)noteWillBeDeleted:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)preferredHeight;
- (void)setAlertController:(id)arg1;
- (void)setAlternateConstraintsForAXLargerTextSizes:(id)arg1;
- (void)setDefaultConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditButton:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setNote:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updateContentToCurrentNote;
- (void)updateFonts;

@end
