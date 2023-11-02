
@interface SBFLockScreenMetrics : NSObject

+ (double)_notificationListBottomOffset;
+ (double)_notificationListSideOffset;
+ (double)_notificationListTopPadding;
+ (double)_subTitleHeight;
+ (double)dateBaselineOffsetFromTime;
+ (double)dateLabelFontSize;
+ (double)dateViewBaselineY;
+ (double)dateViewSideMargin;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })deviceInformationInsets;
+ (double)deviceInformationLabelFontLeading;
+ (double)deviceInformationLabelFontSize;
+ (double)deviceInformationParagraphSpacing;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })logoutInsets;
+ (double)logoutLabelFontSize;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })notificationListInsets;
+ (double)pinAlphanumericEntryFieldBottomYDistanceFromKeyboard:(bool)arg1;
+ (double)pinFixedDigitEntryFieldBottomYDistanceFromNumberPadTopButton:(bool)arg1;
+ (double)pinFixedDigitEntryFieldIndicatorDiameter:(bool)arg1;
+ (double)pinFixedDigitEntryFieldIndicatorPaddingWidth:(bool)arg1;
+ (double)pinFixedDigitEntryFieldIndicatorStrokeSize;
+ (double)pinKeyboardEntryFieldOffset:(bool)arg1;
+ (double)pinKeypadEntryFieldOffsetForSubtitle;
+ (double)pinKeypadStatusSubtitleTitleExtraOffset;
+ (id)pinKeypadStatusSubtitleViewTitleFont;
+ (double)pinKeypadStatusTitleBaselineOffsetFromEntryField;
+ (double)pinKeypadStatusTitleBaselineOffsetFromEntryFieldIncludingSubtitle;
+ (double)pinKeypadStatusTitleBaselineOffsetFromTitle;
+ (double)pinKeypadStatusTitleExtraOffsetIncludingSubtitle;
+ (id)pinKeypadStatusTitleViewTitleFont;
+ (double)pinLongNumericEntryFieldBottomYDistanceFromNumberPadTopButton:(bool)arg1;
+ (double)pinNumberPadAncillaryButtonOffset:(bool)arg1;
+ (double)pinNumberPadBaseOffsetFromTopOfScreen:(bool)arg1;
+ (double)pinNumberPadBottomPaddingHeight;
+ (double)pinNumberPadButtonOuterCircleDiameter:(bool)arg1;
+ (double)pinNumberPadButtonPaddingHeight:(bool)arg1;
+ (double)pinNumberPadButtonPaddingWidth;
+ (double)pinNumberPadWidth;
+ (struct CGSize { double x1; double x2; })proudLockAssetSize;
+ (double)proudLockCenterFromTopOfScreen;
+ (double)proudLockLandscapeOffset;
+ (double)proudLockOffsetFromTopOfScreen;
+ (double)proudLockScaleFactor;
+ (double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2;
+ (double)slideToUnlockFontSize;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })slideToUnlockInsets;
+ (double)slideToUnlockOverlayMargin;
+ (double)slideUpGrabberInset;
+ (double)subtitleBaselineOffsetFromTopOfScreen;
+ (struct CGSize { double x1; double x2; })systemApertureProudLockAssetSize;

@end
