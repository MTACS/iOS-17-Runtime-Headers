
@interface PBFPosterGalleryPreviewComplicationContentView : UIView <SBIconViewDelegate, SBIconViewProviding> {
    UIView * _complicationContainerView;
    NSMutableArray * _complicationImageViews;
    NSArray * _complicationSnapshotRequests;
    NSMapTable * _complicationToLayoutElement;
    NSMutableDictionary * _iconImageViewsByUniqueIdentifier;
    NSMapTable * _imageViewForComplication;
    NSMapTable * _imageViewsForComplicationSnapshotRequest;
    UIView * _inlineComplicationContainerView;
    PBFComplicationSnapshotRequest * _inlineComplicationSnapshotRequest;
    NSArray * _landscapeComplicationSnapshotRequests;
    CSProminentLayoutController * _layoutController;
    long long  _layoutOrientation;
    <PBFPosterPreview> * _posterPreview;
    double  _posterPreviewScale;
    bool  _preferredCornerRadius;
    NSMutableArray * _unusedComplicationImageViews;
    BSUIVibrancyEffectView * _vibrancyEffectView;
    PRWidgetGridViewController * _widgetGridViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic, retain) <PBFPosterPreview> *posterPreview;
@property (nonatomic) double posterPreviewScale;
@property (nonatomic) bool preferredCornerRadius;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_contentScaleForWidgetGridViewController;
- (double)_cornerRadiusForComplicationSnapshotRequest:(id)arg1;
- (void)_enumerateImageViewsForComplicationSnapshotRequest:(id)arg1 usingBlock:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForComplication:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForWidgetGridViewController;
- (bool)_hasComplications;
- (id)_imageViewForComplication:(id)arg1 snapshotRequest:(id)arg2;
- (bool)_isComplicationSnapshotRequestOurs:(id)arg1;
- (id)_layoutController;
- (id)_placeImageViewForComplication:(id)arg1 withSuperview:(id)arg2 snapshotRequest:(id)arg3;
- (void)_stopUsingComplicationImageView:(id)arg1;
- (void)_updatePreviewWithComplicationImage:(id)arg1 error:(id)arg2 complicationSnapshotRequest:(id)arg3 posterPreview:(id)arg4;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)customImageViewControllerForIconView:(id)arg1;
- (void)dealloc;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isIconViewRecycled:(id)arg1;
- (long long)layoutOrientation;
- (void)layoutSubviews;
- (id)pbf_displayContext;
- (id)posterPreview;
- (double)posterPreviewScale;
- (bool)preferredCornerRadius;
- (void)prepareComplicationPreviewWithGenerator:(id)arg1;
- (void)prepareForReuse;
- (void)recycleIconView:(id)arg1;
- (void)setComplicationImage:(id)arg1 forComplicationSnapshotRequest:(id)arg2;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setPosterPreview:(id)arg1;
- (void)setPosterPreviewScale:(double)arg1;
- (void)setPreferredCornerRadius:(bool)arg1;

@end
