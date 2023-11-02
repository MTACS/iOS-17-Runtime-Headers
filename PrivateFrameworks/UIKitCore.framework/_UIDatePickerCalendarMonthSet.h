
@interface _UIDatePickerCalendarMonthSet : NSObject {
    NSCalendar * _calendar;
    NSMutableIndexSet * _loadedMonthOffsets;
    NSMutableOrderedSet * _loadedMonths;
    unsigned long long  _rangeLength;
    _UIDatePickerCalendarMonth * _referenceMonth;
}

- (void).cxx_destruct;
- (void)_clearLoadedData;
- (void)_ensureReferenceMonthWithFallbackMonth:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_loadOffsetRange:(struct __UISignedRange { long long x1; unsigned long long x2; })arg1;
- (id)_monthAtOffset:(long long)arg1;
- (struct __UISignedRange { long long x1; unsigned long long x2; })_offsetRangeForMonth:(id)arg1;
- (unsigned long long)_shiftReferenceMonthToFitOffsetMonthsIfNecessary:(struct __UISignedRange { long long x1; unsigned long long x2; })arg1;
- (unsigned long long)indexOfMonth:(id)arg1;
- (id)initWithCalendar:(id)arg1 rangeLength:(unsigned long long)arg2;
- (void)insertMonthsAroundMonth:(id)arg1 loadedIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)loadedMonths;
- (id)monthAtIndex:(unsigned long long)arg1;
- (void)reloadWithMonthsAroundMonth:(id)arg1;

@end
