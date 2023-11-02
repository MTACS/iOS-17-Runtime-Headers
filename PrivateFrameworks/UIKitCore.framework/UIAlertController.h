
@interface UIAlertController : UIViewController <AAUIAlertControllerProtocol, HUPreloadableViewController, UIAlertControllerContaining, UIAlertControllerVisualStyleProviding, UIPreviewInteractionControllerDelegate, WFAlertPresenter, _UIAlertControllerTextFieldViewControllerContaining> {
    NSMutableArray * __actionDelimiterIndices;
    UIPopoverController * __compatibilityPopoverController;
    UIView * __presentationSourceRepresentationView;
    bool  __shouldAlignToKeyboard;
    bool  __shouldAllowNilParameters;
    bool  __shouldFlipFrameForShimDismissal;
    <UIAlertControllerSystemProvidedPresentationDelegate> * __systemProvidedPresentationDelegate;
    UIView * __systemProvidedPresentationView;
    UIAlertControllerVisualStyle * __visualStyle;
    bool  __wantsUnclippedContentViewControllerContainer;
    bool  __wantsUnclippedHeaderContentViewControllerContainer;
    UIImage * _accessoryImage;
    NSMutableDictionary * _actionToKeyCommandsDictionary;
    NSMutableArray * _actions;
    NSPointerArray * _actionsWithInvokedHandlers;
    UIAlertControllerStackManager * _alertControllerStackManager;
    NSAttributedString * _attributedDetailMessage;
    NSAttributedString * _attributedMessage;
    NSAttributedString * _attributedTitle;
    UITapGestureRecognizer * _backButtonDismissGestureRecognizer;
    long long  _batchActionChangesInProgressCount;
    UIAlertAction * _cancelAction;
    UIViewController * _contentViewController;
    <UIAlertControllerCoordinatedActionPerforming> * _coordinatedActionPerformingDelegate;
    bool  _hasPreservedInputViews;
    UIViewController * _headerContentViewController;
    bool  _hidden;
    UIImage * _image;
    NSIndexSet * _indexesOfActionSectionSeparators;
    bool  _isInRecomputePreferredContentSize;
    NSMapTable * _keyCommandToActionMapTable;
    NSSet * _linkedAlertControllers;
    NSString * _message;
    id  _ownedTransitioningDelegate;
    UIAlertAction * _preferredAction;
    long long  _preferredStyle;
    _UIAlertControllerShimPresenter * _presenter;
    UIPreviewInteractionController * _previewInteractionController;
    long long  _resolvedStyle;
    UIViewController * _separatedHeaderContentViewController;
    long long  _severity;
    bool  _springLoaded;
    NSObject<UIAlertControllerVisualStyleProviding> * _styleProvider;
    UIGestureRecognizer * _systemProvidedGestureRecognizer;
    _UIAnimationCoordinator * _temporaryAnimationCoordinator;
    _UIAlertControllerTextFieldViewController * _textFieldViewController;
    long long  _titleLineBreakMode;
    long long  _titleMaximumLineCount;
    bool  dismissedFromShim;
}

