
@interface ICQUIReviewLargeFilesFlowController : UIViewController <RecommendationFlowController, UIAdaptivePresentationControllerDelegate> {
    <RecommendationFlowControllerDelegate> * _cloudRecommendationsDelegate;
    NSNumber * _storageRecovered;
}

@property (nonatomic) <RecommendationFlowControllerDelegate> *cloudRecommendationsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *storageRecovered;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cloudRecommendationsDelegate;
- (long long)modalPresentationStyle;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setCloudRecommendationsDelegate:(id)arg1;
- (void)setStorageRecovered:(id)arg1;
- (id)storageRecovered;
- (void)viewDidLoad;

@end
