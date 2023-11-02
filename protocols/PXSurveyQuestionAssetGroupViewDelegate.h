
@protocol PXSurveyQuestionAssetGroupViewDelegate <NSObject>

@required

- (NSString *)px_surveyQuestionAssetGroupViewMetadataDateRangeStringWithFormatter:(NSDateFormatter *)arg1 assetGroupView:(PXSurveyQuestionAssetGroupView *)arg2;
- (NSString *)px_surveyQuestionAssetGroupViewMetadataLocationString:(PXSurveyQuestionAssetGroupView *)arg1;
- (void)px_surveyQuestionAssetGroupViewWasTapped:(PXSurveyQuestionAssetGroupView *)arg1;

@end
