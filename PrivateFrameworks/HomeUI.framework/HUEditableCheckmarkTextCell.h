
@interface HUEditableCheckmarkTextCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUEditableTextCellProtocol> {
    UIView * _accessoryView;
    bool  _allowCheckmarkSelectionWhileDisabled;
    UITapGestureRecognizer * _checkmarkTapRecognizer;
    HUCheckmarkAccessoryView * _checkmarkView;
    <HUEditableCheckmarkDelegate> * _delegate;
    bool  _disableCheckmark;
    bool  _disabled;
    NSArray * _dynamicConstraints;
    bool  _isChecked;
    HFItem * _item;
    bool  _removeCheckmark;
    NSArray * _staticConstraints;
    UITextField * _textField;
}

@property (nonatomic) bool allowCheckmarkSelectionWhileDisabled;
@property (nonatomic, retain) UITapGestureRecognizer *checkmarkTapRecognizer;
@property (nonatomic, retain) HUCheckmarkAccessoryView *checkmarkView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUEditableCheckmarkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableCheckmark;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, retain) NSArray *dynamicConstraints;
@property (readonly) unsigned long long hash;
@property (setter=setChecked:, nonatomic) bool isChecked;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) bool removeCheckmark;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, retain) NSArray *staticConstraints;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextField *textField;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_checkmarkTapped:(id)arg1;
- (id)accessoryView;
- (bool)allowCheckmarkSelectionWhileDisabled;
- (id)checkmarkTapRecognizer;
- (id)checkmarkView;
- (id)delegate;
- (bool)disableCheckmark;
- (id)dynamicConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isChecked;
- (bool)isDisabled;
- (id)item;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (bool)removeCheckmark;
- (void)setAccessoryView:(id)arg1;
- (void)setAllowCheckmarkSelectionWhileDisabled:(bool)arg1;
- (void)setChecked:(bool)arg1;
- (void)setCheckmarkTapRecognizer:(id)arg1;
- (void)setCheckmarkView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableCheckmark:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setDynamicConstraints:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setRemoveCheckmark:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setStaticConstraints:(id)arg1;
- (id)staticConstraints;
- (id)textField;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
