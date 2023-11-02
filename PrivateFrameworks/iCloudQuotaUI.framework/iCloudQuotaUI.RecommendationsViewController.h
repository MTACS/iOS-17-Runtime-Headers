
@interface iCloudQuotaUI.RecommendationsViewController : ICQUIRecommendationsRestorableViewController <UIAdaptivePresentationControllerDelegate> {
    void mailAccountProvider;
}

- (void).cxx_destruct;
- (void)cancelledRecommendation:(id)arg1;
- (void)completedRecommendation:(id)arg1 storageRecovered:(id)arg2;
- (void)enableMessagesDataclassForRecommendation:(id)arg1;
- (void)enablePrivateRelayForRecommendation:(id)arg1;
- (void)handlePostFamilySharingFlowChecks:(id)arg1 familyCircle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setupiCloudEmailForRecommendation:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
