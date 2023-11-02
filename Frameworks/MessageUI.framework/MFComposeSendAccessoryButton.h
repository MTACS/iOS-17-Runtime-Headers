
@interface MFComposeSendAccessoryButton : UIButton <UIPointerInteractionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)buttonWithType:(long long)arg1;

- (id)_pointerShapeForTargetedPreview:(id)arg1;
- (id)_preview;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
