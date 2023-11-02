
@interface FCPostPurchaseOnboardingConfiguration : NSObject {
    NSString * _callToActionText;
    NSURL * _deepLinkURL;
    NSString * _landingPageArticleID;
    unsigned long long  _postPurchaseOnboardingStep;
}

@property (nonatomic, copy) NSString *callToActionText;
@property (nonatomic, copy) NSURL *deepLinkURL;
@property (nonatomic, copy) NSString *landingPageArticleID;
@property (nonatomic) unsigned long long postPurchaseOnboardingStep;

- (void).cxx_destruct;
- (id)callToActionText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deepLinkURL;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPostPurchaseOnboardingStep:(unsigned long long)arg1 landingPageArticleID:(id)arg2 callToActionText:(id)arg3 deepLinkURL:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)landingPageArticleID;
- (unsigned long long)postPurchaseOnboardingStep;
- (void)setCallToActionText:(id)arg1;
- (void)setDeepLinkURL:(id)arg1;
- (void)setLandingPageArticleID:(id)arg1;
- (void)setPostPurchaseOnboardingStep:(unsigned long long)arg1;

@end
