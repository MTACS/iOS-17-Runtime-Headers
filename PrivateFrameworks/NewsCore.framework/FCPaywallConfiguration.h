
@interface FCPaywallConfiguration : NSObject <NSCopying> {
    NSString * _descriptionNonTrial;
    NSString * _descriptionTrial;
    bool  _externalOverridesEnabled;
    NSString * _learnMoreTitle;
    NSURL * _learnMoreURL;
    unsigned long long  _offersLinkTargetType;
    NSString * _offersLinkTitle;
    NSURL * _offersLinkURL;
    FCPaywallTopOffsetConfiguration * _paywallTopOffsetConfig;
    unsigned long long  _paywallType;
    FCSubscriptionButtonConfiguration * _subscriptionButtonConfig;
    NSString * _title;
    FCPaywallVisualSpecConfiguration * _visualSpecConfig;
}

@property (nonatomic, copy) NSString *descriptionNonTrial;
@property (nonatomic, copy) NSString *descriptionTrial;
@property (nonatomic, readonly) bool externalOverridesEnabled;
@property (nonatomic, copy) NSString *learnMoreTitle;
@property (nonatomic, copy) NSURL *learnMoreURL;
@property (nonatomic) unsigned long long offersLinkTargetType;
@property (nonatomic, copy) NSString *offersLinkTitle;
@property (nonatomic, copy) NSURL *offersLinkURL;
@property (nonatomic, readonly) FCPaywallTopOffsetConfiguration *paywallTopOffsetConfig;
@property (nonatomic) unsigned long long paywallType;
@property (nonatomic, retain) FCSubscriptionButtonConfiguration *subscriptionButtonConfig;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) FCPaywallVisualSpecConfiguration *visualSpecConfig;

+ (id)defaultArticleHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultArticleSharedHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultArticleSharedSoftPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultArticleSoftPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultAudioArticleHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultAudioArticleSharedHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultAudioArticleSharedSoftPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultAudioArticleSoftPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultAudioFeedSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultAudioFeedSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultAudioPaywallDescription;
+ (id)defaultAudioPaywallTitle;
+ (id)defaultChannelSoftPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultDeferredPaywallTopOffsetConfiguration;
+ (id)defaultMagazineFeedSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultMagazineFeedSoftPaywallMediumPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultMagazineFeedSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultMagazineFeedVideoSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultMagazineFeedVideoSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultPDFHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultPaywallDescription;
+ (id)defaultPaywallTitle;
+ (id)defaultPaywallTopOffsetConfiguration;
+ (id)defaultSmallPaywallTitle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionNonTrial;
- (id)descriptionTrial;
- (bool)externalOverridesEnabled;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPaywallType:(unsigned long long)arg1 title:(id)arg2 descriptionTrial:(id)arg3 descriptionNonTrial:(id)arg4 learnMoreTitle:(id)arg5 learnMoreURL:(id)arg6 offersLinkTitle:(id)arg7 offersLinkURL:(id)arg8 offersLinkTargetType:(unsigned long long)arg9 externalOverridesEnabled:(bool)arg10 subscriptionButtonConfig:(id)arg11 visualSpecConfig:(id)arg12 paywallTopOffsetConfig:(id)arg13;
- (bool)isEqual:(id)arg1;
- (id)learnMoreTitle;
- (id)learnMoreURL;
- (unsigned long long)offersLinkTargetType;
- (id)offersLinkTitle;
- (id)offersLinkURL;
- (id)paywallTopOffsetConfig;
- (unsigned long long)paywallType;
- (void)setDescriptionNonTrial:(id)arg1;
- (void)setDescriptionTrial:(id)arg1;
- (void)setLearnMoreTitle:(id)arg1;
- (void)setLearnMoreURL:(id)arg1;
- (void)setOffersLinkTargetType:(unsigned long long)arg1;
- (void)setOffersLinkTitle:(id)arg1;
- (void)setOffersLinkURL:(id)arg1;
- (void)setPaywallType:(unsigned long long)arg1;
- (void)setSubscriptionButtonConfig:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisualSpecConfig:(id)arg1;
- (id)subscriptionButtonConfig;
- (id)title;
- (id)visualSpecConfig;

@end
