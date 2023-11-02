
@interface APUISuggestionsWidgetView : UIView {
    NSMutableArray * _containerViews;
    <APUISuggestionsWidgetViewDelegate> * _delegate;
    unsigned long long  _platterSize;
    UIStackView * _stackView;
    ATXSuggestionLayout * _suggestionLayout;
}

@property (nonatomic) <APUISuggestionsWidgetViewDelegate> *delegate;
@property (nonatomic, retain) UIStackView *stackView;

+ (id)_developerModeSuggestions:(unsigned long long)arg1;
+ (bool)_shouldDisplayRecentDonationsOrUpcomingMediaForTesting;

- (void).cxx_destruct;
- (void)_addFullWidthWidgetContainerViewWithSuggestion:(id)arg1 withTopSeparator:(bool)arg2;
- (id)_addWidgetContainerViewWithSuggestion:(id)arg1 toVerticalStackView:(id)arg2;
- (void)_checkOrLoadSuggestions:(id)arg1 inDeveloperMode:(bool)arg2 rowCount:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_clearStackView;
- (id)_createWidgetContainerViewWithSuggestion:(id)arg1;
- (void)_displayNoSuggestions;
- (bool)_hasBundleInstalledAndNotRestrictedForSuggestion:(id)arg1;
- (void)_layout1x4WithRowCount:(unsigned long long)arg1;
- (void)_layoutNotSupported:(long long)arg1;
- (void)_layoutOne2x2;
- (void)_setupStackViewIfNecessary;
- (id)_validSuggestionsWithSuggestions:(id)arg1;
- (void)addSeparatorViewToView:(id)arg1;
- (id)delegate;
- (void)highlightSuggestion:(id)arg1;
- (void)layoutSubviews;
- (void)logLayoutSuggestions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;
- (id)suggestionAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateWithSuggestionLayout:(id)arg1;

@end
