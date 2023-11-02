
@interface APUIWidgetContainerView : UIView {
    <APUISuggestionsWidgetViewDelegate> * _delegate;
    unsigned long long  _platterSize;
    UIStackView * _stackView;
    ATXProactiveSuggestion * _suggestion;
    APUISuggestionView * _suggestionView;
    APUISuggestionsWidgetView * _suggestionsWidgetView;
}

@property (nonatomic) <APUISuggestionsWidgetViewDelegate> *delegate;
@property (nonatomic) unsigned long long platterSize;
@property (nonatomic, retain) ATXProactiveSuggestion *suggestion;
@property (nonatomic, readonly) APUISuggestionsWidgetView *suggestionsWidgetView;

- (void).cxx_destruct;
- (void)_createStackViewIfNeeded;
- (void)_displayNoSuggestionsWithSuggestion:(id)arg1;
- (void)_setActionSuggestion:(id)arg1;
- (void)_setAppClipSuggestion:(id)arg1;
- (void)_setAppSuggestion:(id)arg1;
- (void)_setLinkSuggestion:(id)arg1;
- (id)delegate;
- (void)displaySuggestion:(id)arg1;
- (unsigned long long)platterSize;
- (void)setDelegate:(id)arg1;
- (void)setPlatterSize:(unsigned long long)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setSuggestion:(id)arg1 inView:(id)arg2;
- (void)setSuggestionViewLabelsAlpha:(double)arg1;
- (void)setViewPressed:(bool)arg1;
- (id)suggestion;
- (id)suggestionsWidgetView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
