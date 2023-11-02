
@interface AVTUserInfoView : UIView {
    NSArray * _activeConstraints;
    UIColor * _containerBackgroundColor;
    bool  _isRegisteredForCategorySizeChange;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _textInsets;
    UIVisualEffectView * _userInfoEffectView;
    UILabel * _userInfoLabel;
}

@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic) UIColor *containerBackgroundColor;
@property (nonatomic) bool isRegisteredForCategorySizeChange;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } textInsets;
@property (nonatomic, retain) UIVisualEffectView *userInfoEffectView;
@property (nonatomic, retain) UILabel *userInfoLabel;

+ (double)textVerticalPadding;

- (void).cxx_destruct;
- (void)_configure;
- (id)activeConstraints;
- (id)containerBackgroundColor;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)didMoveToWindow;
- (bool)isRegisteredForCategorySizeChange;
- (void)layoutSubviews;
- (void)setActiveConstraints:(id)arg1;
- (void)setContainerBackgroundColor:(id)arg1;
- (void)setIsRegisteredForCategorySizeChange:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUserInfoEffectView:(id)arg1;
- (void)setUserInfoLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })textInsets;
- (void)updateConstraints;
- (id)userInfoEffectView;
- (id)userInfoLabel;

@end
