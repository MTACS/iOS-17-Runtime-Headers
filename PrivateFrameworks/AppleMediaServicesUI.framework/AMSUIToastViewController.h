
@interface AMSUIToastViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController> {
    AMSUIToastAppearance * _preferredAppearance;
    AMSUIToastAppearance * _requestAppearance;
    AMSUIToastTransitioningDelegate * _transitionDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long impressionsReportingFrequency;
@property (nonatomic, retain) AMSBinaryPromise *loadPromise;
@property (nonatomic, retain) AMSUIToastAppearance *preferredAppearance;
@property (nonatomic, retain) AMSUIToastAppearance *requestAppearance;
@property (nonatomic) bool shouldAutomaticallyReportMetrics;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSUIToastTransitioningDelegate *transitionDelegate;

- (void).cxx_destruct;
- (void)_commitAppearance;
- (id)_effectiveImageSymbolConfiguration;
- (long long)_iconAnimationPlayCount;
- (id)_messageFontCompatibleWith:(id)arg1;
- (unsigned long long)_messageStyle;
- (id)_messageTextColor;
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)arg1;
- (id)_titleFontCompatibleWith:(id)arg1;
- (id)_titleTextColor;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 bag:(id)arg2 account:(id)arg3;
- (id)preferredAppearance;
- (id)requestAppearance;
- (void)setPreferredAppearance:(id)arg1;
- (void)setRequestAppearance:(id)arg1;
- (void)setTransitionDelegate:(id)arg1;
- (id)transitionDelegate;

@end
