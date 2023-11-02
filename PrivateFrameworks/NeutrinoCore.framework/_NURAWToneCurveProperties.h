
@interface _NURAWToneCurveProperties : NSObject {
    NSData * _aggregateCurveData;
    NSData * _boostCurveData;
    NSNumber * _gainMapExposure;
    NSData * _localAverageCurveData;
    CIFilter * _rawGainTableMapFilter;
    CIFilter * _rawTRCFilter;
}

- (void).cxx_destruct;
- (float)_curveValueAt:(float)arg1 data:(id)arg2;
- (id)_generateCurveDataFromFilters:(id)arg1 sampleCount:(unsigned long long)arg2;
- (id)_generateGainMapExposure;
- (float)_inverseCurveValueAt:(float)arg1 data:(id)arg2;
- (id)aggregateCurveData;
- (float)baselineExposure;
- (id)boostCurveData;
- (float)boostCurveValueAt:(float)arg1;
- (id)initWithToneCurveFilter:(id)arg1 gainMapTableFilter:(id)arg2;
- (float)inverseAggregatedCurveValueAt:(float)arg1;
- (id)localAverageCurveData;

@end
