
@interface PXSurveyQuestionsHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable, PXSurveyQuestionsGadgetProviderDelegate> {
    PXSurveyQuestionsHorizontalGadgetProviderConfiguration * _configuration;
}

@property (nonatomic, readonly) long long forYouContentIdentifier;
@property (nonatomic, readonly) NSDate *mostRecentContentDate;

- (void).cxx_destruct;
- (void)didAnswerQuestionForGadgetProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)forYouContentIdentifier;
- (unsigned long long)gadgetType;
- (id)hideForeverAlertMessageForHorizontalCollectionGadget:(id)arg1;
- (void)horizontalCollectionGadget:(id)arg1 configureCustomInfoAlertActionsForAlertController:(id)arg2;
- (void)horizontalCollectionGadget:(id)arg1 hideUntilDate:(id)arg2;
- (id)infoAlertMessageForHorizontalCollectionGadget:(id)arg1;
- (id)infoAlertTitleForHorizontalCollectionGadget:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithIdentifier:(id)arg1 contentGadgetProvider:(id)arg2 title:(id)arg3 horizontalCollectionGadgetClass:(Class)arg4;
- (id)mostRecentContentDate;
- (id)radarConfigurationForHorizontalCollectionGadget:(id)arg1;

@end
