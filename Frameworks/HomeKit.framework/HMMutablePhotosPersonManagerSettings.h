
@interface HMMutablePhotosPersonManagerSettings : HMPhotosPersonManagerSettings

@property (getter=isImportingFromPhotoLibraryEnabled) bool importingFromPhotoLibraryEnabled;
@property (getter=isSharingFaceClassificationsEnabled) bool sharingFaceClassificationsEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSharingFaceClassificationsAllowed:(bool)arg1;

@end
