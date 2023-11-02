
@interface _UIWindowSceneActivationEffect : NSObject <_UIContentEffect> {
    NSMutableArray * _completions;
    double  _currentScale;
    <_UIContentEffectDescriptor> * _descriptor;
    UIView * _platterContainer;
    _UIHighlightPlatterView * _platterView;
    long long  _state;
}

@property (nonatomic, readonly) NSMutableArray *completions;
@property (nonatomic) double currentScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <_UIContentEffectDescriptor> *descriptor;
@property (nonatomic, readonly) UITargetedPreview *handOffPreview;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *platterContainer;
@property (nonatomic, retain) _UIHighlightPlatterView *platterView;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_interactiveScaleBehavior;
- (void)_performAllCompletionBlocks;
- (id)_settlingBehavior;
- (id)_shadowBehavior;
- (void)addCompletion:(id /* block */)arg1;
- (void)advanceToScale:(double)arg1;
- (void)begin;
- (id)completions;
- (double)currentScale;
- (id)descriptor;
- (void)endExpanded:(bool)arg1 withVelocity:(double)arg2;
- (id)handOffPreview;
- (id)initWithDescriptor:(id)arg1;
- (id)platterContainer;
- (id)platterView;
- (id)previewForContinuingToEffectWithPreview:(id)arg1;
- (void)setCurrentScale:(double)arg1;
- (void)setDescriptor:(id)arg1 andKey:(id)arg2;
- (void)setPlatterView:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
