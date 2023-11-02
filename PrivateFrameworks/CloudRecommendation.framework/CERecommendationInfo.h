
@interface CERecommendationInfo : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _completedRecommendationsURL;
    NSString * _recommendationSpecifierSubtitle;
    NSString * _recommendationSpecifierTitle;
    NSURL * _serverRecommendationsURL;
    NSURL * _serverRulesURL;
    NSDictionary * _subtitleTemplates;
}

@property (nonatomic, retain) NSURL *completedRecommendationsURL;
@property (nonatomic, copy) NSString *recommendationSpecifierSubtitle;
@property (nonatomic, copy) NSString *recommendationSpecifierTitle;
@property (nonatomic, retain) NSURL *serverRecommendationsURL;
@property (nonatomic, retain) NSURL *serverRulesURL;
@property (nonatomic, retain) NSDictionary *subtitleTemplates;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)completedRecommendationsURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)recommendationSpecifierSubtitle;
- (id)recommendationSpecifierTitle;
- (id)serverRecommendationsURL;
- (id)serverRulesURL;
- (void)setCompletedRecommendationsURL:(id)arg1;
- (void)setRecommendationSpecifierSubtitle:(id)arg1;
- (void)setRecommendationSpecifierTitle:(id)arg1;
- (void)setServerRecommendationsURL:(id)arg1;
- (void)setServerRulesURL:(id)arg1;
- (void)setSubtitleTemplates:(id)arg1;
- (id)subtitleTemplates;

@end
