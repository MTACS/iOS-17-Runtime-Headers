
@interface TUISystemInputAssistantStyleFloat : NSObject <TUISystemInputAssistantStyle>

@property (nonatomic, readonly) UIImageSymbolConfiguration *barButtonImageSymbolConfiguration;
@property (nonatomic, readonly) double barButtonWidth;
@property (nonatomic, readonly) bool clipsToBounds;
@property (nonatomic, readonly) bool drawsPredictionBackdropView;
@property (nonatomic, readonly) bool enableButtonTintColor;
@property (nonatomic, readonly) double highlightCornerRadius;
@property (nonatomic, readonly) double highlightMargin;
@property (nonatomic, readonly) double minimumInterBarItemSpace;
@property (nonatomic, readonly) UIColor *predictionHighlightColor;
@property (nonatomic, readonly) UIColor *predictionSeparatorColor;
@property (nonatomic, readonly) double separatorMargin;
@property (nonatomic, readonly) bool shouldAnimatePredictionCandidate;
@property (nonatomic, readonly) bool useContinuousCornerInHighlight;

- (id)barButtonImageSymbolConfiguration;
- (double)barButtonWidth;
- (bool)clipsToBounds;
- (bool)drawsPredictionBackdropView;
- (bool)enableButtonTintColor;
- (double)highlightCornerRadius;
- (double)highlightMargin;
- (double)minimumInterBarItemSpace;
- (id)predictionHighlightColor;
- (id)predictionSeparatorColor;
- (double)separatorMargin;
- (bool)shouldAnimatePredictionCandidate;
- (bool)useContinuousCornerInHighlight;

@end
