
@protocol NTKEditModeMapping <NSObject>

@required

- (bool)deviceSupportsPigmentEditOption;
- (Class)editOptionClassFromEditMode:(long long)arg1 resourceDirectoryExists:(bool)arg2;
- (Class)legacyEditOptionClassFromCustomEditMode:(long long)arg1 resourceDirectoryExists:(bool)arg2;

@end
