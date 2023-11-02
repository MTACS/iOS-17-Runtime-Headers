
@interface HealthMedicationsUI.MedicationChartUserInfo : NSObject <HKGraphSeriesChartData> {
    void medication;
    void skippedCount;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  statisticsInterval;
    void takenCount;
    void windowSkippedCount;
    void windowTakenCount;
}

- (void).cxx_destruct;
- (id)init;

@end
