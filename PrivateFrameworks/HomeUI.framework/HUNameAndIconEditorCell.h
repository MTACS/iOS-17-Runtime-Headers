
@interface HUNameAndIconEditorCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUEditableTextCellProtocol> {
    UIView * _containerView;
    <HUNameAndIconEditorCellDelegate> * _delegate;
    bool  _disabled;
    bool  _hideIconButton;
    HUIconButton * _iconButton;
    HFItem * _item;
    UITextField * _textField;
    NSLayoutConstraint * _textFieldLeadingConstraint;
}

@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUNameAndIconEditorCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideIconButton;
@property (nonatomic, retain) HUIconButton *iconButton;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textField;
@property (nonatomic, retain) UIFont *textFieldFont;
@property (nonatomic, retain) NSLayoutConstraint *textFieldLeadingConstraint;

- (void).cxx_destruct;
- (void)_handleIconButtonTap:(id)arg1;
- (void)_setupConstraints;
- (void)_updateDisabled;
- (void)_updateTextFieldInset;
- (id)containerView;
- (id)delegate;
- (bool)hideIconButton;
- (id)iconButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (id)item;
- (void)prepareForReuse;
- (void)setContainerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHideIconButton:(bool)arg1;
- (void)setIconButton:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setTextFieldFont:(id)arg1;
- (void)setTextFieldLeadingConstraint:(id)arg1;
- (id)textField;
- (id)textFieldFont;
- (id)textFieldLeadingConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUIWithAnimation:(bool)arg1;

@end
