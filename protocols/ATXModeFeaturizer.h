
@protocol ATXModeFeaturizer <NSObject>

@required

- (void)beginListening;
- (<ATXModeFeaturizerDelegate> *)delegate;
- (ATXModeFeatureSet *)provideFeatures;
- (void)setDelegate:(id <ATXModeFeaturizerDelegate>)arg1;
- (void)stopListening;

@end
