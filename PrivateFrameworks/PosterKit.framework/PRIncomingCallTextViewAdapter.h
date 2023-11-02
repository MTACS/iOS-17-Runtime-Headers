
@interface PRIncomingCallTextViewAdapter : NSObject <PRPosterAppearanceObserving> {
    void coordinator;
    void hostingController;
}

@property (nonatomic, readonly) unsigned long long alignment;
@property (nonatomic, readonly) bool callIsActive;
@property (nonatomic, readonly) bool displayNameIsSuitableForVerticalLayout;
@property (nonatomic, copy) NSString *displayNameText;
@property (nonatomic, retain) UIFont *emphasizedNameFont;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) unsigned long long layout;
@property (nonatomic) bool marqueeRunning;
@property (nonatomic, readonly) bool multilineNameIsDisplayed;
@property (nonatomic) unsigned long long preferredAlignment;
@property (nonatomic) unsigned long long preferredLayout;
@property (nonatomic, retain) UIFont *secondaryNameFont;
@property (nonatomic, retain) UIFont *statusFont;
@property (nonatomic) bool statusIsHidden;
@property (nonatomic, readonly) bool statusIsSuitableForVerticalLayout;
@property (nonatomic, copy) NSString *statusText;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (unsigned long long)alignment;
- (bool)callIsActive;
- (bool)displayNameIsSuitableForVerticalLayout;
- (id)displayNameText;
- (id)emphasizedNameFont;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)init;
- (id)initWithContact:(id)arg1 status:(id)arg2 callIsActive:(bool)arg3;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 status:(id)arg2 callIsActive:(bool)arg3;
- (unsigned long long)layout;
- (bool)marqueeRunning;
- (bool)multilineNameIsDisplayed;
- (void)overrideTitleLayoutWith:(unsigned long long)arg1;
- (void)posterAppearanceDidChange:(id)arg1;
- (unsigned long long)preferredAlignment;
- (unsigned long long)preferredLayout;
- (void)removeTitleLayoutOverride;
- (id)secondaryNameFont;
- (void)setDisplayNameText:(id)arg1;
- (void)setEmphasizedNameFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMarqueeRunning:(bool)arg1;
- (void)setPreferredAlignment:(unsigned long long)arg1;
- (void)setPreferredLayout:(unsigned long long)arg1;
- (void)setSecondaryNameFont:(id)arg1;
- (void)setStatusFont:(id)arg1;
- (void)setStatusIsHidden:(bool)arg1;
- (void)setStatusText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextFontUsingDefaultFontSizes:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsIn:(struct CGSize { double x1; double x2; })arg1;
- (id)statusFont;
- (bool)statusIsHidden;
- (bool)statusIsSuitableForVerticalLayout;
- (id)statusText;
- (id)textColor;
- (void)transitionCallToActiveStateAnimated:(bool)arg1;
- (id)viewController;

@end
