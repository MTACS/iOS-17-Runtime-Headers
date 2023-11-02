
@interface _PSShareSheetEphemeralFeatureManager : NSObject {
    NSArray * _caches;
    NSSet * _candidates;
    _PSPredictionContext * _context;
    NSSet * _features;
    _PSHistogramFeatureData * _histogramFeatureData;
    NSNumber * _histogramSmoothingParameterK;
    NSNumber * _histogramSmoothingParameterV;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    _CDInteractionStore * _store;
}

@property (nonatomic, retain) NSNumber *histogramSmoothingParameterK;
@property (nonatomic, retain) NSNumber *histogramSmoothingParameterV;

- (void).cxx_destruct;
- (id)callFeatureFunctionWithFeature:(int)arg1 histogramFeatureData:(id)arg2;
- (id)computeFeaturesWithHistogramFeatures:(id)arg1;
- (id)histogramSmoothingParameterK;
- (id)histogramSmoothingParameterV;
- (id)initWithContext:(id)arg1 candidates:(id)arg2 caches:(id)arg3 store:(id)arg4;
- (id)loadPSConfig;
- (void)setCandidates:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFeatureManagerProperties;
- (void)setHistogramSmoothingParameterK:(id)arg1;
- (void)setHistogramSmoothingParameterV:(id)arg1;

@end
