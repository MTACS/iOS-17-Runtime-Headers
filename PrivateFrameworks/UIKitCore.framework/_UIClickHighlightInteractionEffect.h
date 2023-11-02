
@interface _UIClickHighlightInteractionEffect : NSObject <_UIClickHighlightEffect> {
    id /* block */  _completionBlock;
    UITargetedPreview * _continuationPreview;
    _UIAnchoredClickHighlightPlatterView * _highlightPlatter;
    long long  _inflightAnimationCount;
    bool  _isActive;
    long long  _phase;
    UITargetedPreview * _targetedPreview;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) UITargetedPreview *continuationPreview;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIAnchoredClickHighlightPlatterView *highlightPlatter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITargetedPreview *targetedPreview;
@property (nonatomic, readonly) UITargetedPreview *targetedPreviewForEffectContinuation;

+ (id)effectWithPreview:(id)arg1 continuingFromPreview:(id)arg2;

- (void).cxx_destruct;
- (void)_completeHighlightEffect;
- (void)_createHighlightPlatter;
- (id /* block */)completionBlock;
- (id)continuationPreview;
- (id)highlightPlatter;
- (id)initWithTargetedPreview:(id)arg1 continuingFromPreview:(id)arg2;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setContinuationPreview:(id)arg1;
- (void)setHighlightPlatter:(id)arg1;
- (id)targetedPreview;
- (id)targetedPreviewForEffectContinuation;

@end