@property (readonly) NSMutableArray *_actionDelimiterIndices;
@property (readonly) NSMutableArray *_actions;
@property (readonly) bool _alignsToKeyboard;
@property (getter=_attributedDetailMessage, setter=_setAttributedDetailMessage:, nonatomic, copy) NSAttributedString *_attributedDetailMessage;
@property (readonly) UIAlertAction *_cancelAction;
@property (setter=_setCompatibilityPopoverController:, nonatomic) UIPopoverController *_compatibilityPopoverController;
@property (readonly) UIView *_dimmingView;
@property (readonly) UIAlertAction *_focusedAction;
@property (readonly) UIView *_foregroundView;
@property (setter=_setHeaderContentViewController:, nonatomic, retain) UIViewController *_headerContentViewController;
@property (getter=_isHidden, setter=_setHidden:, nonatomic) bool _hidden;
@property (setter=_setPresentationSourceRepresentationView:, nonatomic, retain) UIView *_presentationSourceRepresentationView;
@property (readonly) long long _resolvedStyle;
@property (setter=_setSeparatedHeaderContentViewController:, nonatomic, retain) UIViewController *_separatedHeaderContentViewController;
@property (setter=_setShouldAlignToKeyboard:, nonatomic) bool _shouldAlignToKeyboard;
@property (setter=_setShouldAllowNilParameters:) bool _shouldAllowNilParameters;
@property bool _shouldFlipFrameForShimDismissal;
@property (readonly) bool _shouldProvideDimmingView;
@property (readonly) bool _shouldReverseActions;
@property (setter=_setSystemProvidedPresentationDelegate:, nonatomic, retain) <UIAlertControllerSystemProvidedPresentationDelegate> *_systemProvidedPresentationDelegate;
@property (setter=_setSystemProvidedPresentationView:, nonatomic, retain) UIView *_systemProvidedPresentationView;
@property (readonly) _UIAlertControllerTextFieldViewController *_textFieldViewController;
@property (setter=_setVisualStyle:, nonatomic, retain) UIAlertControllerVisualStyle *_visualStyle;
@property (setter=_setWantsUnclippedContentViewControllerContainer:, nonatomic) bool _wantsUnclippedContentViewControllerContainer;
@property (setter=_setWantsUnclippedHeaderContentViewControllerContainer:, nonatomic) bool _wantsUnclippedHeaderContentViewControllerContainer;
@property (getter=_accessoryImage, setter=_setAccessoryImage:, nonatomic, copy) UIImage *accessoryImage;
@property (setter=_setActions:, nonatomic, retain) NSArray *actions;
@property (getter=_attributedMessage, setter=_setAttributedMessage:, nonatomic, copy) NSAttributedString *attributedMessage;
@property (getter=_attributedTitle, setter=_setAttributedTitle:, nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic) <UIAlertControllerCoordinatedActionPerforming> *coordinatedActionPerformingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_dismissedFromShim, setter=_setDismissedFromShim:, nonatomic) bool dismissedFromShim;
@property (getter=_effectAlpha, setter=_setEffectAlpha:, nonatomic) double effectAlpha;
@property (getter=_hasPreservedInputViews, setter=_setHasPreservedInputViews:, nonatomic) bool hasPreservedInputViews;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (getter=_indexesOfActionSectionSeparators, setter=_setIndexesOfActionSectionSeparators:, nonatomic, copy) NSIndexSet *indexesOfActionSectionSeparators;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) UIAlertAction *preferredAction;
@property (nonatomic) long long preferredStyle;
@property (getter=_previewInteractionController, setter=_setPreviewInteractionController:, nonatomic, retain) UIPreviewInteractionController *previewInteractionController;
@property (nonatomic) bool px_shouldForceAlertStyle;
@property (nonatomic) long long severity;
@property (getter=_styleProvider, setter=_setStyleProvider:, nonatomic) NSObject<UIAlertControllerVisualStyleProviding> *styleProvider;
@property (readonly) Class superclass;
@property (getter=_systemProvidedGestureRecognizer, setter=_setSystemProvidedGestureRecognizer:, nonatomic, retain) UIGestureRecognizer *systemProvidedGestureRecognizer;
@property (nonatomic, retain) _UIAnimationCoordinator *temporaryAnimationCoordinator;
@property (nonatomic, readonly) NSArray *textFields;
@property (nonatomic, copy) NSString *title;
@property (getter=_titleLineBreakMode, setter=_setTitleLineBreakMode:, nonatomic) long long titleLineBreakMode;
@property (getter=_titleMaximumLineCount, setter=_setTitleMaximumLineCount:, nonatomic) long long titleMaximumLineCount;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_alertControllerContainedInViewController:(id)arg1;
+ (id)_alertControllerWithTitle:(id)arg1 message:(id)arg2;
+ (bool)_allowInteractiveSheetDismissal;
+ (id)_createTransitioningDelegateForIdiom:(long long)arg1;
+ (bool)_shouldUsePresentationController;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
+ (void)registerPlatformStyleProvider:(id)arg1 forIdiom:(long long)arg2;

