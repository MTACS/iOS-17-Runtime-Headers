
@interface PKNumberPadSuggestionsView : UIStackView {
    unsigned char  _batchedUpdateCount;
    UIColor * _buttonBackgroundColor;
    UIColor * _buttonTextColor;
    <PKNumberPadSuggestionsViewDelegate> * _delegate;
    bool  _needsReload;
    bool  _needsUpdate;
    NSArray * _suggestionButtons;
    NSArray * _suggestions;
}

@property (nonatomic, copy) UIColor *buttonBackgroundColor;
@property (nonatomic, copy) UIColor *buttonTextColor;
@property (nonatomic) <PKNumberPadSuggestionsViewDelegate> *delegate;
@property (nonatomic, copy) NSArray *suggestions;

+ (struct CGSize { double x1; double x2; })defaultSize;

- (void).cxx_destruct;
- (id)_createBorderedButtonForSuggestion:(id)arg1 withBorder:(unsigned long long)arg2 primaryAction:(id)arg3;
- (void)_reloadSubviews;
- (void)_selectedSuggestion:(id)arg1;
- (void)_updateButtons;
- (id)buttonBackgroundColor;
- (id)buttonTextColor;
- (id)delegate;
- (id)initWithDefaultFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)setButtonBackgroundColor:(id)arg1;
- (void)setButtonTextColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestions;

@end
