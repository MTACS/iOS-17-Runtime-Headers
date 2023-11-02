
@interface TAMetricsVisit : NSObject <TAMetricsProtocol> {
    NSData * _address;
    unsigned long long  _consecutiveAndDistinctFromPrevVisitCount;
    unsigned long long  _consecutiveVisitCount;
    NSNumber * _distanceToPreviousSeenVisit;
    double  _durationOfVisitEntryConsideration;
    double  _durationOfVisitExitConsideration;
    TASPAdvertisement * _latestAdvertisement;
    double  _latitude;
    double  _longitude;
    unsigned long long  _totalDistinctVisitCount;
    unsigned long long  _totalVisitCount;
    NSDateInterval * _visitEntryDelay;
    NSDateInterval * _visitExitDelay;
}

@property (nonatomic, readonly) NSData *address;
@property (nonatomic, readonly) unsigned long long consecutiveAndDistinctFromPrevVisitCount;
@property (nonatomic, readonly) unsigned long long consecutiveVisitCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *distanceToPreviousSeenVisit;
@property (nonatomic, readonly) double durationOfVisitEntryConsideration;
@property (nonatomic, readonly) double durationOfVisitExitConsideration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TASPAdvertisement *latestAdvertisement;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalDistinctVisitCount;
@property (nonatomic, readonly) unsigned long long totalVisitCount;
@property (nonatomic, readonly) NSDateInterval *visitEntryDelay;
@property (nonatomic, readonly) NSDateInterval *visitExitDelay;

- (void).cxx_destruct;
- (id)address;
- (unsigned long long)consecutiveAndDistinctFromPrevVisitCount;
- (unsigned long long)consecutiveVisitCount;
- (id)description;
- (id)descriptionDictionary;
- (id)distanceToPreviousSeenVisit;
- (double)durationOfVisitEntryConsideration;
- (double)durationOfVisitExitConsideration;
- (unsigned long long)getMetricsCollectionType;
- (id)initWithSnapshotHistory:(id)arg1 andAddress:(id)arg2 andVisitFilterSettings:(id)arg3;
- (id)latestAdvertisement;
- (double)latitude;
- (double)longitude;
- (unsigned long long)totalDistinctVisitCount;
- (unsigned long long)totalVisitCount;
- (id)visitEntryDelay;
- (id)visitExitDelay;

@end
