
@interface SAPowerLog : NSObject <SAPowerLogServiceProtocol> {
    unsigned long long  _btScanCount;
    NSHashTable * _clients;
    <SATimeServiceProtocol> * _clock;
    unsigned long long  _geofenceCount;
    unsigned long long  _gpsLocationRequestCount;
    NSMutableSet * _monitoredDevices;
    unsigned long long  _separationAlertsCount;
    NSDate * _startTimestamp;
    double  _totalVisitDuration;
    unsigned long long  _visitCount;
    unsigned long long  _wifiLocationRequestCount;
}

@property (nonatomic) unsigned long long btScanCount;
@property (nonatomic, retain) NSHashTable *clients;
@property (nonatomic, retain) <SATimeServiceProtocol> *clock;
@property (nonatomic) unsigned long long geofenceCount;
@property (nonatomic) unsigned long long gpsLocationRequestCount;
@property (nonatomic, retain) NSMutableSet *monitoredDevices;
@property (nonatomic) unsigned long long separationAlertsCount;
@property (nonatomic, retain) NSDate *startTimestamp;
@property (nonatomic) double totalVisitDuration;
@property (nonatomic) unsigned long long visitCount;
@property (nonatomic) unsigned long long wifiLocationRequestCount;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (void)addMonitoredDevice:(id)arg1;
- (unsigned long long)btScanCount;
- (id)clients;
- (id)clock;
- (unsigned long long)geofenceCount;
- (unsigned long long)gpsLocationRequestCount;
- (void)increaseBTScanCount;
- (void)increaseGeofenceCount;
- (void)increaseGpsLocationRequestCount;
- (void)increaseSeparationAlertsCount:(unsigned long long)arg1;
- (void)increaseWifiLocationRequestCount;
- (void)ingestTAEvent:(id)arg1;
- (id)initWithClock:(id)arg1;
- (id)monitoredDevices;
- (void)removeClient:(id)arg1;
- (void)resetStatistics;
- (void)sendPowerLog;
- (unsigned long long)separationAlertsCount;
- (void)setBtScanCount:(unsigned long long)arg1;
- (void)setClients:(id)arg1;
- (void)setClock:(id)arg1;
- (void)setGeofenceCount:(unsigned long long)arg1;
- (void)setGpsLocationRequestCount:(unsigned long long)arg1;
- (void)setMonitoredDevices:(id)arg1;
- (void)setSeparationAlertsCount:(unsigned long long)arg1;
- (void)setStartTimestamp:(id)arg1;
- (void)setTotalVisitDuration:(double)arg1;
- (void)setVisitCount:(unsigned long long)arg1;
- (void)setWifiLocationRequestCount:(unsigned long long)arg1;
- (id)startTimestamp;
- (double)totalVisitDuration;
- (unsigned long long)visitCount;
- (unsigned long long)wifiLocationRequestCount;

@end
