
@interface DKNotableUserDataCardCell : UIView {
    UIView * _accessoryView;
    UIStackView * _labelContainer;
    UILabel * _stateLabel;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, retain) UIStackView *labelContainer;
@property (nonatomic, retain) UILabel *stateLabel;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_bodyFont;
- (id)_stateFont;
- (long long)_stateStackViewAxis;
- (id)_titleFont;
- (id)accessoryView;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 accessoryView:(id)arg3;
- (id)labelContainer;
- (void)setAccessoryView:(id)arg1;
- (void)setLabelContainer:(id)arg1;
- (void)setStateLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)stateLabel;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
