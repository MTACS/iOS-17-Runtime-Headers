
@protocol AVTAvatarAttributeEditorSection <NSObject, AVTAvatarAttributeEditorSectionProvider>

@required

- (NSString *)identifier;
- (unsigned long long)intendedDestination;
- (NSString *)localizedName;
- (AVTAvatarAttributeEditorSectionOptions *)options;
- (NSArray *)sectionItems;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInsets;
- (void)setIntendedDestination:(unsigned long long)arg1;
- (void)setLocalizedName:(NSString *)arg1;
- (void)setSupplementalPicker:(id <AVTAvatarAttributeEditorSectionSupplementalPicker>)arg1;
- (bool)shouldDisplaySeparatorBeforeSection:(id <AVTAvatarAttributeEditorSection>)arg1;
- (bool)shouldDisplayTitle;
- (<AVTAvatarAttributeEditorSectionSupplementalPicker> *)supplementalPicker;

@end
