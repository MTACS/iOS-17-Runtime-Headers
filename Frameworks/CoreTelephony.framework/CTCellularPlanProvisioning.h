
@interface CTCellularPlanProvisioning : NSObject {
    CoreTelephonyClient * _client;
    bool  _supportsEmbeddedSIM;
}

@property (nonatomic, readonly) bool supportsEmbeddedSIM;

- (void).cxx_destruct;
- (void)addPlanWith:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (bool)supportsCellularPlan;
- (bool)supportsEmbeddedSIM;

@end
