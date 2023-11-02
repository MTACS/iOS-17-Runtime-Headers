
@protocol _UIContentEffectDescriptor <NSObject>

@required

- (bool)canTransitionInPlaceToEffectWithDescriptor:(id <_UIContentEffectDescriptor>)arg1;
- (NSArray *)compatibleDescriptors;
- (UITargetedPreview *)targetedPreview;

@end
