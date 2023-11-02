
@interface _UINullClickHighlightEffect : NSObject <_UIClickHighlightEffect> {
    id /* block */  _completionBlock;
    UITargetedPreview * _targetedPreview;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITargetedPreview *targetedPreview;
@property (nonatomic, readonly) UITargetedPreview *targetedPreviewForEffectContinuation;

+ (id)effectWithPreview:(id)arg1 continuingFromPreview:(id)arg2;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)targetedPreview;
- (id)targetedPreviewForEffectContinuation;

@end
