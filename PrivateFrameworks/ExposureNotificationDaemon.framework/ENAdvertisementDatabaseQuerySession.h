
@interface ENAdvertisementDatabaseQuerySession : NSObject {
    unsigned char  _attenuationThreshold;
    ENAdvertisementDatabase * _database;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _storedAdvertisementCount;
    unsigned int  _tekCount;
}

@property (nonatomic, readonly) unsigned char attenuationThreshold;
@property (nonatomic, readonly) ENAdvertisementDatabase *database;
@property (nonatomic, readonly) unsigned int storedAdvertisementCount;

- (void).cxx_destruct;
- (unsigned char)attenuationThreshold;
- (id)beaconCountMetricsWithStartDate:(id)arg1 endDate:(id)arg2 windowDuration:(double)arg3 error:(id*)arg4;
- (id)database;
- (void)dealloc;
- (bool)enumerateAdvertisementsMatchingKeys:(id)arg1 attenuationThreshold:(unsigned char)arg2 timestampTolerance:(double)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
- (id)initWithDatabase:(id)arg1 attenuationThreshold:(unsigned char)arg2 advertisementCount:(unsigned int)arg3 queue:(id)arg4;
- (void)invalidate;
- (unsigned int)storedAdvertisementCount;

@end
