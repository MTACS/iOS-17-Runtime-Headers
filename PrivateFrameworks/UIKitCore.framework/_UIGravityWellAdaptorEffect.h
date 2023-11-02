
@interface _UIGravityWellAdaptorEffect : _UIGravityWellEffect {
    <_UIClickHighlightEffect> * _adaptedEffect;
    _UIGravityWellAdaptorInteraction * _adaptorInteraction;
    double  _maxProgress;
}

@property (nonatomic, retain) <_UIClickHighlightEffect> *adaptedEffect;
@property (nonatomic, retain) _UIGravityWellAdaptorInteraction *adaptorInteraction;
@property (nonatomic) double maxProgress;

+ (id)effectWithAdaptedClickEffect:(id)arg1;

- (void).cxx_destruct;
- (id)adaptedEffect;
- (id)adaptorInteraction;
- (void)addCompletion:(id /* block */)arg1;
- (void)begin;
- (void)end;
- (void)endForHandOff;
- (double)maxProgress;
- (id)previewForContinuingToEffectWithPreview:(id)arg1;
- (id)secondaryBodyPreviews;
- (void)setAdaptedEffect:(id)arg1;
- (void)setAdaptorInteraction:(id)arg1;
- (void)setMaxProgress:(double)arg1;
- (void)updateWithProgress:(double)arg1;

@end
