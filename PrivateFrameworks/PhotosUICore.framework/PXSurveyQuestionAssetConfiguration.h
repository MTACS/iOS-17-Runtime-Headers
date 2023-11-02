
@interface PXSurveyQuestionAssetConfiguration : NSObject <PXSurveyQuestionConfiguration> {
    <PXDisplayAsset> * _asset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _assetContentsRect;
    PXDisplayAssetContentView * _assetView;
    PXSurveyQuestionConfigurationHandlers * _handlers;
    bool  _isStale;
    NSString * _title;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } assetContentsRect;
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

+ (void)configureViewForAsset:(id)arg1;

- (void).cxx_destruct;
- (void)_handleDidSelectAssetView;
- (id)asset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })assetContentsRect;
- (id)contentImageForOneUp;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForOneUp;
- (id)contentView;
- (void)dealloc;
- (id)handlers;
- (id)init;
- (id)initWithTitle:(id)arg1 asset:(id)arg2;
- (bool)isStale;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)needsQuestionInvalidationForChange:(id)arg1;
- (void)setHandlers:(id)arg1;
- (void)setIsStale:(bool)arg1;
- (id)title;

@end
