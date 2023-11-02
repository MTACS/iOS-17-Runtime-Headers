
@interface CKUIBehaviorPad : CKUIBehavior

- (double)appDrawerTitleIconHeight;
- (double)appDrawerTitleIconWidth;
- (struct CGSize { double x1; double x2; })attachmentBrowserDefaultSizeForSquare;
- (double)attachmentBrowserGridInterItemSpacing;
- (unsigned long long)browserViewControllerSheetDetentStyle;
- (bool)canPresentOverKeyboard;
- (bool)canShowContactPhotosInConversationList;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contactPhotoTranscriptInsets;
- (double)conversationListMinimumWidthForHiddenContactImage;
- (double)conversationListWidthForInterfaceOrientation:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultAVPlayerViewContorllerControlsInsets;
- (unsigned long long)defaultConversationViewingMessageCount;
- (struct CGSize { double x1; double x2; })detonatedItemBalloonViewSize;
- (struct CGSize { double x1; double x2; })detonatedItemDocumentIconSize;
- (struct CGSize { double x1; double x2; })documentIconSize;
- (double)entryViewMaxHandWritingPluginShelfHeight;
- (id)fullscreenPickerActionLayoutAxisPrioritiesForWidth:(double)arg1;
- (long long)groupRecipientSelectionPresentationStyle;
- (bool)isAppStripInKeyboard;
- (bool)keyboardSizeDeterminesAppCardDetentHeight;
- (bool)lowClearanceInLandscape;
- (double)maxNavigationBarNoContactPhotoCollapsedHeightValue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minTranscriptMarginInsets;
- (double)navigationBarMaxHeight;
- (double)navigationBarSubtitleViewAdditionalVerticalPadding;
- (unsigned long long)numberOfButtonsInPhotoPicker;
- (double)photoPickerMaxPopoverPhotoHeight;
- (double)photoPickerPopoverWidth;
- (bool)photoPickerShouldZoomOnSelection;
- (bool)presentForwardingUIModally;
- (bool)presentsAutocompleteInAPopover;
- (bool)presentsQuickLookController;
- (double)previewMaxWidth;
- (double)searchLinksThumbnailWidth;
- (double)searchPhotosThumbnailWidth;
- (bool)shouldAlignRecipientGlyphsWithMargins;
- (bool)shouldPopoverSuggestionsBanner;
- (bool)shouldRefreshAlternateAddressesSheet;
- (bool)shouldShowDisclosureChevronInRecipientAtoms;
- (bool)shouldSuppressRotationInNewCompose;
- (bool)showMMSSetup;
- (bool)showPendingInConversationList;
- (bool)showsConversationListCellChevronImage;
- (unsigned long long)suggestedAppStripLimit;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)supportsEntryViewPlusButtonLongPress;
- (double)transcriptContactImageDiameter;
- (double)transcriptHeaderViewMaxRows;
- (bool)usesPopovers;
- (bool)usesUncollapsedSplitview;
- (double)welcomeViewContentViewTopAnchorLayoutConstraintConstant;

@end