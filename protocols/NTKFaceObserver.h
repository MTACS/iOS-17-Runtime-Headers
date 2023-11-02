
@protocol NTKFaceObserver <NSObject>

@optional

- (void)face:(NTKFace *)arg1 didChangeComplicationForSlot:(NSString *)arg2;
- (void)face:(NTKFace *)arg1 didChangeOptionsForEditMode:(long long)arg2;
- (void)faceConfigurationDidChange:(NTKFace *)arg1;
- (void)faceDidChangeTimeStyle:(NTKFace *)arg1;
- (void)faceResourceDirectoryDidChange:(NTKFace *)arg1;
- (void)faceUpgradeOccurred:(NTKFace *)arg1;

@end