- (void).cxx_destruct;
- (id)_accessoryImage;
- (void)_action:(id)arg1 changedToKeyCommandWithInput:(id)arg2 modifierFlags:(long long)arg3;
- (id)_actionDelimiterIndices;
- (id)_actionForReturnKey;
- (id)_actions;
- (void)_addActionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(id /* block */)arg4;
- (void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
- (void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3 shouldDismissHandler:(id /* block */)arg4;
- (void)_addKeyCommandForAction:(id)arg1 withInput:(id)arg2 modifierFlags:(long long)arg3;
- (void)_addReturnKeyCommandIfAppropriate;
- (void)_addSectionDelimiter;
- (id)_alertControllerContainer;
- (id)_alertControllerView;
- (bool)_alignsToKeyboard;
- (bool)_allowsShowingDimmingView;
- (void)_attemptAnimatedDismissWithGestureRecognizer:(id)arg1;
- (id)_attributedDetailMessage;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (void)_becomeFirstResponderIfAppropriate;
- (void)_beginNoPresentingViewControllerPresentation;
- (long long)_buttonTypeForBackGestureForIdiom:(long long)arg1;
- (bool)_canBePresentedAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_canDismissWithGestureRecognizer;
- (id)_cancelAction;
- (void)_childViewController:(id)arg1 willTransitionToSize:(struct CGSize { double x1; double x2; })arg2 withAnimations:(id /* block */)arg3;
- (void)_clearActionHandlers;
- (id)_compatibilityPopoverController;
- (id)_containedAlertController;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsets;
- (void)_contentViewControllerWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withAnimations:(id /* block */)arg2;
- (id)_currentDescriptor;
- (bool)_defersToPresentingViewControllerForSupportedInterfaceOrientations;
- (void)_didParentTextFieldViewController;
- (id)_dimmingView;
- (void)_dismissAnimated:(bool)arg1 triggeringAction:(id)arg2;
- (void)_dismissAnimated:(bool)arg1 triggeringAction:(id)arg2 triggeredByPopoverDimmingView:(bool)arg3 dismissCompletion:(id /* block */)arg4;
- (void)_dismissFromBackButton:(id)arg1;
- (void)_dismissFromPopoverDimmingView;
- (id)_dismissGestureRecognizer;
- (void)_dismissWithAction:(id)arg1;
- (void)_dismissWithAction:(id)arg1 dismissCompletion:(id /* block */)arg2;
- (void)_dismissWithCancelAction;
- (bool)_dismissedFromShim;
- (double)_effectAlpha;
- (void)_endNoPresentingViewControllerPresentation;
- (void)_flipFrameForShimDismissalIfNecessary;
- (id)_focusedAction;
- (id)_foregroundView;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (void)_handleKeyCommand:(id)arg1;
- (void)_handleReturn;
- (bool)_hasAttributedMessage;
- (bool)_hasAttributedTitle;
- (bool)_hasContentToDisplay;
- (bool)_hasDetailMessage;
- (bool)_hasMessage;
- (bool)_hasPreservedInputViews;
- (bool)_hasTitle;
- (id)_headerContentViewController;
- (void)_headerContentViewControllerWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withAnimations:(id /* block */)arg2;
- (bool)_idiomSupportsBackGesture:(long long)arg1;
- (id)_indexesOfActionSectionSeparators;
- (void)_installBackGestureRecognizer;
- (void)_invokeHandlersForAction:(id)arg1;
- (bool)_isHidden;
- (bool)_isPresented;
- (bool)_isPresentedAsPopover;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (id)_keyCommandForAction:(id)arg1 input:(id)arg2 modifierFlags:(long long)arg3;
- (void)_logBeingDismissed;
- (void)_logBeingPresented;
- (long long)_modalPresentationStyleForResolvedStyle;
- (bool)_needsPreferredSizeCalculated;
- (void)_performAction:(id)arg1 invokeActionBlock:(id /* block */)arg2 dismissAndPerformActionIfNotAlreadyPerformed:(id /* block */)arg3;
- (void)_performBatchActionChangesWithBlock:(id /* block */)arg1;
- (void)_postDidBeginSystemProvidedDismissalOfAlertController;
- (void)_postWillBeginSystemProvidedDismissalOfAlertController;
- (struct __CFString { }*)_powerLoggingEventName;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)_presentationSourceRepresentationView;
- (void)_preserveInputViewsAnimated:(bool)arg1;
- (id)_previewInteractionController;
- (void)_recomputePreferredContentSize;
- (void)_reevaluateResolvedStyle;
- (void)_removeAllActions;
- (void)_removeAllTextFields;
- (void)_removeKeyCommandForAction:(id)arg1;
- (bool)_requiresCustomPresentationController;
- (long long)_resolvedStyle;
- (void)_resolvedStyleChanged;
- (void)_restoreInputViewsAnimated:(bool)arg1;
- (id)_returnKeyCommand;
- (void)_returnKeyPressedInLastTextField;
- (id)_separatedHeaderContentViewController;
- (void)_setAccessoryImage:(id)arg1;
- (void)_setActions:(id)arg1;
- (void)_setAttributedDetailMessage:(id)arg1;
- (void)_setAttributedMessage:(id)arg1;
- (void)_setAttributedTitle:(id)arg1;
- (void)_setCompatibilityPopoverController:(id)arg1;
- (void)_setDismissedFromShim:(bool)arg1;
- (void)_setEffectAlpha:(double)arg1;
- (void)_setHasPreservedInputViews:(bool)arg1;
- (void)_setHeaderContentViewController:(id)arg1;
- (void)_setHidden:(bool)arg1;
- (void)_setIndexesOfActionSectionSeparators:(id)arg1;
- (void)_setPresentationSourceRepresentationView:(id)arg1;
- (void)_setPreviewInteractionController:(id)arg1;
- (void)_setSeparatedHeaderContentViewController:(id)arg1;
- (void)_setShouldAlignToKeyboard:(bool)arg1;
- (void)_setShouldAllowNilParameters:(bool)arg1;
- (void)_setShouldReverseActions:(bool)arg1;
- (void)_setStyleProvider:(id)arg1;
- (void)_setSystemProvidedGestureRecognizer:(id)arg1;
- (void)_setSystemProvidedPresentationDelegate:(id)arg1;
- (void)_setSystemProvidedPresentationView:(id)arg1;
- (void)_setTitleLineBreakMode:(long long)arg1;
- (void)_setTitleMaximumLineCount:(long long)arg1;
- (id)_setView:(id)arg1 forSystemProvidedPresentationWithDelegate:(id)arg2;
- (void)_setVisualStyle:(id)arg1;
- (void)_setWantsUnclippedContentViewControllerContainer:(bool)arg1;
- (void)_setWantsUnclippedHeaderContentViewControllerContainer:(bool)arg1;
- (bool)_shouldAlignToKeyboard;
- (bool)_shouldAllowNilParameters;
- (bool)_shouldBecomeFirstResponder;
- (bool)_shouldDismissOnSizeChange;
- (bool)_shouldFitWidthToContentViewControllerWidth;
- (bool)_shouldFlipFrameForShimDismissal;
- (bool)_shouldPreserveInputViews;
- (bool)_shouldProvideDimmingView;
- (bool)_shouldReverseActions;
- (bool)_shouldSizeToFillSuperview;
- (bool)_shouldSupportReturnKeyPresses;
- (bool)_shouldTreatEmptyStringsAsNil;
- (id)_styleProvider;
- (id)_systemProvidedGestureRecognizer;
- (id)_systemProvidedPresentationDelegate;
- (id)_systemProvidedPresentationView;
- (id)_textFieldContainingViewWithTextField:(id)arg1 position:(long long)arg2;
- (id)_textFieldViewController;
- (long long)_titleLineBreakMode;
- (long long)_titleMaximumLineCount;
- (void)_uninstallBackGestureRecognizer;
- (void)_updateModalPresentationStyle;
- (void)_updateProvidedStyle;
- (void)_updateProvidedStyleWithTraitCollection:(id)arg1;
- (void)_updateShouldAlignToKeyboard;
- (void)_updateTextFieldViewControllerWithVisualStyle:(id)arg1;
- (void)_updateViewFrameForLandscapePresentationInShimIfNecessary;
- (bool)_viewControllerIsPresentedInModalPresentationContext:(id)arg1;
- (id)_visualStyle;
- (bool)_wantsUnclippedContentViewControllerContainer;
- (bool)_wantsUnclippedHeaderContentViewControllerContainer;
- (void)_willParentTextFieldViewController;
- (id)actions;
- (void)addAction:(id)arg1;
- (void)addTextFieldWithConfigurationHandler:(id /* block */)arg1;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)cancelAction;
- (id)contentViewController;
- (id)coordinatedActionPerformingDelegate;
- (void)dealloc;
- (id)description;
- (id)image;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isSpringLoaded;
- (void)linkAlertController:(id)arg1;
- (id)linkedAlertControllers;
- (void)loadView;
- (id)message;
- (bool)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;
- (id)platformStyleViewForAlertController:(id)arg1 inIdiom:(long long)arg2;
- (id)preferredAction;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)preferredStyle;
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3 presentingViewController:(id*)arg4;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint { double x1; double x2; })arg3 inSourceView:(id)arg4;
- (void)setCancelAction:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setCoordinatedActionPerformingDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setPreferredAction:(id)arg1;
- (void)setPreferredStyle:(long long)arg1;
- (void)setSeverity:(long long)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setTemporaryAnimationCoordinator:(id)arg1;
- (void)setTextFieldsCanBecomeFirstResponder:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)set_shouldFlipFrameForShimDismissal:(bool)arg1;
- (long long)severity;
- (bool)shouldAutorotate;
- (id)temporaryAnimationCoordinator;
- (id)textFields;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unlinkAlertController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_actionSheetWithTitle:(id)arg1 cancellationHandler:(id /* block */)arg2;
+ (id)mf_muteConfirmationControllerWithHandler:(id /* block */)arg1;

