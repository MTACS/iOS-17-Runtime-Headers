
@interface PXVideoSessionUIView : UIView <PXChangeObserver, PXVideoViewDelegate> {
    PXVideoView * _adoptedVideoView;
    bool  _allowsEdgeAntialiasing;
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
    <PXVideoSessionUIViewDelegate> * _delegate;
    UIImage * _placeholderImage;
    UIImageView * _placeholderImageView;
    bool  _placeholderVisible;
    bool  _toneMapToStandardDynamicRange;
    UIView * _videoContainerView;
    NSString * _videoGravity;
    PXVideoSession * _videoSession;
}

@property (nonatomic, readonly) AVPlayerLayer *activePlayerLayer;
@property (nonatomic) bool allowsEdgeAntialiasing;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXVideoSessionUIViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isVideoLayerReadyForDisplay;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) bool placeholderVisible;
@property (readonly) Class superclass;
@property (nonatomic) bool toneMapToStandardDynamicRange;
@property (nonatomic, copy) NSString *videoGravity;
@property (nonatomic, retain) PXVideoSession *videoSession;
@property (nonatomic, readonly) UIView *viewForSnapshotting;

- (void).cxx_destruct;
- (void)_updateEdgeAntialiasing;
- (void)_updatePlaceholderVisibility;
- (void)_updateVideoViewFrame;
- (id)activePlayerLayer;
- (bool)allowsEdgeAntialiasing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (void)dealloc;
- (id)delegate;
- (id)generateSnapshotImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isVideoLayerReadyForDisplay;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)placeholderImage;
- (bool)placeholderVisible;
- (void)setAllowsEdgeAntialiasing:(bool)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPlaceholderVisible:(bool)arg1;
- (void)setToneMapToStandardDynamicRange:(bool)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setVideoSession:(id)arg1;
- (bool)toneMapToStandardDynamicRange;
- (id)videoGravity;
- (id)videoSession;
- (void)videoViewReadinessDidChange:(id)arg1;
- (id)viewForSnapshotting;

@end
