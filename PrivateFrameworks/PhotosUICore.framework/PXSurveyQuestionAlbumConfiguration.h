
@interface PXSurveyQuestionAlbumConfiguration : NSObject <PXSurveyQuestionConfiguration> {
    PHAssetCollection * _album;
    PXDisplayAssetContentView * _contentView;
    PXSurveyQuestionConfigurationHandlers * _handlers;
    bool  _isStale;
    PHAsset * _keyAsset;
    PXTitleSubtitleUILabel * _label;
    NSString * _title;
}

@property (nonatomic, readonly) PHAssetCollection *album;
@property (nonatomic, readonly) UIImage *contentImageForOneUp;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRectForOneUp;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXSurveyQuestionConfigurationHandlers *handlers;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isStale;
@property (nonatomic, readonly) PHAsset *keyAsset;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)_getTitleSubtitleLabelSpec;
- (void)_handleDidSelectAlbumView;
- (id)album;
- (id)contentImageForOneUp;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForOneUp;
- (id)contentView;
- (void)dealloc;
- (id)handlers;
- (id)init;
- (id)initWithTitle:(id)arg1 album:(id)arg2;
- (bool)isStale;
- (id)keyAsset;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)needsDisplayRefreshForChange:(id)arg1;
- (bool)needsQuestionInvalidationForChange:(id)arg1;
- (void)setHandlers:(id)arg1;
- (void)setIsStale:(bool)arg1;
- (id)title;

@end
