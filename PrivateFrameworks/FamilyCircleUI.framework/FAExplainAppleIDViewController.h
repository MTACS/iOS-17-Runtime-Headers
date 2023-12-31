
@interface FAExplainAppleIDViewController : UIViewController {
    UIView * _contentView;
    UILabel * _descriptionLabel;
    UIButton * _goToSettingsButton;
    UIScrollView * _scrollView;
    bool  _shouldShowInviteeInstructions;
    UILabel * _titleLabel;
}

@property (nonatomic) bool shouldShowInviteeInstructions;

- (void).cxx_destruct;
- (double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2;
- (void)_updateFonts;
- (void)loadView;
- (void)setShouldShowInviteeInstructions:(bool)arg1;
- (bool)shouldShowInviteeInstructions;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;

@end
