
@interface PaperKit.PaperDocumentViewController : UIViewController <PKToolPickerObserver> {
    void $__lazy_storage_$_pageLabelView;
    void assetPasswordToRemove;
    void bannerView;
    void bannerViewConfiguration;
    void cancellables;
    void defaultBannerWasDisplayed;
    void delegate;
    void documentViewLeadingToThumbnailViewTrailingConstraint;
    void editingMode;
    void ignorePasswordRequest;
    void isThumbnailViewCollapsed;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastPasswordRequestDate;
    void lastPasswordRequestSucceeded;
    void livePassThroughSubject;
    void liveStreamMessenger;
    void pageLabelViewLeadingToPaperDocumentLeadingConstraint;
    void pageLabelViewLeadingToThumbnailViewTrailingConstraint;
    void pageLabelViewTopToBannerBottomConstraint;
    void pageLabelViewTopToSuperviewTopConstraint;
    void pageOverlayViewProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  paperDocumentTemp;
    void paperDocumentThumbnailView;
    void paperDocumentView;
    void participantDetailsDataSource;
    void passThroughSubject;
    void passwordViewController;
    void plusButton;
    void screenEdgePanGestureRecognizer;
    void shouldShowFormFillingUIAutomatically;
    void showParticipantCursors;
    void thumbnailBackgroundView;
    void thumbnailViewLeadingToSuperviewLeadingConstraint;
    void thumbnailViewWidthConstraint;
    void toolPicker;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)didScreenEdgePan;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)pageDidChange:(id)arg1;
- (void)pageLabelViewTapped:(id)arg1;
- (void)pageWillScroll:(id)arg1;
- (bool)resignFirstResponder;
- (void)toolPickerIsRulerActiveDidChange:(id)arg1;
- (void)toolPickerSelectedToolDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
