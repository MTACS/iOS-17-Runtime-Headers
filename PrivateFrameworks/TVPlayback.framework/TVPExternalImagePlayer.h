
@interface TVPExternalImagePlayer : NSObject {
    UIImage * _currentImage;
    double  _currentImageTime;
    CADisplayLink * _displayLink;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _elapsedTime;
    id /* block */  _elapsedTimeUpdateBlock;
    NSMutableArray * _imageInfosBeingLoaded;
    double  _imageInterval;
    TVPExternalImageLoader * _imageLoader;
    id /* block */  _imageUpdateBlock;
    NSObject<TVPMediaItem> * _mediaItem;
    NSDate * _playbackDate;
    double  _previousTimestamp;
    double  _rate;
    NSDate * _referenceDate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _referenceTime;
}

@property (nonatomic, retain) UIImage *currentImage;
@property (nonatomic) double currentImageTime;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } elapsedTime;
@property (nonatomic, copy) id /* block */ elapsedTimeUpdateBlock;
@property (nonatomic, retain) NSMutableArray *imageInfosBeingLoaded;
@property (nonatomic) double imageInterval;
@property (nonatomic, retain) TVPExternalImageLoader *imageLoader;
@property (nonatomic, copy) id /* block */ imageUpdateBlock;
@property (nonatomic, retain) NSObject<TVPMediaItem> *mediaItem;
@property (nonatomic, retain) NSDate *playbackDate;
@property (nonatomic) double previousTimestamp;
@property (nonatomic) double rate;
@property (nonatomic, retain) NSDate *referenceDate;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } referenceTime;

- (void).cxx_destruct;
- (void)_cancelAllImageLoads;
- (void)_cancelStaleImageLoadsForTime:(double)arg1;
- (void)_displayLinkTimerFired:(id)arg1;
- (void)_loadImagesIfNecessary;
- (double)_timeAfterRemovingInterstitials:(double)arg1;
- (void)_updateImageIntervalWithRate:(double)arg1;
- (id)currentImage;
- (double)currentImageTime;
- (id)displayLink;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })elapsedTime;
- (id /* block */)elapsedTimeUpdateBlock;
- (id)imageInfosBeingLoaded;
- (double)imageInterval;
- (id)imageLoader;
- (id /* block */)imageUpdateBlock;
- (id)initWithMediaItem:(id)arg1 referenceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forDate:(id)arg3;
- (void)invalidate;
- (id)mediaItem;
- (id)playbackDate;
- (double)previousTimestamp;
- (double)rate;
- (id)referenceDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })referenceTime;
- (void)setCurrentImage:(id)arg1;
- (void)setCurrentImageTime:(double)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setElapsedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setElapsedTimeUpdateBlock:(id /* block */)arg1;
- (void)setImageInfosBeingLoaded:(id)arg1;
- (void)setImageInterval:(double)arg1;
- (void)setImageLoader:(id)arg1;
- (void)setImageUpdateBlock:(id /* block */)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setPlaybackDate:(id)arg1;
- (void)setPreviousTimestamp:(double)arg1;
- (void)setRate:(double)arg1;
- (void)setReferenceDate:(id)arg1;
- (void)setReferenceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end