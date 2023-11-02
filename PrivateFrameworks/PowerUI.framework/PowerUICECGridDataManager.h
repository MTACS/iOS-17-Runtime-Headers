
@interface PowerUICECGridDataManager : NSObject {
    NSMutableArray * _cleanIntervals;
    _GDSEmissionForecast * _currentForecast;
    NSUserDefaults * _defaults;
    _GDSManager * _gridManager;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    double  _refetchPeriod;
    bool  _tChargeNow;
    bool  _tSavingOpportunity;
}

@property (nonatomic, readonly) NSMutableArray *cleanIntervals;
@property (nonatomic, retain) _GDSEmissionForecast *currentForecast;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, retain) _GDSManager *gridManager;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double refetchPeriod;
@property (nonatomic) bool tChargeNow;
@property (nonatomic) bool tSavingOpportunity;

+ (id)cleanIntervalsStringFromDates:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)cleanIntervals;
- (id)currentForecast;
- (id)defaults;
- (bool)enoughVariationForForecast:(id)arg1;
- (id)fetchForecast;
- (id)forecastMapFrom:(id)arg1 ofInterval:(double)arg2;
- (id)gridManager;
- (id)init;
- (id)log;
- (id)queue;
- (double)refetchPeriod;
- (void)resetState;
- (void)setCurrentForecast:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setGridManager:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRefetchPeriod:(double)arg1;
- (void)setTChargeNow:(bool)arg1;
- (void)setTSavingOpportunity:(bool)arg1;
- (void)setupChargingTime:(double)arg1 forPluggedInTime:(double)arg2;
- (bool)shouldChargeNow;
- (bool)shouldEngageForPluggedInTime:(double)arg1;
- (bool)tChargeNow;
- (bool)tSavingOpportunity;
- (unsigned long long)thresholdFromForecast:(id)arg1 forChargeTime:(double)arg2;
- (id)valuesFromForecast:(id)arg1 forInterval:(double)arg2;

@end
