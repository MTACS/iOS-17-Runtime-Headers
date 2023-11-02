
@interface PRIncomingCallTextViewAdapterWrapper : NSObject <PRPosterAppearanceObserving> {
    PRIncomingCallTextViewAdapter * adapter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayNameText;
@property (nonatomic, copy) UIFont *emphasizedNameFont;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (getter=isMarqueeRunning, nonatomic) bool marqueeRunning;
@property (nonatomic) unsigned long long preferredAlignment;
@property (nonatomic) unsigned long long preferredLayout;
@property (nonatomic, copy) UIFont *secondaryNameFont;
@property (nonatomic) bool statusDeterminesWritingMode;
@property (nonatomic, copy) UIFont *statusFont;
@property (getter=statusLabelIsHidden, nonatomic) bool statusLabelHidden;
@property (nonatomic, copy) NSString *statusText;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *textColor;

+ (double)idealTitleFontSizeForText:(id)arg1 usingLayout:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)alignment;
- (bool)callIsActive;
- (bool)captionDeterminesWritingMode;
- (bool)captionIsHidden;
- (bool)captionIsSuitableForVerticalLayout;
- (id)captionText;
- (bool)displayNameIsSuitableForVerticalLayout;
- (id)displayNameText;
- (id)emphasizedNameFont;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithContact:(id)arg1 status:(id)arg2 callIsActive:(bool)arg3;
- (id)initWithGivenName:(id)arg1 familyName:(id)arg2;
- (id)initWithGivenName:(id)arg1 familyName:(id)arg2 status:(id)arg3;
- (id)initWithGivenName:(id)arg1 familyName:(id)arg2 status:(id)arg3 callIsActive:(bool)arg4;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 status:(id)arg2;
- (id)initWithName:(id)arg1 status:(id)arg2 callIsActive:(bool)arg3;
- (bool)isMarqueeRunning;
- (unsigned long long)layout;
- (bool)multilineNameIsDisplayed;
- (void)overrideTitleLayoutWith:(unsigned long long)arg1;
- (void)posterAppearanceDidChange:(id)arg1;
- (unsigned long long)preferredAlignment;
- (unsigned long long)preferredLayout;
- (void)removeTitleLayoutOverride;
- (id)secondaryNameFont;
- (void)setCaptionDeterminesWritingMode:(bool)arg1;
- (void)setCaptionFont:(id)arg1;
- (void)setCaptionLabelIsHidden:(bool)arg1;
- (void)setCaptionText:(id)arg1;
- (void)setDisplayNameText:(id)arg1;
- (void)setEmphasizedNameFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMarqueeRunning:(bool)arg1;
- (void)setPreferredAlignment:(unsigned long long)arg1;
- (void)setPreferredLayout:(unsigned long long)arg1;
- (void)setSecondaryNameFont:(id)arg1;
- (void)setStatusDeterminesWritingMode:(bool)arg1;
- (void)setStatusFont:(id)arg1;
- (void)setStatusLabel:(bool)arg1;
- (void)setStatusLabelHidden:(bool)arg1;
- (void)setStatusText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextFontUsingDefaultFontSizes:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsInSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)statusDeterminesWritingMode;
- (id)statusFont;
- (bool)statusIsHidden;
- (bool)statusIsSuitableForVerticalLayout;
- (bool)statusLabelIsHidden;
- (id)statusText;
- (id)textColor;
- (bool)titleIsSuitableForVerticalLayout;
- (id)titleText;
- (void)transitionCallToActiveStateAnimated:(bool)arg1;
- (id)viewController;

@end
