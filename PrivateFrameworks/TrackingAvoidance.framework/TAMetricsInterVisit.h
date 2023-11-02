
@interface TAMetricsInterVisit : NSObject <TAMetricsProtocol> {
    TAInterVisitMetricPerDevice * _currentInterVisitMetric;
    TAInterVisitMetricPerDevice * _totalInterVisitMetric;
}

@property (nonatomic, readonly) TAInterVisitMetricPerDevice *currentInterVisitMetric;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TASPAdvertisement *latestAdvertisement;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TAInterVisitMetricPerDevice *totalInterVisitMetric;

- (void).cxx_destruct;
- (id)currentInterVisitMetric;
- (id)description;
- (id)descriptionDictionary;
- (unsigned long long)getMetricsCollectionType;
- (id)init;
- (id)latestAdvertisement;
- (id)totalInterVisitMetric;

@end
