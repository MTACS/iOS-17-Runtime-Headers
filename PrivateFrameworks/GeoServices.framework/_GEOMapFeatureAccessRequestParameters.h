
@interface _GEOMapFeatureAccessRequestParameters : NSObject {
    bool  allowNetworkTileLoad;
    bool  allowOfflineData;
    bool  allowStaleData;
    GEOApplicationAuditToken * auditToken;
    bool  cachedTilesCallbackImmediately;
    bool  flipNegativeTravelDirectionRoads;
    bool  joinAllRoadsByMuid;
    bool  preferStaleData;
    NSObject<OS_dispatch_queue> * queue;
    GEOTileLoader * tileLoader;
    bool  visitDoubleTravelDirectionRoadsTwice;
}

@property (nonatomic) bool allowNetworkTileLoad;
@property (nonatomic) bool allowOfflineData;
@property (nonatomic) bool allowStaleData;
@property (nonatomic, retain) GEOApplicationAuditToken *auditToken;
@property (nonatomic) bool cachedTilesCallbackImmediately;
@property (nonatomic) bool flipNegativeTravelDirectionRoads;
@property (nonatomic) bool joinAllRoadsByMuid;
@property (nonatomic) bool preferStaleData;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) GEOTileLoader *tileLoader;
@property (nonatomic) bool visitDoubleTravelDirectionRoadsTwice;

- (void).cxx_destruct;
- (bool)allowNetworkTileLoad;
- (bool)allowOfflineData;
- (bool)allowStaleData;
- (id)auditToken;
- (bool)cachedTilesCallbackImmediately;
- (bool)flipNegativeTravelDirectionRoads;
- (bool)joinAllRoadsByMuid;
- (bool)preferStaleData;
- (id)queue;
- (void)setAllowNetworkTileLoad:(bool)arg1;
- (void)setAllowOfflineData:(bool)arg1;
- (void)setAllowStaleData:(bool)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setCachedTilesCallbackImmediately:(bool)arg1;
- (void)setFlipNegativeTravelDirectionRoads:(bool)arg1;
- (void)setJoinAllRoadsByMuid:(bool)arg1;
- (void)setPreferStaleData:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setTileLoader:(id)arg1;
- (void)setVisitDoubleTravelDirectionRoadsTwice:(bool)arg1;
- (id)tileLoader;
- (bool)visitDoubleTravelDirectionRoadsTwice;

@end
