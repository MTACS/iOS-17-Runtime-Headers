
@interface PXSurveyRadarReporterViewController : OBWelcomeController {
    id /* block */  _completionHandler;
    PXRadarConfiguration * _configuration;
    UILabel * _detailLabel;
    OBTrayButton * _notNowButton;
    UIButton * _readReleaseAgreementButton;
}

@property (nonatomic, retain) UILabel *detailLabel;
@property (nonatomic, retain) OBTrayButton *notNowButton;
@property (nonatomic, retain) UIButton *readReleaseAgreementButton;

- (void).cxx_destruct;
- (void)_didSelectReadReleaseAgreementButton;
- (void)_handleAgreeButton:(id)arg1;
- (void)_handleNotNowButton:(id)arg1;
- (id)attributedDetailText;
- (id)detailLabel;
- (id)initWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)notNowButton;
- (id)readReleaseAgreementButton;
- (void)setDetailLabel:(id)arg1;
- (void)setNotNowButton:(id)arg1;
- (void)setReadReleaseAgreementButton:(id)arg1;

@end
