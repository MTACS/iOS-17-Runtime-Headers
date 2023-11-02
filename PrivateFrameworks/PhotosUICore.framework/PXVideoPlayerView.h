
@interface PXVideoPlayerView : UIView {
    bool  _allowsEdgeAntialiasing;
    <PXVideoPlayerViewDelegate> * _delegate;
    bool  _displayingPlaceholder;
    long long  _placeholderDisplayMode;
    UIImage * _placeholderImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _placeholderImageContentsRect;
    NSArray * _placeholderImageFilters;
    long long  _placeholderVisibilityRequestID;
    ISWrappedAVPlayer * _player;
    UIImageView * _previewImageView;
    NSArray * _previewImageViewConstraints;
    double  _videoAppearanceCrossfadeDuration;
    PXVideoView * _videoView;
    NSArray * _videoViewConstraints;
    long long  _videoViewContentMode;
    id /* block */  _visibilityChangeCompletionHandler;
}

@property (nonatomic) bool allowsEdgeAntialiasing;
@property (nonatomic) <PXVideoPlayerViewDelegate> *delegate;
@property (getter=isDisplayingPlaceHolder, nonatomic, readonly) bool displayingPlaceholder;
@property (nonatomic) long long placeholderDisplayMode;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } placeholderImageContentsRect;
@property (nonatomic, copy) NSArray *placeholderImageFilters;
@property (nonatomic, retain) ISWrappedAVPlayer *player;
@property (nonatomic) double videoAppearanceCrossfadeDuration;
@property (nonatomic) long long videoViewContentMode;

- (void).cxx_destruct;
- (void)_runVisibilityChangeCompletionHandler;
- (void)_setDisplayingPlaceholder:(bool)arg1 requestID:(long long)arg2;
- (void)_updateContentMode;
- (void)_updateEdgeAntialiasing;
- (void)_updateSubviewsVisibility;
- (void)_updateVideoView;
- (bool)allowsEdgeAntialiasing;
- (void)dealloc;
- (id)delegate;
- (id)generateSnapshotImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisplayingPlaceHolder;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)placeholderDisplayMode;
- (id)placeholderImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })placeholderImageContentsRect;
- (id)placeholderImageFilters;
- (id)player;
- (void)setAllowsEdgeAntialiasing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderDisplayMode:(long long)arg1;
- (void)setPlaceholderDisplayMode:(long long)arg1 completion:(id /* block */)arg2;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPlaceholderImageContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlaceholderImageFilters:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setVideoAppearanceCrossfadeDuration:(double)arg1;
- (void)setVideoViewContentMode:(long long)arg1;
- (double)videoAppearanceCrossfadeDuration;
- (long long)videoViewContentMode;

@end
