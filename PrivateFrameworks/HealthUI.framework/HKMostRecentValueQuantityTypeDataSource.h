
@interface HKMostRecentValueQuantityTypeDataSource : HKQuantityTypeDataSource {
    bool  _attenuated;
    NSCalendar * _currentCalendar;
}

@property (nonatomic) bool attenuated;
@property (nonatomic, retain) NSCalendar *currentCalendar;

- (void).cxx_destruct;
- (id)_dataSourceValueFromMostRecentQuantity:(id)arg1 quantityDateInterval:(id)arg2 statisticsInterval:(id)arg3;
- (bool)_interval:(id)arg1 isEqualToInterval:(id)arg2;
- (id)_intervalFromZoomLevel:(long long)arg1;
- (id)_intervalFromZoomLevel:(long long)arg1 resolution:(long long)arg2;
- (id)_middleDateFromInterval:(id)arg1 endDate:(id)arg2;
- (bool)attenuated;
- (id)currentCalendar;
- (id)initWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 currentCalendar:(id)arg4;
- (id)initWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 currentCalendar:(id)arg4 attenuated:(bool)arg5;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (void)setAttenuated:(bool)arg1;
- (void)setCurrentCalendar:(id)arg1;

@end