- (void)mf_addCancelActionWithHandler:(id /* block */)arg1;
- (void)mf_presentConfirmationSheetFromViewController:(id)arg1 withSource:(id)arg2;
- (void)mf_presentFromViewController:(id)arg1 withSource:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

+ (id)alertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 actionHandler:(id /* block */)arg4;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 defaultButtonTitle:(id)arg4;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 defaultButtonTitle:(id)arg4 actionHandler:(id /* block */)arg5;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 actionHandler:(id /* block */)arg5;

- (id /* block */)_handlerWithMultiActionHandler:(id /* block */)arg1;
- (id /* block */)_handlerWithSingleActionHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DigitalSeparationUI.framework/DigitalSeparationUI

+ (id)ds_alertControllerWithAppDeletionError:(id)arg1;
+ (id)ds_alertControllerWithFetchSharingError:(id)arg1;
+ (id)ds_alertControllerWithStopPermissionSharingError:(id)arg1;
+ (id)ds_alertControllerWithStopSharingError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore

- (void)_gkAddCancelButtonWithAction:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

+ (id)basicAlertControllerWithTitle:(id)arg1 message:(id)arg2;
+ (id)basicAlertControllerWithTitle:(id)arg1 message:(id)arg2 internalError:(id)arg3;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)alertControllerForAddingDestinationWithType:(unsigned long long)arg1 andProceed:(id /* block */)arg2;
+ (id)alertControllerForAddingDestinationWithTypeString:(id)arg1 andProceed:(id /* block */)arg2;
+ (id)alertControllerForAddingHomeWithProceed:(id /* block */)arg1;
+ (id)alertControllerForAddingRoomWithProceed:(id /* block */)arg1;
+ (id)alertControllerForAddingServiceGroupWithProceed:(id /* block */)arg1;
+ (id)alertControllerForAddingZoneWithProceed:(id /* block */)arg1;
+ (id)hu_actionSheetWithTitle:(id)arg1 message:(id)arg2 anchorView:(id)arg3;
+ (id)hu_alertControllerForAcknowledgementWithTitle:(id)arg1 message:(id)arg2;
+ (id)hu_alertControllerForAddingPersonWithCompletionHandler:(id /* block */)arg1;
+ (id)hu_alertControllerForUnimplementedFeature:(id)arg1;
+ (id)hu_alertControllerWithActivityIndicatorAndTitle:(id)arg1;

