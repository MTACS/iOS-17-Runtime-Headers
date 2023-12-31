
@interface CKDZoneGatekeeperImplementation : NSObject {
    NSMutableArray * _waiterWrappers;
    NSMutableDictionary * _zoneIDsToGateHolders;
}

@property (nonatomic, retain) NSMutableArray *waiterWrappers;
@property (nonatomic, retain) NSMutableDictionary *zoneIDsToGateHolders;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (bool)hasStatusToReport;
- (id)init;
- (void)registerWaiter:(id)arg1 forZoneIDs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)relinquishLocksForWaiter:(id)arg1 deferRelinquish:(bool)arg2;
- (void)setWaiterWrappers:(id)arg1;
- (void)setZoneIDsToGateHolders:(id)arg1;
- (id)waiterWrappers;
- (id)zoneIDsToGateHolders;

@end
