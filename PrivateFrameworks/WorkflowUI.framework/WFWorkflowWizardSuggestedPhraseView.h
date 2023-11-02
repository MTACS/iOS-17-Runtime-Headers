
@interface WFWorkflowWizardSuggestedPhraseView : UIView {
    <WFWorkflowWizardSuggestedPhraseViewDelegate> * _delegate;
    UILabel * _label;
    NSString * _suggestedPhrase;
}

@property (nonatomic) <WFWorkflowWizardSuggestedPhraseViewDelegate> *delegate;
@property (nonatomic) UILabel *label;
@property (nonatomic, readonly, copy) NSString *suggestedPhrase;

- (void).cxx_destruct;
- (id)delegate;
- (void)fadeOutHighlight;
- (void)highlight;
- (id)initWithSuggestedPhrase:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)label;
- (void)setDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)suggestedPhrase;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)unhighlight;

@end