- (void)hu_anchorActionSheetIfNeededFrom:(id)arg1;
- (id)hu_preloadContent;

// Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI

+ (void)MCUIShowAlertForError:(id)arg1 fromViewController:(id)arg2 suggestedTitle:(id)arg3 suggestedMessage:(id)arg4 completion:(id /* block */)arg5;
+ (void)MCUIShowRebootAlertFromViewController:(id)arg1;
+ (void)MCUIShowWatchUnavailableAlertWithCompletion:(id /* block */)arg1;

- (void)MCUIAddActionWithTitle:(id)arg1 style:(long long)arg2 completion:(id /* block */)arg3;
- (void)MCUIAddCancelActionWithTitle:(id)arg1;
- (void)MCUIShowFromController:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (void)ic_showAlertWithTitle:(id)arg1 message:(id)arg2 viewController:(id)arg3;
+ (void)ic_showAlertWithTitle:(id)arg1 viewController:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)alertForErrorWithError:(id)arg1 acknowledgeButtonText:(id)arg2 exitButtonText:(id)arg3 onAcknowledge:(id /* block */)arg4 onExit:(id /* block */)arg5 onTryAgain:(id /* block */)arg6;
+ (void)reportRecoveryActionUsedFor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_alertControllerWithError:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)px_alertForCPLEnableError:(id)arg1 actionHandler:(id /* block */)arg2 cancelHandler:(id /* block */)arg3;
+ (id)px_alertForStorageUpgradeLoadFailure;
+ (id)px_deleteITunesContentAlertWithAssetCount:(long long)arg1 includesPhotos:(bool)arg2 includesVideos:(bool)arg3 actionHandler:(id /* block */)arg4 cancelHandler:(id /* block */)arg5;
+ (void)px_showDebugAlertInKeyWindowWithMessage:(id)arg1;

