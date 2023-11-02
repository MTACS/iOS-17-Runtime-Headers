
@interface ChronoKit.WidgetPreviewHostingViewController : ChronoKit.PreviewHostingViewController {
    void autoupdatingPreviewView;
    void entryController;
    void isLuminanceReduced;
    void tintParameters;
    void usesIOSLockScreenVibrancyEffect;
    void viewCollection;
}

@property (nonatomic, retain) CHSInlineTextParameters *inlineTextParameters;
@property (nonatomic, retain) CHSWidgetTintParameters *tintParameters;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)inlineTextParameters;
- (void)setInlineTextParameters:(id)arg1;
- (void)setTintParameters:(id)arg1;
- (id)tintParameters;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
