
@interface PIPortraitAutoCalculator : NUAutoCalculator <PIFaceObservingAutoCalculator> {
    PIFaceObservationCache * _faceObservationCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PIFaceObservationCache *faceObservationCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canApplyPortraitEffectsWithMetadata:(id)arg1;
+ (id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3 valuesAtCapture:(id)arg4;
+ (id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 valuesAtCapture:(id)arg2 lumaNoiseScale:(float)arg3 orientation:(long long)arg4;
+ (id)focusRectDictionaryFromMetadata:(id)arg1;
+ (id)focusRectDictionaryFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (bool)isStillImageDisparity:(id)arg1;
+ (id)portraitEffectInfoDictionaryFromFaceObservations:(id)arg1 orientation:(long long)arg2 valuesAtCapture:(id)arg3;
+ (id)portraitInfoDictionaryFromCameraMetadata:(id)arg1;
+ (id)portraitInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3 valuesAtCapture:(id)arg4;

- (void).cxx_destruct;
- (void)_calculateWithImageProperties:(id)arg1 valuesAtCapture:(id)arg2 completion:(id /* block */)arg3;
- (id)faceObservationCache;
- (void)setFaceObservationCache:(id)arg1;
- (void)submit:(id /* block */)arg1;

@end
