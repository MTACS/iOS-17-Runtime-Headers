
@interface PLDateRangeTitleGenerator : NSObject {
    PLLazyObject * _lazyDateRangeFormatter;
    PLLazyObject * _lazyMonthYearDateRangeFormatter;
    PLLazyObject * _lazyRecentDateRangeFormatter;
    PLLazyObject * _lazyShortMonthYearDateRangeFormatter;
    PLLazyObject * _lazyYearDateRangeFormatter;
    PLLazyObject * _lazyYearlessDateRangeFormatter;
    NSLocale * _locale;
}

- (void).cxx_destruct;
- (id)dateRangeFormatter;
- (id)dateRangeFormatterForCategory:(unsigned short)arg1 kind:(unsigned short)arg2 options:(unsigned long long)arg3;
- (id)dateRangeTitleWithStartDate:(id)arg1 endDate:(id)arg2 category:(unsigned short)arg3 kind:(unsigned short)arg4;
- (id)dateRangeTitleWithStartDate:(id)arg1 endDate:(id)arg2 category:(unsigned short)arg3 kind:(unsigned short)arg4 options:(unsigned long long)arg5;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)monthYearDateRangeFormatter;
- (id)newDateRangeFormatter;
- (id)newMonthYearDateRangeFormatter;
- (id)newRecentDateRangeFormatter;
- (id)newShortMonthYearDateRangeFormatter;
- (id)newYearDateRangeFormatter;
- (id)newYearlessDateRangeFormatter;
- (id)recentDateRangeFormatter;
- (id)shortMonthYearDateRangeFormatter;
- (id)yearDateRangeFormatter;
- (id)yearlessDateRangeFormatter;

@end
