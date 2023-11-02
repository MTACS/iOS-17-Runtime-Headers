
@interface NTKCFaceDetailAlbumChooserViewController : NTKCNavigationController <_NTKCFaceDetailAlbumChooserViewControllerDelegate> {
    _NTKCFaceDetailAlbumChooserViewController * _implementationVC;
    <NTKCFaceDetailAlbumChooserViewControllerDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailAlbumChooserViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NTKCompanionSyncedAlbumEditor *editor;
@property (nonatomic, readonly) NTKFace *face;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inGallery;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_albumChooserDidFinish:(id)arg1;
- (id)delegate;
- (id)editor;
- (id)face;
- (bool)inGallery;
- (id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(bool)arg3;
- (void)setDelegate:(id)arg1;

@end
