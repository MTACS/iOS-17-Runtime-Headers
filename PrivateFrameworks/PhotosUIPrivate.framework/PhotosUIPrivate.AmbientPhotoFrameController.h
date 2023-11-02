
@interface PhotosUIPrivate.AmbientPhotoFrameController : NSObject <PXTapToRadarDiagnosticProvider> {
    void $__lazy_storage_$_contentView;
    void bufferingSpinner;
    void compactMetadataOverlayView;
    void contentUnavailableView;
    void environment;
    void extendedMetadataOverlayView;
    void isActive;
    void keyAsset;
    void nightMode;
    void nonAnimatingPlaybackTimer;
    void notAnimatingReason;
    void overlayHidden;
    void overlayView;
    void photoLibrary;
    void posterConfiguration;
    void posterDescriptor;
    void renderer;
    void shouldAnimatePlayback;
    void skipToNextAssetBecauseOfWake;
    void snapshotView;
    void storyMainModel;
    void storyModelObservation;
    void storyView;
    void storyViewLoadingState;
    void storyViewModelObservation;
    void tapToRadarButton;
    void tapToRadarButtonTitleLeadingConstraint;
    void titleAlignment;
}

- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)init;
- (void)thermalStateDidChangeWithNotification:(id)arg1;

@end
