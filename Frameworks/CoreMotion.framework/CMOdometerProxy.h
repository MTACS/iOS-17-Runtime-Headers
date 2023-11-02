
@interface CMOdometerProxy : NSObject {
    double  _averageSpeed;
    double  _cyclingStartDate;
    CMOdometer * _odometer;
    double  _startDate;
    double  _totalCyclingDistance;
    double  _totalDistance;
    NSObject<OS_dispatch_queue> * fCallbackQueue;
    long long  fGpsAvailability;
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
}

@property double averageSpeed;
@property double cyclingStartDate;
@property (nonatomic) CMOdometer *odometer;
@property double startDate;
@property double totalCyclingDistance;
@property double totalDistance;

- (void)_startCyclingWorkoutDistanceUpdatesWithHandler:(id /* block */)arg1;
- (void)_startDaemonConnection;
- (void)_startOdometerUpdatesWithHandler:(id /* block */)arg1;
- (void)_stopCyclingWorkoutDistanceUpdates;
- (void)_stopOdometerGpsAvailability;
- (void)_stopOdometerUpdates;
- (void)_teardown;
- (double)averageSpeed;
- (double)cyclingStartDate;
- (void)dealloc;
- (id)initWithOdometer:(id)arg1;
- (id)odometer;
- (void)setAverageSpeed:(double)arg1;
- (void)setCyclingStartDate:(double)arg1;
- (void)setOdometer:(id)arg1;
- (void)setStartDate:(double)arg1;
- (void)setTotalCyclingDistance:(double)arg1;
- (void)setTotalDistance:(double)arg1;
- (double)startDate;
- (double)totalCyclingDistance;
- (double)totalDistance;

@end
