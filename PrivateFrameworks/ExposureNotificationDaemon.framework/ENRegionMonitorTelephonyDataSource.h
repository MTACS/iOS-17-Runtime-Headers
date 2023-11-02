
@interface ENRegionMonitorTelephonyDataSource : NSObject <ENCoreTelephonyUtilityObserver, ENRegionMonitorDataSource> {
    ENRegionVisit * _cachedRegionVisit;
    NSObject<OS_dispatch_queue> * _dataSourceQueue;
    ENCoreTelephonyUtility * _telephonyUtility;
    NSObject<ENRegionMonitorSourceDelegate> * delegate;
}

@property (nonatomic, copy) ENRegionVisit *cachedRegionVisit;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dataSourceQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<ENRegionMonitorSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) ENCoreTelephonyUtility *telephonyUtility;

- (void).cxx_destruct;
- (id)cachedRegionVisit;
- (id)currentRegionVisit;
- (id)dataSourceQueue;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)mobileCountryCodeChanged:(id)arg1 withISOString:(id)arg2;
- (void)setCachedRegionVisit:(id)arg1;
- (void)setDataSourceQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTelephonyUtility:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)telephonyUtility;
- (void)telephonyUtility:(id)arg1 mobileCountryCodeChanged:(id)arg2 andCountryCodeISO:(id)arg3;

@end
