
@interface _UICalendarViewDataSourceController : NSObject {
    NSCalendar * _calendar;
    UICollectionViewDiffableDataSource * _dataSource;
    _UIDatePickerCalendarDaySet * _loadedDaySet;
    _UIDatePickerCalendarMonthSet * _loadedMonthSet;
}

- (void).cxx_destruct;
- (id)_loadedDays;
- (id)_loadedMonths;
- (void)_reloadDataSourceWithScrollPosition:(id)arg1;
- (long long)cleanupDataSourceWithScrollPositionIfNecessary:(id)arg1;
- (id)initWithCalendar:(id)arg1 dataSource:(id)arg2;
- (long long)prepareDataSourceWithScrollPositionIfNecessary:(id)arg1;
- (void)reloadDataSourceAroundMonth:(id)arg1;

@end
