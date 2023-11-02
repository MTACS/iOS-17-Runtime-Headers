
@interface TSTransferCloudFlowModel : NSObject {
    CTDisplayPlanList * _carrierSetupItems;
    CTDisplayPlanList * _crossPlatformTransferItems;
    bool  _isActivationPolicyMismatch;
    bool  _isDualeSIMCapablityLoss;
    NSDictionary * _postdata;
    NSObject<OS_dispatch_group> * _queryGroup;
    NSMutableArray * _transferItems;
    NSString * _websheetUrl;
}

@property (nonatomic, retain) CTDisplayPlanList *carrierSetupItems;
@property (nonatomic, retain) CTDisplayPlanList *crossPlatformTransferItems;
@property (nonatomic) bool isActivationPolicyMismatch;
@property (nonatomic) bool isDualeSIMCapablityLoss;
@property (nonatomic, retain) NSDictionary *postdata;
@property (nonatomic, retain) NSMutableArray *transferItems;
@property (nonatomic, retain) NSString *websheetUrl;

- (void).cxx_destruct;
- (void)arePlansAvailable:(id /* block */)arg1;
- (id)carrierSetupItems;
- (id)crossPlatformTransferItems;
- (void)filterCarrierSetupItems:(id)arg1;
- (void)filterTransferPlans:(id)arg1;
- (void)getWebsheetInfo:(id)arg1 completion:(id /* block */)arg2;
- (bool)isActivationPolicyMismatch;
- (bool)isDualeSIMCapablityLoss;
- (id)postdata;
- (void)requestCarrierSetups:(id /* block */)arg1;
- (void)requestCrossPlatformTransferPlanListWithCompletion:(id /* block */)arg1;
- (void)requestPlansWithCompletion:(id /* block */)arg1;
- (void)requestTransferPlans:(id /* block */)arg1;
- (void)setCarrierSetupItems:(id)arg1;
- (void)setCrossPlatformTransferItems:(id)arg1;
- (void)setIsActivationPolicyMismatch:(bool)arg1;
- (void)setIsDualeSIMCapablityLoss:(bool)arg1;
- (void)setPostdata:(id)arg1;
- (void)setTransferItems:(id)arg1;
- (void)setWebsheetUrl:(id)arg1;
- (bool)shouldShowCarrierSetupPane;
- (id)transferItems;
- (id)websheetUrl;

@end
