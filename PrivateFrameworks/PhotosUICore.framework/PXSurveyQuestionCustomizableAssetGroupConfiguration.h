
@interface PXSurveyQuestionCustomizableAssetGroupConfiguration : PXSurveyQuestionAssetGroupConfiguration {
    PXSurveyQuestionAssetGroupView * _contentView;
    NSNumber * _customMaximumPreviewAssetCount;
    NSString * _keyAssetLocalIdentifier;
}

@property (nonatomic, retain) NSNumber *customMaximumPreviewAssetCount;
@property (nonatomic, retain) NSString *keyAssetLocalIdentifier;

- (void).cxx_destruct;
- (id)contentView;
- (id)customMaximumPreviewAssetCount;
- (id)initWithTitle:(id)arg1 assetCollection:(id)arg2;
- (id)initWithTitle:(id)arg1 assetCollection:(id)arg2 customMaximumPreviewAssetCount:(id)arg3 keyAssetLocalIdentifier:(id)arg4;
- (id)keyAssetLocalIdentifier;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)px_surveyQuestionAssetGroupViewMetadataDateRangeStringWithFormatter:(id)arg1 assetGroupView:(id)arg2;
- (id)px_surveyQuestionAssetGroupViewMetadataLocationString:(id)arg1;
- (void)setCustomMaximumPreviewAssetCount:(id)arg1;
- (void)setKeyAssetLocalIdentifier:(id)arg1;

@end
