
@protocol AVTAvatarAttributeEditorSectionColorDataSourceDelegate

@required

- (void)colorDataSource:(AVTAvatarAttributeEditorSectionColorDataSource *)arg1 didChangeDisplayMode:(long long)arg2 previousDisplayMode:(long long)arg3;
- (void)colorDataSource:(AVTAvatarAttributeEditorSectionColorDataSource *)arg1 didDeselectItemAtIndex:(long long)arg2 shouldReloadModel:(bool)arg3;
- (void)colorDataSource:(AVTAvatarAttributeEditorSectionColorDataSource *)arg1 didSelectItemAtIndex:(long long)arg2 shouldReloadModel:(bool)arg3;

@end
