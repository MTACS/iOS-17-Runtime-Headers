
@interface GEOEVChargerAvailability : NSObject {
    long long  _aggregatedAvailable;
    long long  _aggregatedTotal;
    unsigned long long  _availableEVChargers;
    GEOPDEVCharger * _charger;
    NSArray * _supportedTypes;
    unsigned long long  _totalEVChargers;
    unsigned long long  _ttlSeconds;
}

@property (getter=_availabilityStatus, nonatomic, readonly) int availabilityStatus;
@property (nonatomic) unsigned long long availableEVChargers;
@property (getter=_realTimePlugAvailabilityStatus, nonatomic, readonly) int realTimePlugAvailabilityStatus;
@property (nonatomic) unsigned long long totalEVChargers;
@property (nonatomic) unsigned long long ttlSeconds;

- (void).cxx_destruct;
- (int)_availabilityStatus;
- (void)_filterAggregatedChargers:(id)arg1;
- (int)_realTimePlugAvailabilityStatus;
- (int)_realTimePlugStatus:(int)arg1;
- (long long)aggregatedAvailableCount:(id)arg1;
- (long long)aggregatedTotalCount:(id)arg1;
- (unsigned long long)availableEVChargers;
- (id)initWithPlaceData:(id)arg1;
- (void)setAvailableEVChargers:(unsigned long long)arg1;
- (void)setTotalEVChargers:(unsigned long long)arg1;
- (void)setTtlSeconds:(unsigned long long)arg1;
- (unsigned long long)totalEVChargers;
- (unsigned long long)ttlSeconds;

@end
