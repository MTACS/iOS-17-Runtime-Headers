
@interface FCSubscriptionButtonConfiguration : NSObject <NSCopying> {
    FCColor * _buttonColor;
    FCColor * _buttonTextColor;
    bool  _dismissLandingPagePostPurchase;
    NSString * _landingPageArticleID;
    NSString * _nonTrialText;
    unsigned long long  _postPurchaseActionType;
    NSURL * _postPurchaseURL;
    unsigned long long  _subscriptionButtonType;
    unsigned long long  _targetType;
    NSString * _trialText;
}

@property (nonatomic, retain) FCColor *buttonColor;
@property (nonatomic, retain) FCColor *buttonTextColor;
@property (getter=shouldDismissLandingPagePostPurchase, nonatomic) bool dismissLandingPagePostPurchase;
@property (nonatomic, copy) NSString *landingPageArticleID;
@property (nonatomic, copy) NSString *nonTrialText;
@property (nonatomic) unsigned long long postPurchaseActionType;
@property (nonatomic, copy) NSURL *postPurchaseURL;
@property (nonatomic) unsigned long long subscriptionButtonType;
@property (nonatomic) unsigned long long targetType;
@property (nonatomic, copy) NSString *trialText;

+ (id)defaultAmsSheetTargetSubscriptionButton;
+ (id)defaultArticleSubscriptionButtonWithLandingPageArticleID:(id)arg1;
+ (id)defaultIssueCoverSubscriptionButtonWithLandingPageArticleID:(id)arg1;
+ (id)defaultLandingPageSubscriptionButtonWithLandingPageArticleID:(id)arg1;
+ (id)defaultLandingPageTargetSubscriptionButtonWithLandingPageArticleID:(id)arg1;
+ (id)defaultNonTrialText;
+ (id)defaultOsloSheetTargetSubscriptionButton;
+ (id)defaultSubscriptionButtonText;
+ (id)defaultTrialText;

- (void).cxx_destruct;
- (id)buttonColor;
- (id)buttonTextColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithSubscriptionButtonType:(unsigned long long)arg1 trialText:(id)arg2 nonTrialText:(id)arg3 buttonColor:(id)arg4 buttonTextColor:(id)arg5 targetType:(unsigned long long)arg6 postPurchaseActionType:(unsigned long long)arg7 postPurchaseURL:(id)arg8 landingPageArticleID:(id)arg9 dismissLandingPagePostPurchase:(bool)arg10;
- (bool)isEqual:(id)arg1;
- (id)landingPageArticleID;
- (id)nonTrialText;
- (unsigned long long)postPurchaseActionType;
- (id)postPurchaseURL;
- (void)setButtonColor:(id)arg1;
- (void)setButtonTextColor:(id)arg1;
- (void)setDismissLandingPagePostPurchase:(bool)arg1;
- (void)setLandingPageArticleID:(id)arg1;
- (void)setNonTrialText:(id)arg1;
- (void)setPostPurchaseActionType:(unsigned long long)arg1;
- (void)setPostPurchaseURL:(id)arg1;
- (void)setSubscriptionButtonType:(unsigned long long)arg1;
- (void)setTargetType:(unsigned long long)arg1;
- (void)setTrialText:(id)arg1;
- (bool)shouldDismissLandingPagePostPurchase;
- (unsigned long long)subscriptionButtonType;
- (unsigned long long)targetType;
- (id)trialText;

@end
