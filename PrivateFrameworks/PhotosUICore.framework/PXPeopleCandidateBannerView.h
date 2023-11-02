
@interface PXPeopleCandidateBannerView : UIView {
    UIButton * _actionButton;
    long long  _attribution;
    UIImageView * _contactAvatarView;
    long long  _contactImageRequestVersion;
    CNContact * _contactSuggestion;
    <PXPeopleCandidateBannerViewDelegate> * _delegate;
    NSLayoutConstraint * _leadingConstraint;
    NSString * _nameSuggestion;
    UIButton * _notNowButton;
    NSLayoutConstraint * _notNowToTrailingConstraint;
    PXPeopleScalableAvatarView * _personAvatarView;
    UILabel * _promptLabel;
    PXFeatureSpec * _spec;
    long long  _style;
}

@property (nonatomic) long long attribution;
@property (nonatomic, readonly) UIImageView *contactAvatarView;
@property (nonatomic, retain) CNContact *contactSuggestion;
@property (nonatomic) <PXPeopleCandidateBannerViewDelegate> *delegate;
@property (nonatomic, readonly) NSLayoutConstraint *leadingConstraint;
@property (nonatomic, retain) NSString *nameSuggestion;
@property (nonatomic, readonly) NSLayoutConstraint *notNowToTrailingConstraint;
@property (nonatomic, retain) PHPerson *person;
@property (nonatomic, readonly) PXPeopleScalableAvatarView *personAvatarView;
@property (nonatomic, readonly) <UIPopoverPresentationControllerSourceItem> *popoverSourceForPrimaryAction;
@property (nonatomic, readonly) UILabel *promptLabel;
@property (nonatomic, retain) PXFeatureSpec *spec;
@property (nonatomic, readonly) long long style;
@property (nonatomic, retain) UIImage *suggestedContactImage;

- (void).cxx_destruct;
- (long long)attribution;
- (id)contactAvatarView;
- (id)contactSuggestion;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (id)leadingConstraint;
- (id)nameSuggestion;
- (id)notNowToTrailingConstraint;
- (id)person;
- (id)personAvatarView;
- (id)popoverSourceForPrimaryAction;
- (id)promptLabel;
- (void)setAttribution:(long long)arg1;
- (void)setContactSuggestion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNameSuggestion:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setSuggestedContactImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)spec;
- (long long)style;
- (id)suggestedContactImage;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
