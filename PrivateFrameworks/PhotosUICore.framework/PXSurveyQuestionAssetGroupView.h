
@interface PXSurveyQuestionAssetGroupView : UIView {
    PHAssetCollection * _assetCollection;
    NSNumber * _customMaximumPreviewAssetCount;
    NSDateFormatter * _dateFormatter;
    UILabel * _dateRangeLabel;
    <PXSurveyQuestionAssetGroupViewDelegate> * _delegate;
    double  _imagePadding;
    NSMutableArray * _imageViews;
    NSObject<OS_dispatch_queue> * _imageViewsQueue;
    NSString * _keyAssetLocalIdentifier;
    UILabel * _locationLabel;
    UIView * _metadataView;
    CAGradientLayer * _metadataViewGradient;
    NSMutableSet * _presentedAssetIds;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, retain) NSNumber *customMaximumPreviewAssetCount;
@property (nonatomic, retain) UILabel *dateRangeLabel;
@property (nonatomic) <PXSurveyQuestionAssetGroupViewDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *imageViews;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *imageViewsQueue;
@property (nonatomic, retain) NSString *keyAssetLocalIdentifier;
@property (nonatomic, retain) UILabel *locationLabel;
@property (nonatomic, retain) UIView *metadataView;
@property (nonatomic, retain) CAGradientLayer *metadataViewGradient;
@property (nonatomic, retain) NSMutableSet *presentedAssetIds;

- (void).cxx_destruct;
- (id)_arrangeAssetsForDisplay:(id)arg1;
- (void)_beginImageFetchFromCollection;
- (unsigned char)_getTotalViews;
- (void)_handleViewTap;
- (id)_imageViewForPosition:(unsigned char)arg1 totalViewCount:(unsigned char)arg2;
- (void)_loadAndApplyImagesFromAssets:(id)arg1;
- (void)_setupMetadataView;
- (void)_setupViews;
- (id)assetCollection;
- (id)customMaximumPreviewAssetCount;
- (id)dateRangeLabel;
- (id)delegate;
- (unsigned char)getHorizontalViewCountForTotalNumberOfViews:(unsigned char)arg1;
- (unsigned char)getVerticalViewCountForTotalNumberOfViews:(unsigned char)arg1;
- (id)imageViews;
- (id)imageViewsQueue;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 customMaximumPreviewAssetCount:(id)arg2 keyAssetLocalIdentifier:(id)arg3;
- (id)keyAssetLocalIdentifier;
- (id)locationLabel;
- (id)metadataView;
- (id)metadataViewGradient;
- (double)minXPositionForViewPosition:(unsigned char)arg1 totalNumberOfViews:(unsigned char)arg2;
- (double)minYPositionForViewPosition:(unsigned char)arg1 totalNumberOfViews:(unsigned char)arg2;
- (id)presentedAssetIds;
- (void)setCustomMaximumPreviewAssetCount:(id)arg1;
- (void)setDateRangeLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameForSubview:(id)arg1 inPosition:(unsigned char)arg2;
- (void)setImageViews:(id)arg1;
- (void)setImageViewsQueue:(id)arg1;
- (void)setKeyAssetLocalIdentifier:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setMetadataView:(id)arg1;
- (void)setMetadataViewGradient:(id)arg1;
- (void)setPresentedAssetIds:(id)arg1;
- (id)validCustomMaximumPreviewAssetCountForCustomMaximumPreviewAssetCount:(id)arg1;

@end
