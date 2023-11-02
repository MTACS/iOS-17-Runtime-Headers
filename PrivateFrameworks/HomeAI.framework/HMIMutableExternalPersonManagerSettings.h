
@interface HMIMutableExternalPersonManagerSettings : HMIExternalPersonManagerSettings

@property (getter=isImportingFromPhotoLibraryEnabled) bool importingFromPhotoLibraryEnabled;
@property (getter=isSharingFaceClassificationsEnabled) bool sharingFaceClassificationsEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
