
@interface UIKeyboardCandidateViewConfiguration : NSObject {
    bool  _darkKeyboard;
    bool  _shouldAlwaysShowSortControl;
    bool  _shouldUsePredictionViewSecureRenderTraits;
}

@property (nonatomic, readonly) bool allowsPullDownGesture;
@property (nonatomic) bool darkKeyboard;
@property (nonatomic, readonly) UIColor *highlightedBackgroundColor;
@property (nonatomic, readonly) int inlineFloatingViewAdjustMode;
@property (nonatomic, readonly) unsigned long long maxNumberOfProactiveCandidates;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredInlineFloatingViewSize;
@property (nonatomic, readonly) unsigned long long rowsToExtend;
@property (nonatomic, readonly) bool shouldAlwaysShowSortControl;
@property (nonatomic, readonly) bool shouldAnimateStateTransition;
@property (nonatomic, readonly) bool shouldResizeKeyboardBackdrop;
@property (nonatomic, readonly) bool shouldUsePredictionViewSecureRenderTraits;
@property (nonatomic, readonly) bool willCoverKeyboardLayout;

+ (id)configuration;
+ (double)fontSizeMultiplierForCurrentLanguage;
+ (double)lineHeightMultiplierForCurrentLanguage;

- (bool)allowsPullDownGesture;
- (double)candidateDefaultFontSize;
- (id)candidateFontWithSize:(double)arg1;
- (id)candidateFontWithSize:(double)arg1 language:(id)arg2;
- (bool)darkKeyboard;
- (id)extendedScrolledState;
- (id)extendedState;
- (id)highlightedBackgroundColor;
- (id)initialState;
- (int)inlineFloatingViewAdjustMode;
- (unsigned long long)maxNumberOfProactiveCandidates;
- (struct CGSize { double x1; double x2; })preferredInlineFloatingViewSize;
- (unsigned long long)rowsToExtend;
- (void)setDarkKeyboard:(bool)arg1;
- (bool)shouldAlwaysShowSortControl;
- (bool)shouldAnimateStateTransition;
- (bool)shouldResizeKeyboardBackdrop;
- (bool)shouldUsePredictionViewSecureRenderTraits;
- (bool)willCoverKeyboardLayout;

@end
