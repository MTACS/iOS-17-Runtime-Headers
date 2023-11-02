
@protocol RecommendationFlowController <NSObject>

@required

- (<RecommendationFlowControllerDelegate> *)cloudRecommendationsDelegate;
- (void)setCloudRecommendationsDelegate:(id <RecommendationFlowControllerDelegate>)arg1;

@end
