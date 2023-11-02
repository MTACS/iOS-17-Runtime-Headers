
@interface DMCEnrollmentAboutRemoteManagementViewController : OBPrivacySplashController {
    NSAttributedString * _attributedDetailText;
    NSString * _detailText;
    UILabel * _textLabel;
}

@property (nonatomic, copy) NSAttributedString *attributedDetailText;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, retain) UILabel *textLabel;

+ (id)_textFontIsBold:(bool)arg1;
+ (void)presentAboutRemoteManagementViewControllerWithBaseViewController:(id)arg1;

- (void).cxx_destruct;
- (id)attributedDetailText;
- (id)detailText;
- (void)loadView;
- (void)rightBarButtonTapped:(id)arg1;
- (void)setAttributedDetailText:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;
- (void)viewWillAppear:(bool)arg1;

@end
