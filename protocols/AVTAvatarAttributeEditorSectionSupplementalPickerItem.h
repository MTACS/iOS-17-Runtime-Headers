
@protocol AVTAvatarAttributeEditorSectionSupplementalPickerItem <NSObject>

@required

- (bool)isSelected;
- (NSString *)localizedDescription;
- (NSString *)localizedName;
- (void)setSelected:(bool)arg1;

@end
