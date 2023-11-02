
@interface iCloudQuotaUI.RecommendationsController : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _completedRecommendationsSection;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _loadingError;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _recommendationPage;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _recommendationSections;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _stillFetchingData;
    void account;
    void allRecommendations;
    void allSections;
    void analytics;
    void completedRecommendationController;
    void eligibleRecommendations;
    void recommendationRules;
    void recommendationTaskGroup;
    void recommendationsActionCache;
    void recommendationsDataFetcher;
    void recommendationsFilter;
    void rulesMap;
    void subtitleControllerDelegate;
    void templateHelper;
}

@property (nonatomic) <_TtP13iCloudQuotaUI40RecommendationSubtitleControllerDelegate_> *subtitleControllerDelegate;

- (void).cxx_destruct;
- (void)fetchAll;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (void)refresh;
- (void)setSubtitleControllerDelegate:(id)arg1;
- (id)subtitleControllerDelegate;

@end
