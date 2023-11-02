
@interface CNMeCardSharingOnboardingHeaderViewController : UIViewController {
    CNMeCardSharingOnboardingAvatarCarouselViewController * _avatarCarouselController;
    UILabel * _headerLabel;
    NSString * _headerTitle;
    CNMeCardSharingPickerLayoutAttributes * _layoutAttributes;
    unsigned long long  _mode;
}

@property (nonatomic, retain) CNMeCardSharingOnboardingAvatarCarouselViewController *avatarCarouselController;
@property (nonatomic, retain) UILabel *headerLabel;
@property (nonatomic, retain) NSString *headerTitle;
@property (nonatomic, retain) CNMeCardSharingPickerLayoutAttributes *layoutAttributes;
@property (nonatomic) unsigned long long mode;

+ (double)heightForHeaderWithContainerSize:(struct CGSize { double x1; double x2; })arg1 withTitle:(id)arg2 layoutAttributes:(id)arg3 hasAvatar:(bool)arg4;

- (void).cxx_destruct;
- (id)avatarCarouselController;
- (id)headerLabel;
- (id)headerTitle;
- (id)initWithAvatarCarouselViewController:(id)arg1 headerTitle:(id)arg2 layoutAttributes:(id)arg3;
- (id)layoutAttributes;
- (unsigned long long)mode;
- (void)setAvatarCarouselController:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setLayoutAttributes:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