- (bool)px_shouldForceAlertStyle;
- (void)setPx_shouldForceAlertStyle:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI

+ (id)alertControllerForFeatureNotAvailable;

// Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI

+ (id)skui_alertControllerForRequiredAuthorizationIfNeccesaryForBundle:(id)arg1 authGroup:(id)arg2 destructiveHandler:(id /* block */)arg3;
+ (id)skui_alertControllerForRequiredAuthorizationIfNeccesaryForBundle:(id)arg1 authGroup:(id)arg2 tableView:(id)arg3 indexPath:(id)arg4 destructiveHandler:(id /* block */)arg5;
+ (id)skui_requiredAuthorizationAlertIfNeccesaryForBundle:(id)arg1 authGroup:(id)arg2 title:(id)arg3 message:(id)arg4 destructiveButtonTitle:(id)arg5 destructiveHandler:(id /* block */)arg6 cancelButtonTitle:(id)arg7 cancelHandler:(id /* block */)arg8;

// Image: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI

+ (id)hksp_notificationsWontFireAlertControllerWithLocalizedTitle:(id)arg1 localizedDismiss:(id)arg2 completion:(id /* block */)arg3;
+ (id)notificationsWontFireAlertControllerWithLocalizedTitle:(id)arg1 localizedDismiss:(id)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences

+ (id)tps_alertControllerWithError:(id)arg1;
+ (id)tps_tapToRadarAlertControllerWithError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)callEndStewieControllerWithDialRequest:(id)arg1 dialAction:(id /* block */)arg2 title:(id)arg3 buttonTitle:(id)arg4;
+ (id)enableWiFiCallingAlertController;
+ (id)enableWiFiCallingAlertControllerWithPreferredStyle:(long long)arg1;
+ (id)networkUnavailableAlertControllerWithCallProvider:(id)arg1 dialType:(long long)arg2 senderIdentityUUID:(id)arg3;
+ (id)telephonyAccountUnavailableAlertControllerWithSenderIdentities:(id)arg1 preferredStyle:(long long)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore

- (id)actionForButton:(id)arg1 inAlert:(id)arg2;
- (void)dismissAlert:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)replaceButtonAtIndex:(unsigned long long)arg1 withButton:(id)arg2 forAlert:(id)arg3;
- (void)setButtons:(id)arg1 forAlert:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

+ (id)sheetAlertControllerWithTitle:(id)arg1 message:(id)arg2;

@end
