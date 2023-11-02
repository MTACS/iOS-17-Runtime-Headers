
@interface STUsageDetailsViewModel : NSObject {
    NSArray * _dayUsageReportByWeekdays;
    bool  _hasAggregateUsageData;
    bool  _hasDeviceActivityData;
    NSDate * _lastUpdatedDate;
    bool  _localDevice;
    NSArray * _rawUsageItems;
    NSString * _selectedCoreDuetIdentifier;
    unsigned long long  _selectedDay;
    STUsageReport * _selectedDayUsageReport;
    NSString * _selectedItemDisplayName;
    unsigned long long  _selectedWeek;
    STUsageReport * _selectedWeekUsageReport;
    NSArray * _weekUsageReports;
}

@property (copy) NSArray *dayUsageReportByWeekdays;
@property bool hasAggregateUsageData;
@property bool hasDeviceActivityData;
@property (nonatomic, readonly) bool hasUsageData;
@property (copy) NSDate *lastUpdatedDate;
@property (getter=isLocalDevice) bool localDevice;
@property (copy) NSArray *rawUsageItems;
@property (copy) NSString *selectedCoreDuetIdentifier;
@property (nonatomic) unsigned long long selectedDay;
@property (retain) STUsageReport *selectedDayUsageReport;
@property (copy) NSString *selectedItemDisplayName;
@property (readonly) STUsageReport *selectedUsageReport;
@property (nonatomic) unsigned long long selectedWeek;
@property (retain) STUsageReport *selectedWeekUsageReport;
@property (copy) NSArray *weekUsageReports;

+ (void)_enumerateDayReportStartDatesWithStartOfWeek:(id)arg1 ascending:(bool)arg2 block:(id /* block */)arg3;
+ (void)_enumerateWeeklyReportStartDatesWithReferenceDate:(id)arg1 ascending:(bool)arg2 block:(id /* block */)arg3;
+ (id)keyPathsForValuesAffectingHasUsageData;
+ (id)keyPathsForValuesAffectingSelectedUsageReport;

- (void).cxx_destruct;
- (unsigned long long)_mostRecentAvailableWeekday;
- (id)dayUsageReportByWeekdays;
- (bool)hasAggregateUsageData;
- (bool)hasDeviceActivityData;
- (bool)hasUsageData;
- (id)init;
- (bool)isLocalDevice;
- (id)lastUpdatedDate;
- (id)rawUsageItems;
- (void)selectToday;
- (id)selectedCoreDuetIdentifier;
- (unsigned long long)selectedDay;
- (id)selectedDayUsageReport;
- (id)selectedItemDisplayName;
- (id)selectedUsageReport;
- (unsigned long long)selectedWeek;
- (id)selectedWeekUsageReport;
- (void)setDayUsageReportByWeekdays:(id)arg1;
- (void)setHasAggregateUsageData:(bool)arg1;
- (void)setHasDeviceActivityData:(bool)arg1;
- (void)setLastUpdatedDate:(id)arg1;
- (void)setLocalDevice:(bool)arg1;
- (void)setRawUsageItems:(id)arg1;
- (void)setSelectedCoreDuetIdentifier:(id)arg1;
- (void)setSelectedDay:(unsigned long long)arg1;
- (void)setSelectedDayUsageReport:(id)arg1;
- (void)setSelectedItemDisplayName:(id)arg1;
- (void)setSelectedWeek:(unsigned long long)arg1;
- (void)setSelectedWeek:(unsigned long long)arg1 selectedDay:(unsigned long long)arg2;
- (void)setSelectedWeekUsageReport:(id)arg1;
- (void)setWeekReportUsageItems:(id)arg1 weekStartDate:(id)arg2 lastUpdatedDate:(id)arg3;
- (void)setWeekUsageReports:(id)arg1;
- (id)weekUsageReports;

@end
