
@interface SBSInCallPresentationConfiguration : NSObject <NSSecureCoding> {
    NSUUID * _identifier;
    double  _preferredBannerHeight;
    long long  _preferredPresentationMode;
    NSString * _sceneBundleIdentifier;
    bool  _screenSharingPresentation;
    bool  _shouldPreventBannersWhenPresentedAsOverlay;
    bool  _supportsAmbient;
    bool  _supportsSystemAperture;
    bool  _userInitiated;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) double preferredBannerHeight;
@property (nonatomic) long long preferredPresentationMode;
@property (nonatomic, readonly, copy) NSString *sceneBundleIdentifier;
@property (getter=isScreenSharingPresentation, nonatomic) bool screenSharingPresentation;
@property (nonatomic) bool shouldPreventBannersWhenPresentedAsOverlay;
@property (nonatomic) bool supportsAmbient;
@property (nonatomic) bool supportsSystemAperture;
@property (getter=isUserInitiated, nonatomic) bool userInitiated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSceneBundleIdentifier:(id)arg1;
- (bool)isScreenSharingPresentation;
- (bool)isUserInitiated;
- (double)preferredBannerHeight;
- (long long)preferredPresentationMode;
- (id)sceneBundleIdentifier;
- (void)setPreferredBannerHeight:(double)arg1;
- (void)setPreferredPresentationMode:(long long)arg1;
- (void)setScreenSharingPresentation:(bool)arg1;
- (void)setShouldPreventBannersWhenPresentedAsOverlay:(bool)arg1;
- (void)setSupportsAmbient:(bool)arg1;
- (void)setSupportsSystemAperture:(bool)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)shouldPreventBannersWhenPresentedAsOverlay;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)supportsAmbient;
- (bool)supportsSystemAperture;

@end
