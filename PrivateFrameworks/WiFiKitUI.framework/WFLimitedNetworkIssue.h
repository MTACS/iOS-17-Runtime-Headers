
@interface WFLimitedNetworkIssue : WFHealthIssue {
    NSString * _issueDescription;
    NSString * _issueRecommendation;
    NSString * _issueShortTitle;
    NSString * _issueTitle;
    bool  _subtitleOnlyIssue;
    NSString * _typeString;
}

+ (id)limitedNetwork;
+ (id)limitedNetwork_CH;

- (void).cxx_destruct;
- (id)_RecommendationForChinaDevice:(bool)arg1;
- (id)initWithChinaDevice:(bool)arg1;
- (id)issueDescription;
- (id)issueRecommendation;
- (id)issueShortTitle;
- (id)issueTitle;
- (bool)subtitleOnlyIssue;
- (id)typeString;

@end
