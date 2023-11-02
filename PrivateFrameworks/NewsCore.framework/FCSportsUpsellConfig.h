
@interface FCSportsUpsellConfig : NSObject {
    long long  _engagedUserQuiescenceInterval;
    NSString * _landingPageArticleID;
    long long  _maxNumberOfPresentations;
    long long  _maxNumberOfTopics;
    long long  _minNumberOfArticlesRead;
    long long  _quiescenceInterval;
}

@property (nonatomic) long long engagedUserQuiescenceInterval;
@property (nonatomic) NSString *landingPageArticleID;
@property (nonatomic) long long maxNumberOfPresentations;
@property (nonatomic) long long maxNumberOfTopics;
@property (nonatomic) long long minNumberOfArticlesRead;
@property (nonatomic) long long quiescenceInterval;

- (long long)engagedUserQuiescenceInterval;
- (id)initWithConfigDictionary:(id)arg1;
- (id)landingPageArticleID;
- (long long)maxNumberOfPresentations;
- (long long)maxNumberOfTopics;
- (long long)minNumberOfArticlesRead;
- (long long)quiescenceInterval;
- (void)setEngagedUserQuiescenceInterval:(long long)arg1;
- (void)setLandingPageArticleID:(id)arg1;
- (void)setMaxNumberOfPresentations:(long long)arg1;
- (void)setMaxNumberOfTopics:(long long)arg1;
- (void)setMinNumberOfArticlesRead:(long long)arg1;
- (void)setQuiescenceInterval:(long long)arg1;

@end
