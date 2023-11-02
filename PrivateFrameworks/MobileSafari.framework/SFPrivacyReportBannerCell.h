
@interface SFPrivacyReportBannerCell : SFInteractiveBannerCell {
    unsigned long long  _action;
    long long  _numberOfTrackers;
    bool  _privateBrowsingEnabled;
}

@property (nonatomic) long long numberOfTrackers;
@property (getter=isPrivateBrowsingEnabled, nonatomic) bool privateBrowsingEnabled;

+ (id)reuseIdentifier;

- (void)_privacyProxyAvailabilityChanged:(id)arg1;
- (void)_setAction:(unsigned long long)arg1 text:(id)arg2;
- (void)_updateState;
- (void)configureUsingBanner:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPrivateBrowsingEnabled;
- (long long)numberOfTrackers;
- (void)setNumberOfTrackers:(long long)arg1;
- (void)setPrivateBrowsingEnabled:(bool)arg1;

@end
