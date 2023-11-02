
@interface NeighborGraph : NSObject {
    NSArray * _bssids;
    NSMutableArray * _bssidsDwellTimes;
    NSMutableArray * _graph;
    AnalyticsStoreMOHandler * _managedObjectHandler;
    NSString * _ssid;
}

@property (nonatomic, retain) NSArray *bssids;
@property (nonatomic, retain) NSMutableArray *bssidsDwellTimes;
@property (nonatomic, retain) NSMutableArray *graph;
@property (nonatomic, retain) AnalyticsStoreMOHandler *managedObjectHandler;
@property (nonatomic, retain) NSString *ssid;

- (void).cxx_destruct;
- (id)bssids;
- (id)bssidsDwellTimes;
- (id)copyNeighborGraphAsDictionary;
- (bool)doesPathExist:(id)arg1 target:(id)arg2;
- (id)graph;
- (unsigned long long)graphDensity;
- (id)initWithBssidArray:(id)arg1 ssid:(id)arg2 handler:(id)arg3;
- (id)managedObjectHandler;
- (void)setBssids:(id)arg1;
- (void)setBssidsDwellTimes:(id)arg1;
- (void)setGraph:(id)arg1;
- (void)setManagedObjectHandler:(id)arg1;
- (void)setNeighborsForBssid:(id)arg1 dwellTime:(unsigned long long)arg2 neighborInfoArray:(id)arg3;
- (void)setNeighborsForBssid:(id)arg1 neighbors:(id)arg2;
- (void)setSsid:(id)arg1;
- (id)ssid;

@end
