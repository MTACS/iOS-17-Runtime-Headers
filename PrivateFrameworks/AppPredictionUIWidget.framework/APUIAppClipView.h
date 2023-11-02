
@interface APUIAppClipView : APUISuggestionView {
    ATXHeroData * _prediction;
    UITapGestureRecognizer * _tapRecognizer;
}

- (void).cxx_destruct;
- (void)_tapRecognized:(id)arg1;
- (void)layoutSuggestion:(id)arg1;
- (void)openPredictionAction;

@end
