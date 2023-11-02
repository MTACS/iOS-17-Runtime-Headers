
@interface _UIWindowSceneActivationEffectDescriptor : NSObject <_UIContentEffectDescriptor> {
    UITargetedPreview * _targetedPreview;
}

@property (nonatomic, readonly) NSArray *compatibleDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITargetedPreview *targetedPreview;

+ (id)descriptorWithPreview:(id)arg1;

- (void).cxx_destruct;
- (bool)canTransitionInPlaceToEffectWithDescriptor:(id)arg1;
- (id)compatibleDescriptors;
- (id)targetedPreview;

@end
