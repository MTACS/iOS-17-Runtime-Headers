
@interface HUPosterFrameView : UIView <HFCameraImageObserver, HFCameraPosterFrameDelegate> {
    HMCameraClip * _clip;
    CALayer * _lineSeparator;
    bool  _loadingHeroFrame;
    bool  _loadingPosterFrame;
    CALayer * _posterFrameLayer;
    unsigned long long  _posterFrameLoadingState;
    bool  _shouldShowLineSeparator;
    double  _timeOffset;
}

@property (nonatomic) HMCameraClip *clip;
@property (nonatomic, retain) CALayer *lineSeparator;
@property (nonatomic) bool loadingHeroFrame;
@property (nonatomic) bool loadingPosterFrame;
@property (nonatomic, retain) CALayer *posterFrameLayer;
@property (nonatomic) unsigned long long posterFrameLoadingState;
@property (nonatomic) bool shouldShowLineSeparator;
@property (nonatomic) double timeOffset;

+ (id)posterFrameViewForWidth:(double)arg1;

- (void).cxx_destruct;
- (id)clip;
- (void)didFindPosterFrame:(id)arg1 atOffset:(double)arg2 forClip:(id)arg3;
- (void)displayImage:(id)arg1 opacity:(double)arg2;
- (void)displayImageForClip:(id)arg1 atTimeOffset:(double)arg2;
- (void)failedToFindPosterFrameAtOffset:(double)arg1 forClip:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lineSeparator;
- (void)loadPlaceholderHeroFrameImageForClip:(id)arg1;
- (void)loadPosterFrameImageForClip:(id)arg1 atOffset:(double)arg2;
- (bool)loadingHeroFrame;
- (bool)loadingPosterFrame;
- (void)manager:(id)arg1 didFindHeroFrame:(id)arg2 forClip:(id)arg3;
- (void)manager:(id)arg1 didFindImage:(id)arg2 atTimeOffset:(double)arg3 forClip:(id)arg4;
- (void)manager:(id)arg1 didGenerateImage:(id)arg2 atOffset:(double)arg3 forClip:(id)arg4;
- (void)manager:(id)arg1 failedToFindHeroFrameforClip:(id)arg2;
- (void)manager:(id)arg1 failedToGenerateImageAtOffset:(double)arg2 forClip:(id)arg3;
- (id)posterFrameLayer;
- (unsigned long long)posterFrameLoadingState;
- (void)prepareForReuse;
- (void)setClip:(id)arg1;
- (void)setLineSeparator:(id)arg1;
- (void)setLoadingHeroFrame:(bool)arg1;
- (void)setLoadingPosterFrame:(bool)arg1;
- (void)setPosterFrameLayer:(id)arg1;
- (void)setPosterFrameLoadingState:(unsigned long long)arg1;
- (void)setShouldShowLineSeparator:(bool)arg1;
- (void)setTimeOffset:(double)arg1;
- (bool)shouldShowLineSeparator;
- (double)timeOffset;

@end
