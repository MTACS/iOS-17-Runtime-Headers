
@interface PUInterfaceManager : NSObject

+ (void)_disabledUserInteractionRequestDidTimeOut:(id)arg1;
+ (void)_handleInteractionDisablingTimeout;
+ (void)_handleInteractionDisablingTimeoutForAlbumStackTransition;
+ (void)_handleInteractionDisablingTimeoutForBannerViewImagesJump;
+ (void)_handleInteractionDisablingTimeoutForBurningInTrim;
+ (void)_handleInteractionDisablingTimeoutForOneUpToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeoutForOverOneUpTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserZoomTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorComputingAutoEnhance;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorRevertingChanges;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorSavingChanges;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorToPhotoBrowserTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorWaitingToDismiss;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectResult;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectSuggestion;
+ (void)_handleInteractionDisablingTimeoutForStartSlideshowFromGrid;
+ (id)beginDisablingUserInteractionForReason:(long long)arg1;
+ (id)beginDisablingUserInteractionForReason:(long long)arg1 withExpectedTimeout:(double)arg2;
+ (id)currentTheme;
+ (void)endDisablingUserInteraction:(id)arg1;
+ (bool)shouldUseAccessibilityLargeTextLayoutWithTraitCollecton:(id)arg1;
+ (bool)shouldUsePhoneLayoutWithTraitCollection:(id)arg1;

@end
