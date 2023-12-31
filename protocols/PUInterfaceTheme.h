
@protocol PUInterfaceTheme <NSObject>

@required

- (UIColor *)airPlayControllerBackgroundColor;
- (UIColor *)airPlayVideoPlaceholderBackgroundColor;
- (UIImage *)airPlayVideoPlaceholderIcon;
- (UIColor *)airPlayVideoPlaceholderIconTintColor;
- (UIFont *)airPlayVideoPlaceholderMessageFont;
- (UIColor *)airPlayVideoPlaceholderMessageTextColor;
- (UIFont *)airPlayVideoPlaceholderTitleFont;
- (UIColor *)airPlayVideoPlaceholderTitleTextColor;
- (UIColor *)albumBadgeInTitleColor;
- (UIColor *)albumCornersBackgroundColor;
- (UIColor *)albumListBackgroundColor;
- (double)albumListDisabledAlbumStackViewAlpha;
- (double)albumListDisabledAlbumTitleAlpha;
- (UIFont *)albumListSectionTitleLabelFont;
- (UIFont *)albumListSubtitleLabelFont;
- (UIFont *)albumListTitleLabelFont;
- (NSAttributedString *)attributedStringForCloudFeedGroupHeaderWithText:(NSString *)arg1;
- (UIColor *)badgeOverThumbnailColor;
- (UIColor *)bannerBackgroundColor;
- (double)bannerHeight;
- (UIColor *)cloudFeedBackgroundColor;
- (NSDictionary *)cloudFeedDefaultTextAttributes;
- (NSDictionary *)cloudFeedEmphasizedTextAttributes;
- (NSDictionary *)cloudFeedInteractionLargerTextAttributes;
- (NSDictionary *)cloudFeedInteractionTextAttributes;
- (NSDictionary *)cloudFeedInvitationSubtitleTextAttributes;
- (NSDictionary *)cloudFeedInvitationTitleTextAttributes;
- (NSDictionary *)cloudFeedLargerDefaultTextAttributes;
- (NSDictionary *)cloudFeedLargerEmphasizedTextAttributes;
- (UIImage *)cloudFeedSectionHeaderBackgroundImage;
- (UIColor *)cloudFeedSeparatorColor;
- (double)cloudFeedSeparatorHeight;
- (NSDictionary *)cloudFeedWhiteDefaultTextAttributes;
- (NSDictionary *)cloudFeedWhiteEmphasizedTextAttributes;
- (NSString *)commentsButtonStringForCount:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })commentsButtonTextInset;
- (UIImage *)compactLoadErrorIcon;
- (void)configureAlbumListSectionTitleLabel:(UILabel *)arg1;
- (void)configureAlbumListStackViewPhonePhotoDecoration:(PUPhotoDecoration *)arg1;
- (void)configureAlbumListSubtitleLabel:(UILabel *)arg1 asOpaque:(bool)arg2;
- (void)configureAlbumListTitleLabel:(UILabel *)arg1 asOpaque:(bool)arg2;
- (void)configureAlbumListTitleTextField:(UITextField *)arg1 asOpaque:(bool)arg2;
- (void)configureBannerLabel:(UILabel *)arg1;
- (void)configureBannerStackView:(PUStackView *)arg1;
- (void)configureCloudFeedCommentButton:(UIButton *)arg1 withCount:(long long)arg2;
- (void)configureCloudFeedGroupHeaderTextCell:(PUFeedTextCell *)arg1 contentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 withText:(NSString *)arg3;
- (void)configureCloudFeedInvitationReplyButton:(UIButton *)arg1;
- (void)configureCloudFeedSectionHeaderTextCell:(PUFeedTextCell *)arg1 contentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 descriptionAttributedText:(NSAttributedString *)arg3 detailAttributedText:(NSAttributedString *)arg4;
- (void)configureCloudFeedStackView:(PUStackView *)arg1 withStackSize:(struct CGSize { double x1; double x2; })arg2;
- (void)configureCompactProgressIndicatorMessageLabel:(UILabel *)arg1;
- (void)configureEditPluginListCellLabel:(UILabel *)arg1;
- (void)configureEditPluginListNavigationController:(UINavigationController *)arg1;
- (void)configureEditPluginNavigationController:(UINavigationController *)arg1;
- (void)configureEditPluginUserDefaultsAccessorySwitch:(UISwitch *)arg1;
- (void)configureEditPluginUserDefaultsCell:(UITableViewCell *)arg1 withIcon:(UIImage *)arg2 title:(NSString *)arg3;
- (void)configureEditPluginUserDefaultsTableView:(UITableView *)arg1;
- (void)configureMapViewAnnotationCountLabel:(UILabel *)arg1;
- (void)configureProgressIndicatorMessageLabel:(UILabel *)arg1;
- (void)configureSearchResultCountLabel:(UILabel *)arg1;
- (void)configureSearchSubtitleLabel:(UILabel *)arg1;
- (void)configureSearchTitleLabel:(UILabel *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentCommentsButtonImageInset;
- (UIColor *)contentCommentsHiddenButtonImageColor;
- (NSDictionary *)contentCommentsHiddenButtonTextAttributes;
- (UIColor *)contentCommentsShownButtonImageColor;
- (NSDictionary *)contentCommentsShownButtonTextAttributes;
- (UIButton *)createCloudFeedCommentButton;
- (double)editToolbarButtonSize;
- (UIColor *)folderCellBackgroundColor;
- (double)padAlbumCornerRadius;
- (double)phoneAlbumCornerRadius;
- (long long)photoBrowserBarStyle;
- (UIColor *)photoBrowserChromeHiddenBackgroundColor;
- (UIColor *)photoBrowserChromeVisibleBackgroundColor;
- (UIFont *)photoBrowserPhotoPrimaryTitleFont;
- (UIFont *)photoBrowserPhotoSubtitleFont;
- (UIColor *)photoBrowserSpotlightThemeColor;
- (long long)photoBrowserStatusBarStyle;
- (UIFont *)photoBrowserTimeTitleFont;
- (UIColor *)photoBrowserTitleViewTappableTextColor;
- (UIColor *)photoBrowserTitleViewTextColor;
- (UIColor *)photoCollectionCloudQuotaBannerBackgroundColorHighlighted:(bool)arg1;
- (UIFont *)photoCollectionCloudQuotaBannerFont;
- (UIColor *)photoCollectionCloudQuotaBannerLinkTextColorHighlighted:(bool)arg1;
- (UIFont *)photoCollectionCloudQuotaBannerLinkTextFont;
- (long long)photoCollectionCloudQuotaBannerTextAlignment;
- (UIColor *)photoCollectionCloudQuotaBannerTextColorHighlighted:(bool)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })photoCollectionCloudQuotaBannerTextMargins;
- (double)photoCollectionToolbarIconToTextSpacerWidth;
- (double)photoCollectionToolbarTextTitleSpacerWidth;
- (UIColor *)photoCollectionViewBackgroundColor;
- (int)photoCollectionViewBackgroundColorValue;
- (UIColor *)photoEditingActiveFilterTitleColor;
- (UIColor *)photoEditingAdjustmentControlAlternateColor;
- (UIColor *)photoEditingAdjustmentControlDefaultColor;
- (UIColor *)photoEditingAdjustmentsBarBackgroundColor;
- (UIColor *)photoEditingAdjustmentsBarCurrentPositionDisabledMarkerColor;
- (UIColor *)photoEditingAdjustmentsBarCurrentPositionMarkerColor;
- (UIColor *)photoEditingAdjustmentsBarDisabledColor;
- (UIColor *)photoEditingAdjustmentsBarHighlightColor;
- (UIColor *)photoEditingAdjustmentsBarMainColor;
- (UIColor *)photoEditingAdjustmentsBarOriginalPositionMarkerColor;
- (UIColor *)photoEditingAdjustmentsBarPlayheadColor;
- (UIColor *)photoEditingAdjustmentsBarSuggestedMarkerColor;
- (UIColor *)photoEditingAdjustmentsModeLabelColor;
- (UIFont *)photoEditingAdjustmentsModeLabelFont;
- (UIFont *)photoEditingAdjustmentsModePickerFont;
- (UIColor *)photoEditingAdjustmentsModePickerValueColor;
- (UIFont *)photoEditingAdjustmentsModePickerValueFont;
- (UIColor *)photoEditingAdjustmentsToolBackgroundColor;
- (UIColor *)photoEditingBackgroundColor;
- (UIColor *)photoEditingBadgeViewContentColor;
- (UIColor *)photoEditingBadgeViewFillColor;
- (UIColor *)photoEditingCircularIndicatorBackgroundStrokeColor;
- (UIColor *)photoEditingCircularIndicatorProgressStrokeColor;
- (UIColor *)photoEditingCropHandleColor;
- (UIColor *)photoEditingCropInnerLineColor;
- (UIColor *)photoEditingCropTiltWheelColor;
- (UIFont *)photoEditingCropTiltWheelFont;
- (UIColor *)photoEditingCropToggleButtonColor;
- (UIFont *)photoEditingCropToggleButtonFont;
- (UIColor *)photoEditingDepthButtonDisabledColor;
- (UIColor *)photoEditingDepthButtonEnabledColor;
- (UIColor *)photoEditingEffectCellHighlightBackgroundColor;
- (UIColor *)photoEditingEffectSelectionLoupeColor;
- (UIFont *)photoEditingFilterTitleFont;
- (UIColor *)photoEditingInactiveFilterTitleColor;
- (UIColor *)photoEditingIrisDisabledColor;
- (UIColor *)photoEditingIrisEnabledColor;
- (UIColor *)photoEditingKeyPhotoSelectionNormalColor;
- (UIColor *)photoEditingOverlayBadgeBackgroundColor;
- (UIColor *)photoEditingOverlayBadgeColor;
- (UIFont *)photoEditingOverlayBadgeFont;
- (UIColor *)photoEditingPopoverBackgroundColor;
- (UIColor *)photoEditingSolidBackgroundViewColor;
- (UIColor *)photoEditingTimecodeBackgroundColor;
- (UIColor *)photoEditingTimecodeLabelColor;
- (UIColor *)photoEditingToolButtonColor;
- (UIColor *)photoEditingToolbarButtonColor;
- (UIFont *)photoEditingToolbarButtonCompactFont;
- (UIFont *)photoEditingToolbarButtonNormalFont;
- (UIColor *)photoEditingToolbarButtonSelectedColor;
- (UIColor *)photoEditingToolbarDarkGradientEndColor;
- (UIColor *)photoEditingToolbarDarkGradientStartColor;
- (UIColor *)photoEditingToolbarDestructiveButtonColor;
- (UIColor *)photoEditingToolbarLightGradientEndColor;
- (UIColor *)photoEditingToolbarLightGradientStartColor;
- (UIColor *)photoEditingToolbarMainButtonColor;
- (UIColor *)photoEditingToolbarSecondaryButtonColor;
- (UIColor *)photoEditingToolbarUltralightGradientEndColor;
- (UIColor *)photoEditingToolbarUltralightGradientStartColor;
- (UIColor *)photoEditingToolbarUnderlineColor;
- (UIColor *)photoEditingTooltipColor;
- (UIFont *)photoEditingTooltipFont;
- (UIColor *)photoEditingTopToolbarToolLabelButtonColor;
- (UIColor *)photoEditingTrimControllerBackgroundColor;
- (UIColor *)photoEditingTrimPlayheadLineColor;
- (UIColor *)placeholderCellBackgroundColor;
- (UIColor *)playbackTimeLabelBackgroundColor;
- (UIFont *)playbackTimeLabelFont;
- (UIColor *)playheadBackgroundColor;
- (UIColor *)playheadColor;
- (UIColor *)playheadOutlineColor;
- (UIImage *)regularLoadErrorIcon;
- (UIColor *)scrubberPlaceholderColor;
- (NSDictionary *)searchDefaultAttributes;
- (NSDictionary *)searchDimmedAttributes;
- (NSDictionary *)searchItalicTitleAttributes;
- (UIFont *)searchItalicTitleLabelFont;
- (UIFont *)searchRecentLabelFont;
- (UIColor *)searchRecentLabelTextColor;
- (UIFont *)searchResultCountLabelFont;
- (UIColor *)searchResultCountTextColor;
- (double)searchSingleTitleBottomBaselineDistance;
- (double)searchSingleTitleTopBaselineDistance;
- (double)searchSubtitleBottomBaselineDistance;
- (UIFont *)searchSubtitleLabelFont;
- (UIColor *)searchSubtitleTextColor;
- (UIFont *)searchTitleLabelFont;
- (double)searchTitleSubtitleBaselineDistance;
- (double)searchTitleTopBaselineDistance;
- (NSDictionary *)sectionHeaderNotTappableTextAttributes;
- (UIFont *)sharedAlbumCommentCardAlbumTitleFont;
- (UIFont *)sharedAlbumCommentCardButtonFont;
- (UIFont *)sharedAlbumCommentCardTextFont;
- (UIFont *)sharedAlbumCommentCardTitleFont;
- (NSDictionary *)textBlockBelowArtSubTitleTextAttributes;
- (NSDictionary *)textBlockBelowArtTitleEmphasizedTextAttributes;
- (NSDictionary *)textBlockBelowArtTitleTextAttributes;
- (UIColor *)tintColorForBarStyle:(long long)arg1;
- (UIColor *)toolbarAirPlayButtonColor;
- (UIColor *)toolbarCommentsHiddenButtonImageColor;
- (NSDictionary *)toolbarCommentsHiddenButtonTextAttributes;
- (UIColor *)toolbarCommentsShownButtonImageColor;
- (NSDictionary *)toolbarCommentsShownButtonTextAttributes;
- (UIImage *)topLevelNavigationBarBackButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (UIImage *)topLevelNavigationBarButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (UIColor *)topLevelNavigationBarButtonTintColor;
- (struct UIOffset { double x1; double x2; })topLevelNavigationBarButtonTitlePositionAdjustmentforBarMetrics:(long long)arg1;
- (NSDictionary *)topLevelNavigationBarButtonTitleTextAttributesForState:(unsigned long long)arg1;
- (UIImage *)topLevelNavigationBarDoneButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (NSDictionary *)topLevelNavigationBarDoneButtonTitleTextAttributesForState:(unsigned long long)arg1;
- (long long)topLevelStatusBarStyle;
- (UIFont *)topToolbarToolButtonFont;
- (double)topToolbarToolButtonGlyphSize;
- (UIFont *)topToolbarToolLabelFont;
- (UIColor *)videoEditingBackgroundColor;
- (UIFont *)videoEditingToolbarButtonNormalFont;
- (UIColor *)videoEditingToolbarDestructiveButtonColor;
- (UIColor *)videoEditingToolbarMainButtonColor;
- (UIColor *)videoEditingToolbarSecondaryButtonColor;
- (UIColor *)videoEditingToolbarToolButtonColor;
- (double)videoPaletteBottomMargin;
- (double)videoPaletteSideMargin;
- (UIColor *)videoScrubberTileBackgroundColor;
- (UIFont *)videoSearchResultLabelFont;

@end
