
@interface HealthUI.StateOfMindCoordinateInfo : NSObject <HKGraphSeriesBlockCoordinateInfo, HKGraphSeriesChartData> {
    void dailyReflectiveCount;
    void dailyValenceRange;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dateInterval;
    void isSharingPreview;
    void momentaryReflectiveCount;
    void momentaryValenceRange;
}

- (void).cxx_destruct;
- (id)init;

@end
