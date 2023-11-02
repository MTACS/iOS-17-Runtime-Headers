
@interface _UISystemBannerRequest : NSObject <BSXPCSecureCoding> {
    double  _bannerTimeoutDuration;
    _UIOverlayService * _overlayService;
    double  _preferredMaximumBannerWidth;
    double  _preferredMinimumBannerWidth;
    NSString * _primaryTitleText;
    NSString * _secondaryTitleText;
}

@property (nonatomic) double bannerTimeoutDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double preferredMaximumBannerWidth;
@property (nonatomic) double preferredMinimumBannerWidth;
@property (nonatomic, retain) NSString *primaryTitleText;
@property (nonatomic, retain) NSString *secondaryTitleText;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (double)bannerTimeoutDuration;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)postBanner;
- (double)preferredMaximumBannerWidth;
- (double)preferredMinimumBannerWidth;
- (id)primaryTitleText;
- (id)secondaryTitleText;
- (void)setBannerTimeoutDuration:(double)arg1;
- (void)setPreferredMaximumBannerWidth:(double)arg1;
- (void)setPreferredMinimumBannerWidth:(double)arg1;
- (void)setPrimaryTitleText:(id)arg1;
- (void)setSecondaryTitleText:(id)arg1;
- (void)verifyParameters;

@end
