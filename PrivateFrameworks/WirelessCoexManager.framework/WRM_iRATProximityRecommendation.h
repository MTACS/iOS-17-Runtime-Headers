
@interface WRM_iRATProximityRecommendation : NSObject {
    int  _RecommendationType;
    bool  _linkIsRecommended;
    bool  _linkRecommendationIsValid;
    WRM_iRATProximityRecommendationLogging * _metrics;
}

@property (nonatomic) int RecommendationType;
@property (nonatomic) bool linkIsRecommended;
@property (nonatomic) bool linkRecommendationIsValid;
@property (nonatomic, retain) WRM_iRATProximityRecommendationLogging *metrics;

- (int)RecommendationType;
- (void)dealloc;
- (id)init;
- (bool)linkIsRecommended;
- (bool)linkRecommendationIsValid;
- (id)metrics;
- (void)setLinkIsRecommended:(bool)arg1;
- (void)setLinkRecommendationIsValid:(bool)arg1;
- (void)setMetrics:(id)arg1;
- (void)setRecommendationType:(int)arg1;

@end
