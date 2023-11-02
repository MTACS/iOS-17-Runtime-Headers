
@interface PhotosUICore.PhotosDetailsEXIFWidgetViewModel : PhotosUICore.PhotosDetailsWidgetViewModel {
    void $__lazy_storage_$_videoFormatInfoProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isContentLoaded;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showRawEXIF;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _videoHDRBadgeTitle;
    void assetDidChange;
    void ax_megaPixelsDescription;
    void ax_resolutionDescription;
    void cameraSettings;
    void fileSizeDescription;
    void formattedLensDescription;
    void hasCameraSettings;
    void isLoadingData;
    void isVideo;
    void isVideoHDR;
    void localizedFormatDescription;
    void localizedSemanticStyleDisplayString;
    void makeAndModelDescription;
    void megaPixelsDescription;
    void metadataProcessingQueue;
    void resolutionDescription;
    void symbolNames;
    void unformattedLensDescription;
}

- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)arg1;

@end
