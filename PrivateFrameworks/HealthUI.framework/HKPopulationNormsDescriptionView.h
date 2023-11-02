
@interface HKPopulationNormsDescriptionView : UIView {
    UILabel * _classificationDescriptionLabel;
    UILabel * _classificationTitleLabel;
}

@property (nonatomic, retain) UILabel *classificationDescriptionLabel;
@property (nonatomic, retain) UILabel *classificationTitleLabel;

- (void).cxx_destruct;
- (id)classificationDescriptionLabel;
- (id)classificationTitleLabel;
- (id)init;
- (void)setClassificationDescriptionLabel:(id)arg1;
- (void)setClassificationTitleLabel:(id)arg1;
- (void)updateWithTitle:(id)arg1 description:(id)arg2;

@end
