
@interface _UIGravityWellEffectDescriptor : NSObject <_UIContentEffectDescriptor> {
    UITargetedPreview * _primaryPreview;
    NSArray * _secondaryPreviews;
}

@property (nonatomic, readonly) NSArray *compatibleDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITargetedPreview *primaryPreview;
@property (nonatomic, retain) NSArray *secondaryPreviews;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITargetedPreview *targetedPreview;

- (void).cxx_destruct;
- (bool)canTransitionInPlaceToEffectWithDescriptor:(id)arg1;
- (id)compatibleDescriptors;
- (id)primaryPreview;
- (id)secondaryPreviews;
- (void)setPrimaryPreview:(id)arg1;
- (void)setSecondaryPreviews:(id)arg1;
- (id)targetedPreview;

@end
