
@interface FCArticleLinkBehaviorConfig : NSObject {
    NSString * _animationBody;
    int  _animationCampaignVersion;
    int  _animationMaxCount;
    long long  _animationQuiescenceInterval;
    NSString * _animationTitleLine1;
    NSString * _animationTitleLine2;
    bool  _lohAnimationCompletesInArticle;
    bool  _lohAnimationEnabled;
    bool  _openArticlesAsModals;
}

@property (nonatomic, readonly) NSString *animationBody;
@property (nonatomic, readonly) int animationCampaignVersion;
@property (nonatomic, readonly) int animationMaxCount;
@property (nonatomic, readonly) long long animationQuiescenceInterval;
@property (nonatomic, readonly) NSString *animationTitleLine1;
@property (nonatomic, readonly) NSString *animationTitleLine2;
@property (nonatomic, readonly) bool lohAnimationCompletesInArticle;
@property (nonatomic, readonly) bool lohAnimationEnabled;
@property (nonatomic, readonly) bool openArticlesAsModals;

- (void).cxx_destruct;
- (id)animationBody;
- (int)animationCampaignVersion;
- (int)animationMaxCount;
- (long long)animationQuiescenceInterval;
- (id)animationTitleLine1;
- (id)animationTitleLine2;
- (id)initWithConfigDictionary:(id)arg1;
- (bool)lohAnimationCompletesInArticle;
- (bool)lohAnimationEnabled;
- (bool)openArticlesAsModals;

@end
