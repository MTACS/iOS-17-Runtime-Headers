
@interface WBSPhishingURLClassifierCrowdsourcedFeedbackAllowListAdapter : NSObject <WBSPhishingURLClassifier> {
    <WBSCrowdsourcedFeedbackAllowList> * _crowdsourcedFeedbackAllowList;
    WBSCrowdsourcedFeedbackDomainNormalizer * _crowdsourcedFeedbackDomainNormalizer;
}

- (void).cxx_destruct;
- (void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithCrowdsourcedFeedbackAllowList:(id)arg1;

@end
