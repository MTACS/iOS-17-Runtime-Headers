
@protocol _UIContentEffect <NSObject>

@required

- (void)addCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_UIContentEffect> *, void*
- (<_UIContentEffectDescriptor> *)descriptor;
- (UITargetedPreview *)previewForContinuingToEffectWithPreview:(UITargetedPreview *)arg1;
- (void)setDescriptor:(id <_UIContentEffectDescriptor>)arg1 andKey:(id <_UIContentEffectKey>)arg2;

@end
