
@interface ADBannerView : UIView {
    long long  _adType;
    id  _advertisingSection;
    bool  _bannerLoaded;
    bool  _bannerViewActionInProgress;
    id  _currentContentSizeIdentifier;
    id  _delegate;
    id  _requiredContentSizeIdentifiers;
}

@property (nonatomic, readonly) long long adType;
@property (nonatomic, copy) id advertisingSection;
@property (getter=isBannerLoaded, nonatomic, readonly) bool bannerLoaded;
@property (getter=isBannerViewActionInProgress, nonatomic, readonly) bool bannerViewActionInProgress;
@property (nonatomic, copy) id currentContentSizeIdentifier;
@property (nonatomic) id delegate;
@property (nonatomic, copy) id requiredContentSizeIdentifiers;

+ (struct CGSize { double x1; double x2; })sizeFromBannerContentSizeIdentifier:(id)arg1;

- (void).cxx_destruct;
- (long long)adType;
- (id)advertisingSection;
- (void)cancelBannerViewAction;
- (id)currentContentSizeIdentifier;
- (id)delegate;
- (id)initWithAdType:(long long)arg1;
- (bool)isBannerLoaded;
- (bool)isBannerViewActionInProgress;
- (id)requiredContentSizeIdentifiers;
- (void)setAdvertisingSection:(id)arg1;
- (void)setCurrentContentSizeIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequiredContentSizeIdentifiers:(id)arg1;

@end
