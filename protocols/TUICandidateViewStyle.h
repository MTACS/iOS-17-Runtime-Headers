
@protocol TUICandidateViewStyle <NSObject>

@required

- (bool)allowCandidateGridExpanding;
- (long long)alternativeTextAlignment;
- (UIColor *)alternativeTextColor;
- (UIFont *)alternativeTextFont;
- (UIFont *)annotationTextFont;
- (UIColor *)arrowButtonBackgroundColor;
- (bool)arrowButtonBackgroundHidden;
- (double)arrowButtonHeight;
- (NSString *)arrowButtonImageName;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arrowButtonPadding;
- (UIImage *)arrowButtonSeparatorImage;
- (UIColor *)backgroundColor;
- (double)backgroundOpacity;
- (UIFont *)candidateFont;
- (UIColor *)candidateNumberColor;
- (UIFont *)candidateNumberFont;
- (UIColor *)cellBackgroundColor;
- (UIImage *)cellBackgroundImage;
- (double)cellCornerRadius;
- (UIImage *)cellSeparatorImage;
- (long long)cellTextAlignment;
- (unsigned long long)columnsCount;
- (double)cornerRadius;
- (bool)darkBackdrop;
- (bool)disableSwitchingSortingMethodByTabKey;
- (bool)doNotClipToBounds;
- (bool)dontSelectLastItemByBackwardMoving;
- (bool)dragGestureDisabled;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })extraCellPadding;
- (bool)fillGridWithLines;
- (double)foregroundOpacity;
- (UIColor *)gridBackgroundColor;
- (struct CGPoint { double x1; double x2; })gridLineOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })gridLinePadding;
- (unsigned long long)gridMaskedCorners;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })gridPadding;
- (UIColor *)groupHeaderBackgroundColor;
- (bool)hidesPartialCandidates;
- (UIColor *)highlightedAlternativeTextColor;
- (UIColor *)highlightedBackgroundColor;
- (UIColor *)highlightedCandidateNumberColor;
- (UIImage *)highlightedCellBackgroundImage;
- (UIColor *)highlightedRowBackgroundColor;
- (UIColor *)highlightedTextColor;
- (long long)layoutOrientation;
- (UIImage *)leftEdgeMaskImage;
- (UIImage *)leftEdgeSeparatorImage;
- (long long)lineBreakMode;
- (UIColor *)lineColor;
- (unsigned long long)maskedCorners;
- (unsigned long long)maxNumberOfProactiveCells;
- (double)maximumIconWidth;
- (double)minimumCellPadding;
- (double)minimumCellWidth;
- (double)minimumInterItemSpacing;
- (long long)minimumNumberOfCandidates;
- (UIImage *)rightEdgeMaskImage;
- (UIImage *)rightEdgeSeparatorImage;
- (double)rowHeight;
- (bool)scrollDisabled;
- (void)setLineBreakMode:(long long)arg1;
- (bool)showExtraLineBeforeFirstRow;
- (bool)showOneMoreCandidate;
- (bool)showsIndex;
- (double)singleSlottedCellMargin;
- (bool)skipInlineCandidate;
- (UIImage *)slottedCellSeparatorImage;
- (UIColor *)sortControlBackgroundColor;
- (UIColor *)sortControlColor;
- (UIFont *)sortControlFont;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sortControlPadding;
- (UIFont *)supplementalLexiconCandidateFont;
- (UIColor *)textColor;
- (UIColor *)transliterationCandidateBackgroundColor;
- (UIImage *)transliterationCandidateBackgroundImage;

@optional

- (bool)shouldJustifyRow;

@end
