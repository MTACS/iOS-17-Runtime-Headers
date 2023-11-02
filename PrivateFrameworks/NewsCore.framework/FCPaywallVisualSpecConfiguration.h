
@interface FCPaywallVisualSpecConfiguration : NSObject <NSCopying> {
    FCColor * _backgroundColor;
    long long  _badgeVerticalOffset;
    FCColor * _darkStyleBackgroundColor;
    FCMultiResolutionImage * _darkStyleMultiResolutionBadgeImage;
    FCMultiResolutionImage * _darkStyleMultiResolutionImage;
    double  _gradientPercentHeight;
    FCColor * _largeTextColor;
    FCColor * _mastheadTextColor;
    FCMultiResolutionImage * _multiResolutionBadgeImage;
    FCMultiResolutionImage * _multiResolutionImage;
    FCMultiSizeVideo * _multiSizeVideo;
    FCColor * _offersTextColor;
    FCColor * _smallTextColor;
    long long  _textTopPadding;
    long long  _videoHeight;
    NSURL * _videoURL;
    long long  _videoWidth;
}

@property (nonatomic, retain) FCColor *backgroundColor;
@property (nonatomic) long long badgeVerticalOffset;
@property (nonatomic, retain) FCColor *darkStyleBackgroundColor;
@property (nonatomic, retain) FCMultiResolutionImage *darkStyleMultiResolutionBadgeImage;
@property (nonatomic, retain) FCMultiResolutionImage *darkStyleMultiResolutionImage;
@property (nonatomic) double gradientPercentHeight;
@property (nonatomic, retain) FCColor *largeTextColor;
@property (nonatomic, retain) FCColor *mastheadTextColor;
@property (nonatomic, retain) FCMultiResolutionImage *multiResolutionBadgeImage;
@property (nonatomic, retain) FCMultiResolutionImage *multiResolutionImage;
@property (nonatomic, retain) FCMultiSizeVideo *multiSizeVideo;
@property (nonatomic, retain) FCColor *offersTextColor;
@property (nonatomic, retain) FCColor *smallTextColor;
@property (nonatomic) long long textTopPadding;
@property (nonatomic) long long videoHeight;
@property (nonatomic, retain) NSURL *videoURL;
@property (nonatomic) long long videoWidth;

+ (id)defaultAudioFeedPaywallVisualSpecConfigurationLarge;
+ (id)defaultAudioFeedPaywallVisualSpecConfigurationSmall;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationLarge;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationMedium;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationSmall;
+ (id)defaultPaywallVisualSpecConfiguration;

- (void).cxx_destruct;
- (id)backgroundColor;
- (long long)badgeVerticalOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)darkStyleBackgroundColor;
- (id)darkStyleMultiResolutionBadgeImage;
- (id)darkStyleMultiResolutionImage;
- (double)gradientPercentHeight;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithMultiResolutionImage:(id)arg1 darkStyleMultiResolutionImage:(id)arg2 multiResolutionBadgeImage:(id)arg3 darkStyleMultiResolutionBadgeImage:(id)arg4 multiSizeVideo:(id)arg5 videoURL:(id)arg6 videoWidth:(long long)arg7 videoHeight:(long long)arg8 gradientPercentHeight:(double)arg9 textTopPadding:(long long)arg10 badgeVerticalOffset:(long long)arg11 backgroundColor:(id)arg12 darkStyleBackgroundColor:(id)arg13 mastheadTextColor:(id)arg14 largeTextColor:(id)arg15 smallTextColor:(id)arg16 offersTextColor:(id)arg17;
- (bool)isEqual:(id)arg1;
- (id)largeTextColor;
- (id)mastheadTextColor;
- (id)multiResolutionBadgeImage;
- (id)multiResolutionImage;
- (id)multiSizeVideo;
- (id)offersTextColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setBadgeVerticalOffset:(long long)arg1;
- (void)setDarkStyleBackgroundColor:(id)arg1;
- (void)setDarkStyleMultiResolutionBadgeImage:(id)arg1;
- (void)setDarkStyleMultiResolutionImage:(id)arg1;
- (void)setGradientPercentHeight:(double)arg1;
- (void)setLargeTextColor:(id)arg1;
- (void)setMastheadTextColor:(id)arg1;
- (void)setMultiResolutionBadgeImage:(id)arg1;
- (void)setMultiResolutionImage:(id)arg1;
- (void)setMultiSizeVideo:(id)arg1;
- (void)setOffersTextColor:(id)arg1;
- (void)setSmallTextColor:(id)arg1;
- (void)setTextTopPadding:(long long)arg1;
- (void)setVideoHeight:(long long)arg1;
- (void)setVideoURL:(id)arg1;
- (void)setVideoWidth:(long long)arg1;
- (id)smallTextColor;
- (long long)textTopPadding;
- (long long)videoHeight;
- (id)videoURL;
- (long long)videoWidth;

@end
