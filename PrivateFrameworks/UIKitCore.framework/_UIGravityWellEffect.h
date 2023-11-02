
@interface _UIGravityWellEffect : NSObject <_UIContentEffect> {
    unsigned long long  _animationCount;
    double  _baseZOffset;
    NSMutableArray * _completions;
    UITargetedPreview * _continuationPreview;
    <_UIContentEffectDescriptor> * _descriptor;
    double  _effectProgress;
    _UIGravityWellEffectBody * _primaryBody;
    NSArray * _secondaryBodies;
    long long  _state;
}

@property (nonatomic) unsigned long long animationCount;
@property (nonatomic) double baseZOffset;
@property (nonatomic, readonly) NSMutableArray *completions;
@property (nonatomic, retain) UITargetedPreview *continuationPreview;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <_UIContentEffectDescriptor> *descriptor;
@property (nonatomic) double effectProgress;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIGravityWellEffectBody *primaryBody;
@property (nonatomic, retain) NSArray *secondaryBodies;
@property (nonatomic, readonly) NSArray *secondaryBodyPreviews;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

+ (id)effectWithDescriptor:(id)arg1 continuationPreview:(id)arg2;

- (void).cxx_destruct;
- (id)_criticallyDampedEffectSpringBehavior;
- (id)_effectSpringBehavior;
- (void)_installEffectViews;
- (void)_performAllCompletions;
- (void)_tearDownEffectViews;
- (void)_updateToProgress:(double)arg1 state:(long long)arg2;
- (void)addCompletion:(id /* block */)arg1;
- (unsigned long long)animationCount;
- (double)baseZOffset;
- (void)begin;
- (id)completions;
- (id)continuationPreview;
- (id)descriptor;
- (double)effectProgress;
- (void)end;
- (void)endForHandOff;
- (id)previewForContinuingToEffectWithPreview:(id)arg1;
- (id)primaryBody;
- (id)secondaryBodies;
- (id)secondaryBodyPreviews;
- (void)setAnimationCount:(unsigned long long)arg1;
- (void)setBaseZOffset:(double)arg1;
- (void)setContinuationPreview:(id)arg1;
- (void)setDescriptor:(id)arg1 andKey:(id)arg2;
- (void)setEffectProgress:(double)arg1;
- (void)setPrimaryBody:(id)arg1;
- (void)setSecondaryBodies:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)updateWithProgress:(double)arg1;

@end
