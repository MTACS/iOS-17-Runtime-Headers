
@interface CKDZoneGatekeeper : NSObject {
    CKDZoneGatekeeperImplementation * _background;
    CKDZoneGatekeeperImplementation * _foreground;
}

@property (nonatomic, retain) CKDZoneGatekeeperImplementation *background;
@property (nonatomic, retain) CKDZoneGatekeeperImplementation *foreground;

+ (id)gatekeeperForContainerID:(id)arg1 accountID:(id)arg2;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (id)background;
- (id)foreground;
- (bool)hasStatusToReport;
- (id)initInternal;
- (void)registerWaiter:(id)arg1 forZoneIDs:(id)arg2 expectDelayBeforeRequestBegins:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)relinquishLocksForWaiter:(id)arg1 deferRelinquish:(bool)arg2;
- (void)setBackground:(id)arg1;
- (void)setForeground:(id)arg1;

@end
