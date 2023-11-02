
@interface SBVolumeButtonEventMapper : NSObject <SBUIActiveOrientationObserver> {
    unsigned long long  _buttonsEdge;
    long long  _effectiveInterfaceOrientation;
    long long  _layoutDirection;
    bool  _volumeButtonRemappingEnabled;
}

@property (nonatomic) unsigned long long buttonsEdge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long effectiveInterfaceOrientation;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutDirection;
@property (readonly) Class superclass;
@property (getter=isVolumeButtonRemappingEnabled, nonatomic) bool volumeButtonRemappingEnabled;

+ (bool)_shouldInvertVolumeButtonsForLTRRightEdgePadInInterfaceOrientation:(long long)arg1;
+ (bool)_shouldInvertVolumeButtonsForLTRTopEdgePadInInterfaceOrientation:(long long)arg1;
+ (bool)_shouldInvertVolumeButtonsForRTLRightEdgePadInInterfaceOrientation:(long long)arg1;
+ (bool)_shouldInvertVolumeButtonsForRTLTopEdgePadInInterfaceOrientation:(long long)arg1;
+ (bool)isVolumeButtonRemappingSupported;
+ (bool)shouldInvertVolumeButtonsOnEdge:(unsigned long long)arg1 forInterfaceOrientation:(long long)arg2 userInterfaceLayoutDirection:(long long)arg3;

- (void)_hardwareDefaultsChanged;
- (void)_resetEffectiveInterfaceOrientation;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (unsigned long long)buttonsEdge;
- (void)dealloc;
- (long long)effectiveInterfaceOrientation;
- (id)init;
- (bool)isPreventingEffectiveInterfaceOrientationChanges;
- (bool)isVolumeButtonEventInvertible:(id)arg1 withPressType:(long long)arg2;
- (bool)isVolumeButtonRemappingEnabled;
- (long long)layoutDirection;
- (void)setButtonsEdge:(unsigned long long)arg1;
- (void)setEffectiveInterfaceOrientation:(long long)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setVolumeButtonRemappingEnabled:(bool)arg1;
- (bool)shouldInvertVolumeButtonsForEvent:(id)arg1 withPressType:(long long)arg2;

@end
