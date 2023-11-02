
@interface HKPrescriptionPickerCell : UITableViewCell {
    UIStackView * _contentStackView;
    <HKPrescriptionPickerCellDelegate> * _delegate;
    HKVisionPrescription * _prescription;
    UILabel * _primaryLabel;
    UIStackView * _sampleInfoStackView;
    UILabel * _secondaryLabel;
    UIButton * _showDetailsButton;
    UISwitch * _toggleView;
}

@property (nonatomic, retain) UIStackView *contentStackView;
@property (nonatomic) <HKPrescriptionPickerCellDelegate> *delegate;
@property (getter=isOn, nonatomic) bool on;
@property (nonatomic, copy) HKVisionPrescription *prescription;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, retain) UIStackView *sampleInfoStackView;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) UIButton *showDetailsButton;
@property (nonatomic, retain) UISwitch *toggleView;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (void)_didTapShowDetailsButton;
- (void)_didToggleSwitch:(id)arg1;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)contentStackView;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isOn;
- (void)prepareForReuse;
- (id)prescription;
- (id)primaryLabel;
- (id)sampleInfoStackView;
- (id)secondaryLabel;
- (void)setContentStackView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)setPrescription:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setSampleInfoStackView:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setShowDetailsButton:(id)arg1;
- (void)setToggleView:(id)arg1;
- (id)showDetailsButton;
- (id)toggleView;

@end
