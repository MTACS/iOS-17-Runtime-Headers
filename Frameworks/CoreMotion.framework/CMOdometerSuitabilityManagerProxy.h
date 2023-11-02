
@interface CMOdometerSuitabilityManagerProxy : NSObject {
    CMOdometerSuitabilityManager * _odometerSuitabilityManager;
    double  _startDate;
    double  _suitableForRunning;
    double  _suitableForWalking;
    NSObject<OS_dispatch_queue> * fCallbackQueue;
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
}

@property (nonatomic) CMOdometerSuitabilityManager *odometerSuitabilityManager;
@property double startDate;
@property double suitableForRunning;
@property double suitableForWalking;

- (void)_startDaemonConnection;
- (void)_startOdometerSuitabilityUpdatesWithHandler:(id /* block */)arg1;
- (void)_stopOdometerSuitabilityUpdates;
- (void)_teardown;
- (void)dealloc;
- (id)initWithOdometerSuitability:(id)arg1;
- (id)odometerSuitabilityManager;
- (void)setOdometerSuitabilityManager:(id)arg1;
- (void)setStartDate:(double)arg1;
- (void)setSuitableForRunning:(double)arg1;
- (void)setSuitableForWalking:(double)arg1;
- (double)startDate;
- (double)suitableForRunning;
- (double)suitableForWalking;

@end
