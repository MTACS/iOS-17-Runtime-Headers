
@protocol SidecarServiceServiceInterface <NSObject>

@required

- (void)sidecarServiceActive;
- (void)sidecarServiceCancel;
- (void)sidecarServiceSetActive:(bool)arg1;
- (void)sidecarServiceSetBackgrounded:(bool)arg1;
- (void)sidecarServiceSetSceneIdentifier:(NSString *)arg1;
- (void)sidecarServiceSetSceneIdentityToken:(FBSSceneIdentityToken *)arg1;
- (void)sidecarServiceShouldPresentWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sidecarServiceVolumeDownButtonPressed:(bool)arg1;
- (void)sidecarServiceVolumeUpButtonPressed:(bool)arg1;

@end
