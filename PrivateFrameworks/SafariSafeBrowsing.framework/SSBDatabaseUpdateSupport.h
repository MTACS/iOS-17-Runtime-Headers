
@interface SSBDatabaseUpdateSupport : NSObject {
    CTCarrierSpaceClient * _carrierSpaceClient;
    bool  _onHighCellularDataPlan;
}

@property (nonatomic, readonly) bool onHighCellularDataPlan;

- (void).cxx_destruct;
- (void)_fetchCellularDataPlan;
- (void)_fetchCellularDataPlanWithCompletionHandler:(id /* block */)arg1;
- (id)fetchCellularDataPlanSynchronously;
- (id)init;
- (bool)onHighCellularDataPlan;

@end
