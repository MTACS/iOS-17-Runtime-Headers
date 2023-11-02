
@interface AMSUIAccountMessageViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController> {
    bool  _didAnimateFirstImpression;
    AMSUIAccountMessageAppearance * _preferredAppearance;
    AMSUIAccountMessageAppearance * _requestAppearance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didAnimateFirstImpression;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long impressionsReportingFrequency;
@property (nonatomic, retain) AMSBinaryPromise *loadPromise;
@property (nonatomic, retain) AMSUIAccountMessageAppearance *preferredAppearance;
@property (nonatomic, retain) AMSUIAccountMessageAppearance *requestAppearance;
@property (nonatomic) bool shouldAutomaticallyReportMetrics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commitAnimationLaunch;
- (void)_commitAppearance;
- (id)_defaultPreferredImageSymbolConfiguration;
- (id)_effectiveImageSymbolConfiguration;
- (long long)_iconAnimationPlayCount;
- (long long)_impressionAnimationStyle;
- (id)_messageFontCompatibleWith:(id)arg1;
- (unsigned long long)_messageStyle;
- (id)_messageTextColor;
- (void)_prepareAnimationLaunch;
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)arg1;
- (id)_titleFontCompatibleWith:(id)arg1;
- (id)_titleTextColor;
- (bool)didAnimateFirstImpression;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 bag:(id)arg2 account:(id)arg3;
- (id)preferredAppearance;
- (id)requestAppearance;
- (void)setDidAnimateFirstImpression:(bool)arg1;
- (void)setPreferredAppearance:(id)arg1;
- (void)setRequestAppearance:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
