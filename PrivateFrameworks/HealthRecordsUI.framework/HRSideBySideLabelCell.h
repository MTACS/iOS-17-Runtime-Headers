
@interface HRSideBySideLabelCell : WDMedicalRecordGroupableCell {
    void chevronView;
    void detail;
    void detailLabel;
    void title;
    void titleLabel;
}

@property (nonatomic, copy) NSString *detail;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)detail;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDetail:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
