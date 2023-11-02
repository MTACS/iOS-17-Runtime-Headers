
@interface ASCLockupMediaView : UIControl <ASCLockupMediaPresenterView> {
    UIView * _containerView;
    NSString * _context;
    NSMutableArray * _imageViews;
    unsigned long long  _numberOfViews;
    ASCScreenshots * _screenshots;
    ASCTrailers * _trailers;
    bool  _videoLoopingEnabled;
    bool  _videoMuted;
    ASCVideoView * _videoView;
}

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, copy) NSString *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *imageViews;
@property (nonatomic, readonly) NSArray *mediaViews;
@property (nonatomic) unsigned long long numberOfViews;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredScreenshotSize;
@property (nonatomic, copy) ASCScreenshots *screenshots;
@property (readonly) Class superclass;
@property (nonatomic, copy) ASCTrailers *trailers;
@property (getter=isVideoLoopingEnabled, nonatomic) bool videoLoopingEnabled;
@property (getter=isVideoMuted, nonatomic) bool videoMuted;
@property (nonatomic, retain) ASCVideoView *videoView;

- (void).cxx_destruct;
- (id)containerView;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })estimatedMediaContentSize;
- (id)imageViews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isVideoLoopingEnabled;
- (bool)isVideoMuted;
- (void)layoutMarginsDidChange;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMarginsForCurrentContext;
- (void)layoutSubviews;
- (id)makeLayout;
- (id)makeSizingLayout;
- (id)mediaViews;
- (unsigned long long)numberOfImageViews;
- (unsigned long long)numberOfViews;
- (struct CGSize { double x1; double x2; })preferredScreenshotSize;
- (void)prepareForReuse;
- (id)screenshots;
- (void)setContext:(id)arg1;
- (void)setImage:(id)arg1 atIndex:(long long)arg2;
- (void)setNumberOfViews:(unsigned long long)arg1;
- (void)setScreenshots:(id)arg1;
- (void)setScreenshots:(id)arg1 andTrailers:(id)arg2;
- (void)setTrailers:(id)arg1;
- (void)setVideoLoopingEnabled:(bool)arg1;
- (void)setVideoMuted:(bool)arg1;
- (void)setVideoView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)trailers;
- (void)updateImageViews;
- (id)videoView;

@end
