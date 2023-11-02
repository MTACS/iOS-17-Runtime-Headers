
@interface OBPrivacyCombinedController : OBTableWelcomeController {
    bool  _allowsOpeningSafari;
    UIColor * _customTintColor;
    NSString * _displayLanguage;
    bool  _presentedFromPrivacyPane;
    bool  _underlineLinks;
}

@property bool allowsOpeningSafari;
@property (nonatomic, retain) UIColor *customTintColor;
@property (retain) NSString *displayLanguage;
@property bool presentedFromPrivacyPane;
@property (nonatomic) bool underlineLinks;

+ (id)new;
+ (void)presentPrivacyCombinedControllerOverController:(id)arg1 dismissHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)allowsOpeningSafari;
- (id)customTintColor;
- (id)displayLanguage;
- (id)init;
- (id)initWithBundles:(id)arg1;
- (bool)presentedFromPrivacyPane;
- (void)setAllowsOpeningSafari:(bool)arg1;
- (void)setCustomTintColor:(id)arg1;
- (void)setDisplayLanguage:(id)arg1;
- (void)setPresentedFromPrivacyPane:(bool)arg1;
- (void)setUnderlineLinks:(bool)arg1;
- (bool)underlineLinks;
- (void)viewDidAppear:(bool)arg1;

@end
