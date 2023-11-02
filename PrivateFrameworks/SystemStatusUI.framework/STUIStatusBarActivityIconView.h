
@interface STUIStatusBarActivityIconView : STUIStatusBarImageView <STUIStatusBarPersistentAnimation> {
    CAShapeLayer * _innerRingShapeLayer;
    CAShapeLayer * _outerRingShapeLayer;
    bool  _ringing;
    double  _ringingIconScale;
    NSSymbolPulseEffect * _symbolPulseEffect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAShapeLayer *innerRingShapeLayer;
@property (nonatomic, retain) CAShapeLayer *outerRingShapeLayer;
@property (getter=isRinging, nonatomic, readonly) bool ringing;
@property (readonly) Class superclass;
@property (getter=isSymbolPulsing, nonatomic, readonly) bool symbolPulsing;

- (void).cxx_destruct;
- (void)_setupRingingLayersForStyleAttributes:(id)arg1;
- (void)_teardownRingingLayers;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)applyStyleAttributes:(id)arg1;
- (id)innerRingShapeLayer;
- (bool)isRinging;
- (bool)isSymbolPulsing;
- (void)layoutSubviews;
- (id)outerRingShapeLayer;
- (void)resumePersistentAnimation;
- (void)setInnerRingShapeLayer:(id)arg1;
- (void)setOuterRingShapeLayer:(id)arg1;
- (void)setRinging:(bool)arg1 forUpdate:(id)arg2;
- (void)setSymbolPulsing:(bool)arg1 forUpdate:(id)arg2;

@end
