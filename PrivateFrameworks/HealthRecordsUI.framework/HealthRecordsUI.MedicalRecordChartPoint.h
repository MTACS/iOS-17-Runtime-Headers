
@interface HealthRecordsUI.MedicalRecordChartPoint : NSObject <HKChartPoint> {
    void blockCoordinateInfo;
    void chartableSet;
    void sortedYValues;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)allYValues;
- (id)description;
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
