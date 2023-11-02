
@interface PXSurveyQuestionAssetGroupConfiguration : NSObject <PXSurveyQuestionAssetGroupViewDelegate, PXSurveyQuestionConfiguration> {
    PHAssetCollection * _assetCollection;
    PXSurveyQuestionAssetGroupView * _contentView;
    PXSurveyQuestionConfigurationHandlers * _handlers;
    bool  _isStale;
    NSString * _title;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) UIImage *contentImageForOneUp;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRectForOneUp;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXSurveyQuestionConfigurationHandlers *handlers;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isStale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)contentImageForOneUp;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForOneUp;
- (id)contentView;
- (id)handlers;
- (id)init;
- (id)initWithTitle:(id)arg1 assetCollection:(id)arg2;
- (bool)isStale;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)px_surveyQuestionAssetGroupViewMetadataDateRangeStringWithFormatter:(id)arg1 assetGroupView:(id)arg2;
- (id)px_surveyQuestionAssetGroupViewMetadataLocationString:(id)arg1;
- (void)px_surveyQuestionAssetGroupViewWasTapped:(id)arg1;
- (void)setHandlers:(id)arg1;
- (void)setIsStale:(bool)arg1;
- (id)title;

@end
