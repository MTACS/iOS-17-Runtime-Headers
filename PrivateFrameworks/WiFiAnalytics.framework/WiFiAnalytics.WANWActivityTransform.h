
@interface WiFiAnalytics.WANWActivityTransform : NSObject {
    void early;
    void includeStdDev;
    void issues;
    void later;
    void measurement;
    void shorthandConstantStats;
    void singleFragment;
    void timeOffset;
}

- (void).cxx_destruct;
- (id)expandKeyNameLengthsFrom:(id)arg1;
- (id)getTransformedMeasurementForLogging;
- (id)getTransformedMeasurementForTelemetryWithIndex:(unsigned int)arg1;
- (id)getTransformedMeasurementWithIndex:(unsigned int)arg1;
- (id)init;
- (id)initWithLater:(id)arg1 early:(id)arg2;
- (id)initWithSingle:(id)arg1;
- (id)trimKeyNameLengthsFrom:(id)arg1;

@end
