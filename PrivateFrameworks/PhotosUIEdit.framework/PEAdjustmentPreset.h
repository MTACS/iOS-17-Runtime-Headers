
@interface PEAdjustmentPreset : PEEditAction {
    NUComposition * _composition;
    NSDictionary * _serializedDictionary;
}

@property (nonatomic, readonly) long long autoType;
@property (nonatomic, retain) NUComposition *composition;
@property (nonatomic, readonly) bool isAutoEnhanceEnabled;
@property (nonatomic, readonly) bool needsGeometryAdjustments;
@property (nonatomic, readonly) NSDictionary *serializedDictionary;

+ (void)sanitizeCompositionController:(id)arg1;

- (void).cxx_destruct;
- (bool)_isCinematicEditSource:(id)arg1;
- (id)_serializeCompositionController:(id)arg1;
- (long long)actionType;
- (id)analyticsPayload;
- (void)applyToCompositionController:(id)arg1 editSource:(id)arg2 completion:(id /* block */)arg3;
- (void)applyToCompositionController:(id)arg1 invalidAdjustmentKeys:(id)arg2 completion:(id /* block */)arg3;
- (void)applyToLoadResult:(id)arg1 completion:(id /* block */)arg2;
- (long long)autoType;
- (id)composition;
- (id)initWithCompositionController:(id)arg1 asset:(id)arg2;
- (id)initWithPropertyListDictionary:(id)arg1;
- (bool)isAutoEnhanceEnabled;
- (bool)needsGeometryAdjustments;
- (id)serializedDictionary;
- (void)setComposition:(id)arg1;

@end
