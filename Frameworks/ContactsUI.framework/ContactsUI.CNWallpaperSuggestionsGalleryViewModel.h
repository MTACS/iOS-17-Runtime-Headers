
@interface ContactsUI.CNWallpaperSuggestionsGalleryViewModel : NSObject <CNPRUISPosterEditingViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    void $__lazy_storage_$_suggestedAvatars;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isConfiguringPosterEditor;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _layoutDirection;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _photoLibraryAssetID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _pickedImage;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _pickerType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _posterConfiguration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _selectedSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _selectedSuggestedAvatar;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _shouldPresentPosterEditor;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _shouldPresentPosterPhotoPicker;
    void constants;
    void contact;
    void editorVC;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastSelectedSource;
    void suggestionFormat;
}

- (void).cxx_destruct;
- (void)editingViewController:(id)arg1 didFinishWithConfiguration:(id)arg2;
- (void)editingViewControllerDidFinishShowingContent:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)init;

@end
