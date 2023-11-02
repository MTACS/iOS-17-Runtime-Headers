
@interface AVEditView : UIView <UIMovieScrubberDataSource, UIMovieScrubberDelegate> {
    <AVEditViewDataSource> * _dataSource;
    <AVEditViewDelegate> * _delegate;
    UIMovieScrubber * _movieScrubber;
    bool  _prefersThumbVisible;
    bool  _scrubbing;
    bool  _trimming;
}

@property (nonatomic) <AVEditViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVEditViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) UIMovieScrubber *movieScrubber;
@property (nonatomic) bool prefersThumbVisible;
@property (getter=isScrubbing, nonatomic) bool scrubbing;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double trimEndTime;
@property (nonatomic, readonly) double trimStartTime;
@property (getter=isTrimming, nonatomic) bool trimming;

- (void).cxx_destruct;
- (id)dataSource;
- (id)delegate;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isScrubbing;
- (bool)isTrimming;
- (void)layoutSubviews;
- (id)movieScrubber;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (double)movieScrubberDuration:(id)arg1;
- (double)movieScrubberThumbnailAspectRatio:(id)arg1;
- (void)movieScrubberWillBeginRequestingThumbnails:(id)arg1;
- (bool)prefersThumbVisible;
- (void)reloadData;
- (void)setCurrentTime:(double)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMovieScrubber:(id)arg1;
- (void)setPrefersThumbVisible:(bool)arg1;
- (void)setScrubbing:(bool)arg1;
- (void)setThumbnailImage:(struct CGImage { }*)arg1 forTimestamp:(id)arg2;
- (void)setTrimming:(bool)arg1;
- (double)trimEndTime;
- (double)trimStartTime;
- (void)userObservationGestureRecognizerFired:(id)arg1;

@end
