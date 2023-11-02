
@interface FPUIAuthenticationNavigationBarTitleView : UIStackView {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _label;
}

@property (nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) UILabel *label;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)init;
- (id)label;
- (void)setActivityIndicator:(id)arg1;
- (void)setActivityIndicatorHidden:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updateForChangedTraitsAffectingFonts;

@end
