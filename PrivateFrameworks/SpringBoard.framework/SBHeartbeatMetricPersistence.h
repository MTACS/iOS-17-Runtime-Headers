
@interface SBHeartbeatMetricPersistence : NSObject {
    double  _persistenceDelay;
    double  _persistenceLeeway;
    NSURL * _persistenceURL;
    NSObject<OS_dispatch_queue> * _queue;
    NSCalendar * _queue_calendar;
    NSISO8601DateFormatter * _queue_dateFormatter;
    NSMutableDictionary * _queue_metricsByDatestamp;
    NSObject<OS_dispatch_source> * _queue_persistenceTimer;
}

@property (nonatomic, readonly, copy) NSDictionary *metricsByDatestamp;
@property (nonatomic, readonly) double persistenceDelay;
@property (nonatomic, readonly) double persistenceLeeway;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;

+ (id)defaultPersistenceURL;

- (void).cxx_destruct;
- (void)_queue_initializeIfNeeded;
- (void)_queue_scheduleWriteIfNeeded;
- (bool)_queue_writeToPersistenceURL;
- (id)init;
- (id)initWithPersistenceURL:(id)arg1 persistenceDelay:(double)arg2 persistenceLeeway:(double)arg3;
- (id)metricsByDatestamp;
- (void)migrateDataFromDefaultsIfNeeded:(id)arg1;
- (double)persistenceDelay;
- (double)persistenceLeeway;
- (id)persistenceURL;
- (void)trackInteractionWithFeatureNamed:(id)arg1;
- (void)trackInteractionWithFeatureNamed:(id)arg1 duration:(double)arg2;

@end
