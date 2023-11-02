
@interface PhotosUICore.PhotosDetailsSharedLibraryWidgetViewModel : PhotosUICore.PhotosDetailsWidgetViewModel {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _contributerName;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _contributor;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _contributorContactImage;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _title;
    void contributors;
    void imageProvider;
    void sharedLibraryAssetStatusContextObservation;
    void sharedLibraryAssetStatusProvider;
    void sharedLibraryStatusContextObservation;
    void sharedLibraryStatusProvider;
}

- (void).cxx_destruct;

@end
