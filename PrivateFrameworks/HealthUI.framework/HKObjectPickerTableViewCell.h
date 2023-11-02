
@interface HKObjectPickerTableViewCell : UITableViewCell {
    NSString * _baseAccessibilityIdentifier;
    UIImageView * _checkboxView;
    bool  _checked;
    UIStackView * _contentStackView;
    NSArray * _detailItems;
    UIStackView * _labelStackView;
    HKObjectPickerDetailView * _patientDetailView;
    long long  _presentationOptions;
    UILabel * _primaryLabel;
    UIStackView * _recordDetailStackView;
    UIView * _secondSeparatorView;
    UILabel * _secondaryLabel;
    UIView * _separatorView;
}

@property (nonatomic, copy) NSString *baseAccessibilityIdentifier;
@property (nonatomic, retain) UIImageView *checkboxView;
@property (nonatomic) bool checked;
@property (nonatomic, retain) UIStackView *contentStackView;
@property (nonatomic, copy) NSArray *detailItems;
@property (nonatomic, retain) UIStackView *labelStackView;
@property (nonatomic, retain) HKObjectPickerDetailView *patientDetailView;
@property (nonatomic, copy) NSArray *patientDetails;
@property (nonatomic, copy) NSString *patientName;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, retain) UIStackView *recordDetailStackView;
@property (nonatomic, retain) UIView *secondSeparatorView;
@property (nonatomic, copy) NSAttributedString *secondaryAttributedText;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, retain) UIView *separatorView;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAccessibilityIdentifiers;
- (void)_updateRecordDetailAccessibilityIdentifiers;
- (id)baseAccessibilityIdentifier;
- (id)checkboxView;
- (bool)checked;
- (id)contentStackView;
- (id)detailItems;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 presentationOptions:(long long)arg3;
- (id)labelStackView;
- (id)patientDetailView;
- (id)patientDetails;
- (id)patientName;
- (void)prepareForReuse;
- (id)primaryLabel;
- (id)primaryText;
- (id)recordDetailStackView;
- (id)secondSeparatorView;
- (id)secondaryAttributedText;
- (id)secondaryLabel;
- (id)secondaryText;
- (id)separatorView;
- (void)setBaseAccessibilityIdentifier:(id)arg1;
- (void)setCheckboxView:(id)arg1;
- (void)setChecked:(bool)arg1;
- (void)setContentStackView:(id)arg1;
- (void)setDetailItems:(id)arg1;
- (void)setLabelStackView:(id)arg1;
- (void)setPatientDetailView:(id)arg1;
- (void)setPatientDetails:(id)arg1;
- (void)setPatientName:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setRecordDetailStackView:(id)arg1;
- (void)setSecondSeparatorView:(id)arg1;
- (void)setSecondaryAttributedText:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSeparatorView:(id)arg1;

@end
