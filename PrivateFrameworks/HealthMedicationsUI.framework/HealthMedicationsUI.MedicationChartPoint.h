
@interface HealthMedicationsUI.MedicationChartPoint : NSObject <HKChartPoint> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  endDate;
    void medication;
    void skippedCount;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  startDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  statisticsInterval;
    void takenCount;
    void windowSkippedCount;
    void windowTakenCount;
}

- (void).cxx_destruct;
- (id)allYValues;
- (id)init;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)userInfo;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
