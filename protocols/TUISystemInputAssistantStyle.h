
@protocol TUISystemInputAssistantStyle

@required

- (UIImageSymbolConfiguration *)barButtonImageSymbolConfiguration;
- (double)barButtonWidth;
- (bool)clipsToBounds;
- (bool)drawsPredictionBackdropView;
- (bool)enableButtonTintColor;
- (double)highlightCornerRadius;
- (double)highlightMargin;
- (double)minimumInterBarItemSpace;
- (UIColor *)predictionHighlightColor;
- (UIColor *)predictionSeparatorColor;
- (double)separatorMargin;
- (bool)shouldAnimatePredictionCandidate;
- (bool)useContinuousCornerInHighlight;

@end
