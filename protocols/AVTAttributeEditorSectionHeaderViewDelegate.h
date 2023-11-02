
@protocol AVTAttributeEditorSectionHeaderViewDelegate

@required

- (void)sectionHeaderView:(AVTAttributeEditorSectionHeaderView *)arg1 didSelectItem:(id <AVTAvatarAttributeEditorSectionSupplementalPickerItem>)arg2 forPicker:(id <AVTAvatarAttributeEditorSectionSupplementalPicker>)arg3 sender:(UIView *)arg4;
- (void)sectionHeaderView:(AVTAttributeEditorSectionHeaderView *)arg1 didTapSupplementalPicker:(id <AVTAvatarAttributeEditorSectionSupplementalPicker>)arg2 sender:(UIView *)arg3;

@end
