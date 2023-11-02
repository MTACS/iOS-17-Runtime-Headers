
@interface WCFocusRingShapeLayer : CAShapeLayer <WatchControlSettingsObserver> {
    long long  _focusRingColor;
    bool  _increasedContrast;
    CAShapeLayer * _innerFocusOutlineLayer;
    CAShapeLayer * _outerFocusOutlineLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long focusRingColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool increasedContrast;
@property (nonatomic, retain) CAShapeLayer *innerFocusOutlineLayer;
@property (nonatomic, retain) CAShapeLayer *outerFocusOutlineLayer;
@property (readonly) Class superclass;

+ (id)clearLayer;
+ (id)focusLayerForUserInterfaceStyle:(long long)arg1;
+ (id)parentLayerForUserInterfaceStyle:(long long)arg1;
+ (id)selectedLayerForUserInterfaceStyle:(long long)arg1;
+ (id)selectedParentLayerForUserInterfaceStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)focusRingColor;
- (bool)increasedContrast;
- (id)innerFocusOutlineLayer;
- (id)outerFocusOutlineLayer;
- (double)scaledOutlineWidth:(double)arg1;
- (void)setFocusRingColor:(long long)arg1;
- (void)setIncreasedContrast:(bool)arg1;
- (void)setInnerFocusOutlineLayer:(id)arg1;
- (void)setOuterFocusOutlineLayer:(id)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (id)strokeColorForFocusOutline;
- (void)updateAppearance;
- (void)updateCachedSettings;
- (void)updateFocusOutlinePath;
- (id)viewTintColor;
- (void)watchControlSettingsDidChange:(id)arg1;

@end
