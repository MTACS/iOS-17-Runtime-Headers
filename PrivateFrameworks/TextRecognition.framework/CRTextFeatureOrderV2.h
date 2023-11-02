
@interface CRTextFeatureOrderV2 : NSObject <CRTextFeatureOrdering> {
    double  _angleThresholdForRotatedCrops;
    long long  _textFeatureOrderMode;
}

@property double angleThresholdForRotatedCrops;
@property long long textFeatureOrderMode;

- (double)angleThresholdForRotatedCrops;
- (id)createCoarseCTLDConfig;
- (id)createFineCTLDConfig;
- (id)initWithAngleThresholdForRotatedCrops:(double)arg1;
- (id)orderAndGroupRegions:(id)arg1;
- (id)orderAndGroupRegions:(id)arg1 coarseDelegate:(id)arg2 fineDelegate:(id)arg3;
- (id)orderAndGroupRegions:(id)arg1 coarseDelegate:(id)arg2 fineDelegate:(id)arg3 coarseOnly:(bool)arg4;
- (id)orderAndGroupRegions:(id)arg1 tableGroups:(id)arg2;
- (id)rowOrderLinesFromTable:(id)arg1 cellGroups:(id)arg2 outSortedCellGroups:(id)arg3;
- (void)setAngleThresholdForRotatedCrops:(double)arg1;
- (void)setTextFeatureOrderMode:(long long)arg1;
- (long long)textFeatureOrderMode;

@end
