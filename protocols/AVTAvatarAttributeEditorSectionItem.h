
@protocol AVTAvatarAttributeEditorSectionItem <NSObject>

@required

- (NSString *)identifier;
- (bool)isSelected;
- (NSString *)localizedName;
- (void)setSelected:(bool)arg1;

@end
