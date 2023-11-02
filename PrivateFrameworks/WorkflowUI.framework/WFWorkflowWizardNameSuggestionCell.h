
@interface WFWorkflowWizardNameSuggestionCell : UITableViewCell <WFWorkflowWizardSuggestedPhraseViewDelegate> {
    <WFWorkflowWizardNameSuggestionCellDelegate> * _delegate;
    UILabel * _infoLabel;
    UIStackView * _stackView;
    NSArray * _suggestedPhrases;
    NSArray * _suggestionsViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFWorkflowWizardNameSuggestionCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *infoLabel;
@property (nonatomic, copy) NSString *infoText;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, copy) NSArray *suggestedPhrases;
@property (nonatomic, retain) NSArray *suggestionsViews;
@property (readonly) Class superclass;

+ (id)infoFont;
+ (double)preferredHeightForWidth:(double)arg1 infoText:(id)arg2 suggestedPhrases:(id)arg3;
+ (id)suggestionsFont;
+ (id)suggestionsText;

- (void).cxx_destruct;
- (id)delegate;
- (id)infoLabel;
- (id)infoText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInfoText:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setSuggestedPhrases:(id)arg1;
- (void)setSuggestionsViews:(id)arg1;
- (id)stackView;
- (id)suggestedPhrases;
- (id)suggestionsViews;
- (void)workflowWizardSuggestedPhraseViewDidSelectSuggestedPhrase:(id)arg1;

@end
