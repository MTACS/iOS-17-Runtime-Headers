
@interface WDMedicalRecordBrandCell : WDMedicalRecordBrandLogoCell

@property (nonatomic, readonly) UILabel *brandDetailLabel;
@property (nonatomic, readonly) UILabel *brandSubtitleLabel;
@property (nonatomic, readonly) UILabel *brandTitleLabel;

- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateLabelVisibility;
- (id)brandDetailLabel;
- (id)brandSubtitleLabel;
- (id)brandTitleLabel;
- (void)setBrandable:(id)arg1 dataProvider:(id)arg2;

@end
