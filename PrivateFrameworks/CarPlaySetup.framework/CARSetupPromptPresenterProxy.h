
@interface CARSetupPromptPresenterProxy : NSObject <CRSetupPromptPresenterService, NSProgressReporting> {
    CARSetupPromptDirector * _director;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CARSetupPromptDirector *director;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)director;
- (void)presentAllowWhileLockedPromptForVehicleName:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)presentConnectPromptWithResponseHandler:(id /* block */)arg1;
- (void)presentEnhancedIntegrationPromptForVehicleName:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)presentUseWirelessPromptWithResponseHandler:(id /* block */)arg1;
- (void)setDirector:(id)arg1;

@end
