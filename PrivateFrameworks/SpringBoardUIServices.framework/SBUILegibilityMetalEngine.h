
@interface SBUILegibilityMetalEngine : NSObject <SBUILegibilityEngine> {
    long long  _algorithm;
    NSOperationQueue * _asyncOperationQueue;
    NSString * _engineIdentifier;
    NSMapTable * _enginesForSettingsForScreen;
    SBUILegibilityCache * _legibilityCache;
    UIScreen * _screen;
    bool  _useMinFillHeightForTemplateGeneration;
}

@property (nonatomic, readonly) long long algorithm;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool useMinFillHeightForTemplateGeneration;

- (void).cxx_destruct;
- (id)_findEngineConfigurationMatchingScreen:(id)arg1 settings:(id)arg2;
- (void)_teardownCaches:(id)arg1;
- (long long)algorithm;
- (id)applyStrength:(double)arg1 toImage:(id)arg2 settings:(id)arg3;
- (struct CGSize { double x1; double x2; })calculateShadowImageViewSizeForOriginalImage:(id)arg1 shadowImage:(id)arg2 settings:(id)arg3;
- (id)description;
- (id)executeAsyncLegibilityUpdateForContainer:(id)arg1 image:(id)arg2 settings:(id)arg3 strength:(double*)arg4 completion:(id /* block */)arg5;
- (void)executeLegibilityUpdateForContainer:(id)arg1 forImage:(id)arg2 settings:(id)arg3 strength:(double*)arg4 engineResult:(struct { bool x1; }*)arg5;
- (id)initWithEngineIdentifier:(id)arg1;
- (id)initWithEngineIdentifier:(id)arg1 algorithm:(long long)arg2;
- (void)prewarmForSettings:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 minSize:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;
- (void)setUseMinFillHeightForTemplateGeneration:(bool)arg1;
- (bool)useMinFillHeightForTemplateGeneration;

@end
