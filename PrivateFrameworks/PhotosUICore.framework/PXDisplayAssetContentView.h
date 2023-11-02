
@interface PXDisplayAssetContentView : UIView <PXChangeObserver, PXReusableObject> {
    bool  _animatedContentEnabled;
    <PXDisplayAsset> * _asset;
    bool  _canDisplayLoadingIndicator;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentBounds;
    UIView * _contentView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRect;
    NSError * _error;
    PXLoadingFailureBadgeView * _failureView;
    UIImage * _image;
    double  _imageProgress;
    PXImageRequester * _imageRequester;
    bool  _isDisplayingFullQualityContent;
    NSError * _latestError;
    double  _loadingProgress;
    PXUIMediaProvider * _mediaProvider;
    NSArray * _placeholderImageFilters;
    double  _placeholderTransitionDuration;
    long long  _playbackStyle;
    PXRoundProgressView * _progressView;
    long long  _requestID;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    PXDisplayAssetViewModel * _viewModel;
}

@property (getter=isAnimatedContentEnabled, nonatomic) bool animatedContentEnabled;
@property (nonatomic, retain) <PXDisplayAsset> *asset;
@property (nonatomic) bool canDisplayLoadingIndicator;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentContentsRect;
@property (nonatomic, readonly) UIImage *currentImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain) PXLoadingFailureBadgeView *failureView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) double imageProgress;
@property (nonatomic, readonly) PXImageRequester *imageRequester;
@property (nonatomic) bool isDisplayingFullQualityContent;
@property (nonatomic, retain) NSError *latestError;
@property (nonatomic, readonly) double loadingProgress;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, retain) PXUIMediaProvider *mediaProvider;
@property (nonatomic, copy) NSArray *placeholderImageFilters;
@property (nonatomic) double placeholderTransitionDuration;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, retain) PXRoundProgressView *progressView;
@property (nonatomic) long long requestID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic, retain) PXDisplayAssetViewModel *viewModel;

+ (void)checkInView:(id)arg1;
+ (id)checkOutViewForAsset:(id)arg1;
+ (id)checkOutViewForAsset:(id)arg1 withPlaybackStyle:(long long)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredContentsRectForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)viewPool;

- (void).cxx_destruct;
- (void)_invalidateError;
- (void)_invalidateViewModelProperties;
- (void)_loadContentView;
- (void)_updateError;
- (void)_updateFailureView;
- (void)_updateIfNeeded;
- (void)_updateProgressView;
- (void)_updateTargetSize;
- (void)_updateViewModelProperties;
- (void)animatedContentEnabledDidChange;
- (id)asset;
- (void)becomeReusable;
- (bool)canDisplayLoadingIndicator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (void)contentModeDidChange;
- (id)contentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (void)contentsRectDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentContentsRect;
- (id)currentImage;
- (void)didMoveToWindow;
- (id)error;
- (id)failureView;
- (void)handleError:(id)arg1;
- (id)image;
- (void)imageDidChange;
- (double)imageProgress;
- (void)imageProgressDidChange;
- (id)imageRequester;
- (void)imageRequesterDidChange:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateLoadingProgress;
- (bool)isAnimatedContentEnabled;
- (bool)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (id)latestError;
- (void)layoutSubviews;
- (double)loadingProgress;
- (id)log;
- (id)mediaProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)placeholderImageFilters;
- (void)placeholderImageFiltersDidChange;
- (double)placeholderTransitionDuration;
- (void)placeholderTransitionDurationDidChange;
- (long long)playbackStyle;
- (void)prepareForReuse;
- (id)progressView;
- (long long)requestID;
- (void)setAnimatedContentEnabled:(bool)arg1;
- (void)setAsset:(id)arg1;
- (void)setCanDisplayLoadingIndicator:(bool)arg1;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setError:(id)arg1;
- (void)setFailureView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageProgress:(double)arg1;
- (void)setImageRequester:(id)arg1;
- (void)setIsDisplayingFullQualityContent:(bool)arg1;
- (void)setLatestError:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setNeedsLayout;
- (void)setNeedsUpdateContent;
- (void)setPlaceholderImageFilters:(id)arg1;
- (void)setPlaceholderTransitionDuration:(double)arg1;
- (void)setProgressView:(id)arg1;
- (void)setRequestID:(long long)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setViewModel:(id)arg1;
- (struct CGSize { double x1; double x2; })targetSize;
- (void)updateContent;
- (id)viewModel;
- (void)viewModelDidChange:(unsigned long long)arg1;

@end
