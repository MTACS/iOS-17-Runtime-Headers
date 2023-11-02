
@interface AMSUIBubbleTipViewController : AMSUIBaseMessageViewController <AMSUICommonTextViewDelegate, AMSUIMessageViewController> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    AMSUIBubbleTipInlineAnchorInfo * _inlineAnchorInfo;
    bool  _isSelfSizing;
    AMSUIBubbleTipAppearance * _preferredAppearance;
    AMSUIBubbleTipAppearance * _requestAppearance;
}

@property struct CGPoint { double x1; double x2; } anchorPoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long impressionsReportingFrequency;
@property (nonatomic, retain) AMSUIBubbleTipInlineAnchorInfo *inlineAnchorInfo;
@property (nonatomic) bool isSelfSizing;
@property (nonatomic, retain) AMSBinaryPromise *loadPromise;
@property (nonatomic, retain) AMSUIBubbleTipAppearance *preferredAppearance;
@property (nonatomic, retain) AMSUIBubbleTipAppearance *requestAppearance;
@property (nonatomic) bool shouldAutomaticallyReportMetrics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commitAppearance;
- (id)_defaultPreferredImageSymbolConfiguration;
- (id)_effectiveImageSymbolConfiguration;
- (void)_endObservations;
- (long long)_iconAnimationPlayCount;
- (id)_messageFontCompatibleWith:(id)arg1;
- (unsigned long long)_messageStyle;
- (id)_messageTextColor;
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)arg1;
- (void)_startObservations;
- (id)_titleFontCompatibleWith:(id)arg1;
- (id)_titleTextColor;
- (void)_updateArrowProperties;
- (void)_updateSelfSizedContentSize;
- (void)ams_textViewDidUpdatePreferredContentSizeCategory:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (void)dealloc;
- (unsigned long long)directionForAMSUIPopoverArrowDirection:(unsigned long long)arg1;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 bag:(id)arg2 account:(id)arg3;
- (id)inlineAnchorInfo;
- (bool)isSelfSizing;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)preferredAppearance;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)requestAppearance;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInlineAnchorInfo:(id)arg1;
- (void)setIsSelfSizing:(bool)arg1;
- (void)setPreferredAppearance:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRequestAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
