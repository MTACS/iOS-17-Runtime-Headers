
@interface SADeviceRecord : NSObject <NSSecureCoding, SAWithYouDetectorClientProtocol> {
    <SAAnalyticsServiceProtocol> * _analytics;
    <SATimeServiceProtocol> * _clock;
    NSMutableDictionary * _deviceRecord;
    TALocationLite * _lastLocation;
}

@property (nonatomic, retain) <SAAnalyticsServiceProtocol> *analytics;
@property (nonatomic, retain) <SATimeServiceProtocol> *clock;
@property (nonatomic, retain) NSMutableDictionary *deviceRecord;
@property (nonatomic, retain) TALocationLite *lastLocation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_updateAllRelatedDevices;
- (void)_updateConnectionStateOnConnectionEvent:(id)arg1;
- (void)_updateDeviceRecordOnDeviceUpdateEvent:(id)arg1;
- (void)_updateLatestAdvertisement:(id)arg1;
- (void)_updateSingleDeviceRecordForDevice:(id)arg1;
- (id)analytics;
- (id)clock;
- (id)deviceRecord;
- (void)didForceUpdateWithYouStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)getAllUUIDs;
- (long long)getConnectionState:(id)arg1;
- (unsigned long long)getDeviceNotificationState:(id)arg1;
- (id)getLastCompanionDisconnectionDate:(id)arg1;
- (id)getLastWithYouDate:(id)arg1;
- (id)getLastWithYouLocation:(id)arg1;
- (id)getLatestAdvertisement:(id)arg1;
- (id)getLatestNOAdvertisement:(id)arg1;
- (id)getLatestWildAdvertisement:(id)arg1;
- (unsigned long long)getMonitoringSessionState:(id)arg1;
- (id)getRelatedDevices:(id)arg1;
- (id)getSADevice:(id)arg1;
- (unsigned long long)getScenarioClass:(id)arg1;
- (unsigned long long)getWithYouStatus:(id)arg1;
- (bool)hasDisconnectedDevices;
- (bool)hasSurfacedNotificationFor:(id)arg1;
- (void)ingestTAEvent:(id)arg1;
- (id)initWithClock:(id)arg1 analytics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)lastLocation;
- (void)resetAllWithYouStatus;
- (void)setAnalytics:(id)arg1;
- (void)setClock:(id)arg1;
- (void)setDeviceRecord:(id)arg1;
- (void)setLastLocation:(id)arg1;
- (void)updateLastWithYouDate:(id)arg1 forDeviceWithUUID:(id)arg2;
- (void)updateLastWithYouLocation:(id)arg1 forDeviceWithUUID:(id)arg2;
- (void)updateLatestAdvertisement:(id)arg1 forDeviceWithUUID:(id)arg2;
- (void)updateLocation:(id)arg1;
- (void)updateMonitoringSessionState:(unsigned long long)arg1 forDeviceWithUUID:(id)arg2;
- (void)updateScenario:(unsigned long long)arg1 forDeviceWithUUID:(id)arg2;
- (void)updatedWithYouStatusFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forDeviceWithUUID:(id)arg3;

@end
