
@interface PHASETransmissionModelerView : NSObject {
    PHASEEngine * _engine;
}

@property (nonatomic) PHASEEngine *engine;

- (void).cxx_destruct;
- (void)beginTrackingAudibleGeometryForSource:(id)arg1 callback:(id /* block */)arg2;
- (void)beginTrackingSource:(id)arg1 callback:(id /* block */)arg2;
- (void)endTrackingAudibleGeometryForSource:(id)arg1;
- (void)endTrackingSource:(id)arg1;
- (id)engine;
- (id)initWithEngine:(id)arg1;
- (void)overrideGeometrySubdivisionForSource:(id)arg1 subdivideGeometry:(bool)arg2;
- (void)overrideMaximumSampleCountForSource:(id)arg1 count:(long long)arg2;
- (void)overrideSampleHistoryLengthForSource:(id)arg1 length:(long long)arg2;
- (void)overrideSampleSubdivisionIndexForSource:(id)arg1 index:(long long)arg2;
- (void)setEngine:(id)arg1;

@end
