
@interface MFLoadBlockedContentBannerView : MFSuggestionBannerView {
    unsigned long long  _blockedContentTypes;
    long long  _blockingReason;
    <MFLoadBlockedContentBannerViewDelegate> * _delegate;
}

@property (nonatomic) unsigned long long blockedContentTypes;
@property (nonatomic) <MFLoadBlockedContentBannerViewDelegate> *delegate;

+ (id)log;

- (void).cxx_destruct;
- (void)_titleControlTapped:(id)arg1;
- (void)_updateBannerText;
- (id)actionTitle;
- (unsigned long long)blockedContentTypes;
- (id)delegate;
- (void)enablePrivacyProtectionAlertForAccount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blockedContentTypes:(unsigned long long)arg2 blockingReason:(long long)arg3;
- (void)primaryAction;
- (void)setBlockedContentTypes:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)title;

@end
