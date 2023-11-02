
@interface FCNewsTabiEventAggregationConditions : NSObject {
    FCNewsTabiEventAggregationArticleDislikedConditions * _articleDislikedConditions;
    FCNewsTabiEventAggregationArticleLikedConditions * _articleLikedConditions;
    FCNewsTabiEventAggregationArticleReadConditions * _articleReadConditions;
    FCNewsTabiEventAggregationArticleSavedConditions * _articleSavedConditions;
    FCNewsTabiEventAggregationArticleSeenConditions * _articleSeenConditions;
    FCNewsTabiEventAggregationArticleSharedConditions * _articleSharedConditions;
    FCNewsTabiEventAggregationArticleUndislikedConditions * _articleUndislikedConditions;
    FCNewsTabiEventAggregationArticleUnlikedConditions * _articleUnlikedConditions;
    FCNewsTabiEventAggregationArticleUnsavedConditions * _articleUnsavedConditions;
    FCNewsTabiEventAggregationArticleVisitedConditions * _articleVisitedConditions;
    FCNewsTabiEventAggregationTrackFinishedConditions * _trackFinishedConditions;
    FCNewsTabiEventAggregationTrackListenedConditions * _trackListenedConditions;
    FCNewsTabiEventAggregationTrackVisitedConditions * _trackVisitedConditions;
}

@property (nonatomic, readonly) FCNewsTabiEventAggregationArticleDislikedConditions *articleDislikedConditions;
@property (nonatomic, readonly) FCNewsTabiEventAggregationArticleLikedConditions *articleLikedConditions;
@property (nonatomic, readonly) FCNewsTabiEventAggregationArticleReadConditions *articleReadConditions;
@property (nonatomic, readonly) FCNewsTabiEventAggregationArticleSavedConditions *articleSavedConditions;
@property (nonatomic, readonly) FCNewsTabiEventAggregationArticleSeenConditions *articleSeenConditions;
@property (nonatomic, readonly) FCNewsTabiEventAggregationArticleSharedConditions *articleSharedConditions;
@property (nonatomic, readonly) FCNewsTabiEventAggregationArticleUndislikedConditions *articleUndislikedConditions;
@property (nonatomic, readonly) FCNewsTabiEventAggregationArticleUnlikedConditions *articleUnlikedConditions;
@property (nonatomic, readonly) FCNewsTabiEventAggregationArticleUnsavedConditions *articleUnsavedConditions;
@property (nonatomic, readonly) FCNewsTabiEventAggregationArticleVisitedConditions *articleVisitedConditions;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) FCNewsTabiEventAggregationTrackFinishedConditions *trackFinishedConditions;
@property (nonatomic, readonly) FCNewsTabiEventAggregationTrackListenedConditions *trackListenedConditions;
@property (nonatomic, readonly) FCNewsTabiEventAggregationTrackVisitedConditions *trackVisitedConditions;

+ (id)readOnlyConditions;

- (void).cxx_destruct;
- (id)articleDislikedConditions;
- (id)articleLikedConditions;
- (id)articleReadConditions;
- (id)articleSavedConditions;
- (id)articleSeenConditions;
- (id)articleSharedConditions;
- (id)articleUndislikedConditions;
- (id)articleUnlikedConditions;
- (id)articleUnsavedConditions;
- (id)articleVisitedConditions;
- (id)dictionary;
- (id)initWithArticleSeenConditions:(id)arg1 articleReadConditions:(id)arg2 articleVisitedConditions:(id)arg3 articleSharedConditions:(id)arg4 articleLikedConditions:(id)arg5 articleDislikedConditions:(id)arg6 articleSavedConditions:(id)arg7 trackVisitedConditions:(id)arg8 trackListenedConditions:(id)arg9 trackFinishedConditions:(id)arg10 articleUnlikedConditions:(id)arg11 articleUndislikedConditions:(id)arg12 articleUnsavedConditions:(id)arg13;
- (id)initWithDictionary:(id)arg1;
- (id)trackFinishedConditions;
- (id)trackListenedConditions;
- (id)trackVisitedConditions;

@end
