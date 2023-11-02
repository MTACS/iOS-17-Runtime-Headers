
@protocol PXMutableSharedLibraryStatusProvider <NSObject>

@required

- (<PXSharedLibrary> *)exiting;
- (bool)hasPreview;
- (bool)hasSharedLibrary;
- (<PXSharedLibrary> *)invitation;
- (<PXSharedLibrary> *)preview;
- (void)setExiting:(id <PXSharedLibrary>)arg1;
- (void)setHasPreview:(bool)arg1;
- (void)setHasSharedLibrary:(bool)arg1;
- (void)setInvitation:(id <PXSharedLibrary>)arg1;
- (void)setPreview:(id <PXSharedLibrary>)arg1;
- (void)setSharedLibrary:(id <PXSharedLibrary>)arg1;
- (<PXSharedLibrary> *)sharedLibrary;

@end
