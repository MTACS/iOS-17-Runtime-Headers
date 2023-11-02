
@interface SBRemoteTransientOverlayPresentationRequest : NSObject <NSCopying> {
    bool  _animated;
    bool  _isSceneBacked;
    bool  _isScreenshotMarkup;
    SBSRemoteAlertPresentationTarget * _presentationTarget;
    bool  _shouldDismissPresentedBanners;
    bool  _shouldDismissSiri;
    bool  _shouldPresentEmbeddedInTargetScene;
    bool  _shouldStashPictureInPictureIfNeeded;
    SBTransientOverlayViewController * _viewController;
    SBWindowScene * _windowScene;
}

@property (getter=isAnimated, nonatomic) bool animated;
@property (nonatomic) bool isSceneBacked;
@property (nonatomic) bool isScreenshotMarkup;
@property (nonatomic, retain) SBSRemoteAlertPresentationTarget *presentationTarget;
@property (nonatomic) bool shouldDismissPresentedBanners;
@property (nonatomic) bool shouldDismissSiri;
@property (nonatomic) bool shouldPresentEmbeddedInTargetScene;
@property (nonatomic) bool shouldStashPictureInPictureIfNeeded;
@property (nonatomic, readonly) SBTransientOverlayViewController *viewController;
@property (nonatomic) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithViewController:(id)arg1;
- (bool)isAnimated;
- (bool)isSceneBacked;
- (bool)isScreenshotMarkup;
- (id)presentationTarget;
- (void)setAnimated:(bool)arg1;
- (void)setIsSceneBacked:(bool)arg1;
- (void)setIsScreenshotMarkup:(bool)arg1;
- (void)setPresentationTarget:(id)arg1;
- (void)setShouldDismissPresentedBanners:(bool)arg1;
- (void)setShouldDismissSiri:(bool)arg1;
- (void)setShouldPresentEmbeddedInTargetScene:(bool)arg1;
- (void)setShouldStashPictureInPictureIfNeeded:(bool)arg1;
- (void)setWindowScene:(id)arg1;
- (bool)shouldDismissPresentedBanners;
- (bool)shouldDismissSiri;
- (bool)shouldPresentEmbeddedInTargetScene;
- (bool)shouldStashPictureInPictureIfNeeded;
- (id)viewController;
- (id)windowScene;

@end
