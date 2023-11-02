
@interface AKAppleIDServerUIDataHarvester : NSObject {
    NSMutableDictionary * _harvestedData;
}

@property (nonatomic, readonly, copy) NSDictionary *harvestedData;

- (void).cxx_destruct;
- (void)_harvestDataFromClientInfo:(id)arg1 withExtractor:(id)arg2;
- (void)_harvestIDMSRecoveryHeadersInfo:(id)arg1;
- (void)harvestDataFromCompanionResponse:(id)arg1;
- (void)harvestDataFromServerHTTPResponse:(id)arg1;
- (void)harvestDataFromServerUIObjectModel:(id)arg1;
- (void)harvestIDMSRecoveryInfoFromClientInfo:(id)arg1;
- (void)harvestIDMSRecoveryInfoFromHeaders:(id)arg1;
- (id)harvestedData;
- (id)init;

@end
