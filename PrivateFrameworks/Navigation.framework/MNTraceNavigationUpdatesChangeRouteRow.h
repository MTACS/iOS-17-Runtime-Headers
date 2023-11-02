
@interface MNTraceNavigationUpdatesChangeRouteRow : MNTraceNavigationUpdatesRow {
    NSData * _directionsResponseID;
    NSData * _etauResponseID;
    unsigned long long  _reason;
    unsigned long long  _routeIndex;
}

@property (nonatomic, retain) NSData *directionsResponseID;
@property (nonatomic, retain) NSData *etauResponseID;
@property (nonatomic) unsigned long long reason;
@property (nonatomic) unsigned long long routeIndex;

- (void).cxx_destruct;
- (id)directionsResponseID;
- (id)etauResponseID;
- (long long)navigationUpdateType;
- (unsigned long long)reason;
- (unsigned long long)routeIndex;
- (void)setDirectionsResponseID:(id)arg1;
- (void)setEtauResponseID:(id)arg1;
- (void)setReason:(unsigned long long)arg1;
- (void)setRouteIndex:(unsigned long long)arg1;

@end
