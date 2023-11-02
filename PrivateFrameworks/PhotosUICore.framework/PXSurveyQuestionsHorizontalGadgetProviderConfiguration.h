
@interface PXSurveyQuestionsHorizontalGadgetProviderConfiguration : NSObject {
    long long  _category;
    id /* block */  _customInfoAlertActionViewControllerProvider;
    PXSurveyQuestionsGadgetProvider * _gadgetProvider;
    NSArray * _radarKeywordIDs;
    NSString * _radarTitle;
}

@property (nonatomic, readonly, copy) NSString *customInfoAlertActionTitle;
@property (nonatomic, readonly) PXSurveyQuestionsGadgetProvider *gadgetProvider;
@property (nonatomic, readonly, copy) NSString *hideDateDefaultsKey;
@property (nonatomic, readonly, copy) NSString *hideForeverAlertMessage;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *infoAlertMessage;
@property (nonatomic, readonly, copy) NSString *infoAlertTitle;
@property (nonatomic, readonly, copy) PXRadarConfiguration *radarConfiguration;
@property (nonatomic, readonly, copy) NSString *radarPromptAnsweredQuestionCountDefaultsKey;
@property (nonatomic, readonly, copy) NSString *radarPromptDateDefaultsKey;
@property (nonatomic, readonly, copy) NSString *sectionTitle;

+ (id)generalConfiguration;

- (void).cxx_destruct;
- (id)_initWithCategory:(long long)arg1 gadgetProvider:(id)arg2;
- (id)customInfoAlertActionTitle;
- (id)customInfoAlertActionViewController:(id*)arg1;
- (id)gadgetProvider;
- (id)hideDateDefaultsKey;
- (id)hideForeverAlertMessage;
- (id)identifier;
- (id)infoAlertMessage;
- (id)infoAlertTitle;
- (id)init;
- (id)radarConfiguration;
- (id)radarPromptAnsweredQuestionCountDefaultsKey;
- (id)radarPromptDateDefaultsKey;
- (id)sectionTitle;

@end
