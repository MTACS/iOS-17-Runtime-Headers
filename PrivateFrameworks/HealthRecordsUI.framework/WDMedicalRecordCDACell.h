
@interface WDMedicalRecordCDACell : UITableViewCell {
    UIView * _background;
    HKCDADocumentSample * _cdaSample;
    UILabel * _dateLabel;
    UIImageView * _discloseView;
    UILabel * _institutionLabel;
    UILabel * _institutionTitle;
    UILabel * _patientLabel;
    UILabel * _patientTitle;
    HKSeparatorLineView * _separator;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *background;
@property (nonatomic, retain) HKCDADocumentSample *cdaSample;
@property (nonatomic, retain) UILabel *dateLabel;
@property (nonatomic, retain) UIImageView *discloseView;
@property (nonatomic, retain) UILabel *institutionLabel;
@property (nonatomic, retain) UILabel *institutionTitle;
@property (nonatomic, retain) UILabel *patientLabel;
@property (nonatomic, retain) UILabel *patientTitle;
@property (nonatomic, retain) HKSeparatorLineView *separator;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_adjustFont;
- (void)_setupSubviews;
- (id)background;
- (id)cdaSample;
- (id)dateLabel;
- (id)discloseView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)institutionLabel;
- (id)institutionTitle;
- (id)patientLabel;
- (id)patientTitle;
- (id)separator;
- (void)setBackground:(id)arg1;
- (void)setCdaSample:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setDiscloseView:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setInstitutionLabel:(id)arg1;
- (void)setInstitutionTitle:(id)arg1;
- (void)setPatientLabel:(id)arg1;
- (void)setPatientTitle:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
