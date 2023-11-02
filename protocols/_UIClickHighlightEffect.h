
@protocol _UIClickHighlightEffect <UIInteractionEffect>

@required

+ (id)effectWithPreview:(UITargetedPreview *)arg1 continuingFromPreview:(UITargetedPreview *)arg2;

- (id /* block */)completionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <_UIClickHighlightEffect> *, void*, id, SEL
- (void)setCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_UIClickHighlightEffect> *, void*
- (UITargetedPreview *)targetedPreview;
- (UITargetedPreview *)targetedPreviewForEffectContinuation;

@end
