
@interface FCFeedTransformationEndOfArticle : NSObject <FCFeedTransforming> {
    unsigned long long  _expireArticlesAfter;
    bool  _isPaywallAvailable;
    unsigned long long  _maxiumInaccessibleHeadlineCount;
    unsigned long long  _minimumResultHeadlineCount;
    double  _paidHeadlineRatio;
    <FCPurchaseProviderType> * _purchaseProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long expireArticlesAfter;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPaywallAvailable;
@property (nonatomic) unsigned long long maxiumInaccessibleHeadlineCount;
@property (nonatomic) unsigned long long minimumResultHeadlineCount;
@property (nonatomic) double paidHeadlineRatio;
@property (nonatomic, retain) <FCPurchaseProviderType> *purchaseProvider;
@property (readonly) Class superclass;

+ (id)transformationWithConfiguration:(id)arg1 context:(id)arg2 isPaywallAvailable:(bool)arg3;

- (void).cxx_destruct;
- (unsigned long long)expireArticlesAfter;
- (bool)isPaywallAvailable;
- (unsigned long long)maxiumInaccessibleHeadlineCount;
- (unsigned long long)minimumResultHeadlineCount;
- (double)paidHeadlineRatio;
- (id)purchaseProvider;
- (void)setExpireArticlesAfter:(unsigned long long)arg1;
- (void)setIsPaywallAvailable:(bool)arg1;
- (void)setMaxiumInaccessibleHeadlineCount:(unsigned long long)arg1;
- (void)setMinimumResultHeadlineCount:(unsigned long long)arg1;
- (void)setPaidHeadlineRatio:(double)arg1;
- (void)setPurchaseProvider:(id)arg1;
- (id)transformFeedItems:(id)arg1;
- (id)transformHeadlines:(id)arg1;
- (id)transformItems:(id)arg1 isPaidBlock:(id /* block */)arg2 sourceChannelIDProvider:(id /* block */)arg3;

@end
