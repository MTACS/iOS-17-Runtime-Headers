
@interface HealthRecordsUI.SingleValueChartData : HKInteractiveChartSinglePointData <HKGraphSeriesChartData> {
    void chartableQuantitySet;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  date;
    void dateFormat;
    void hasTime;
    void partOfOutOfRangeSeries;
}

- (void).cxx_destruct;
- (id)init;

@end
