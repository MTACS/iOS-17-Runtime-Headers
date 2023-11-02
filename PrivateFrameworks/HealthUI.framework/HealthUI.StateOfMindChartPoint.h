
@interface HealthUI.StateOfMindChartPoint : NSObject <HKChartPoint> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_dateIntervalMidpoint;
    void $__lazy_storage_$_totalSampleCount;
    void buckets;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dateInterval;
    void isSharingPreview;
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
