
@interface HMDCameraUserSettingsConfiguration : HMFObject {
    bool  _importingFromPhotoLibraryEnabled;
    bool  _owner;
    bool  _sharingFaceClassificationsEnabled;
}

@property (getter=isImportingFromPhotoLibraryEnabled, readonly) bool importingFromPhotoLibraryEnabled;
@property (getter=isOwner, readonly) bool owner;
@property (getter=isSharingFaceClassificationsEnabled, readonly) bool sharingFaceClassificationsEnabled;

- (id)initWithUser:(id)arg1;
- (bool)isImportingFromPhotoLibraryEnabled;
- (bool)isOwner;
- (bool)isSharingFaceClassificationsEnabled;

@end
