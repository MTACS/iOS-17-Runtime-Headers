
@interface HealthRecordsUI.MedicalRecordChartDataSource : HKGraphSeriesDataSource {
    void cachedBucketedSets;
    void chartDefining;
    void chartableCodedQuantitySets;
    void chartableXRange;
    void chartableYRange;
    void collapseIntoRangePoints;
    void dataTransformer;
    void preferredColors;
    void type;
    void unit;
}

@property (nonatomic, readonly) NSString *displayName;

- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 context:(id)arg2;
- (id)chartDisplayTypeWithVerticalAxis:(id)arg1;
- (id)displayName;
- (id)init;
- (id)initWithConcept:(id)arg1 dataTransformer:(id)arg2 unit:(id)arg3 preferredColors:(id)arg4 collapseIntoRangePoints:(bool)arg5 type:(long long)arg6;

@end
