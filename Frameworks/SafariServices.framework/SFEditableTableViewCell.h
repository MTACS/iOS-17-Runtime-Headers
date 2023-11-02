
@interface SFEditableTableViewCell : UITableViewCell {
    <SFEditableTableViewCellDelegate> * _delegate;
    bool  _enabled;
    UIColor * _overrideEditableTextFieldTextColor;
}

@property (nonatomic) <SFEditableTableViewCellDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UIColor *overrideEditableTextFieldTextColor;

- (void).cxx_destruct;
- (void)_updateTextFieldTextColor;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (id)delegate;
- (id)initWithEnabledState:(bool)arg1;
- (bool)isEnabled;
- (id)overrideEditableTextFieldTextColor;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setOverrideEditableTextFieldTextColor:(id)arg1;
- (void)tintColorDidChange;

@end
