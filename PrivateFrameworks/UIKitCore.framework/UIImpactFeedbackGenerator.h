
@interface UIImpactFeedbackGenerator : UIFeedbackGenerator <ASVFeedbackGenerator> {
    long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_impactConfiguration, nonatomic, readonly) _UIImpactFeedbackGeneratorConfiguration *impactConfiguration;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (Class)_configurationClass;

- (id)_impactConfiguration;
- (void)_impactOccurredWithIntensity:(double)arg1;
- (id)_stats_key;
- (id)_styleString;
- (id)_ui_descriptionBuilder;
- (void)impactOccurred;
- (void)impactOccurredWithIntensity:(double)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer

- (void)fire;
- (void)prepare;

@end
