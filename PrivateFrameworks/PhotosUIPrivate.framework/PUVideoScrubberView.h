
@interface PUVideoScrubberView : UIView {
    NSLayoutConstraint * _afterLabelVerticalConstraint;
    AVTimeFormatter * _afterTimeFormatter;
    UILabel * _afterTimeLabel;
    bool  _afterTimeLabelOffset;
    NSLayoutConstraint * _beforeLabelVerticalConstraint;
    AVTimeFormatter * _beforeTimeFormatter;
    UILabel * _beforeTimeLabel;
    bool  _beforeTimeLabelOffset;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentTime;
    NSObject<PUVideoScrubberViewDelegate> * _delegate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _endingTime;
    UISlider * _scrubberSlider;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startingTime;
}

@property (nonatomic, retain) UILabel *afterTimeLabel;
@property (nonatomic, retain) UILabel *beforeTimeLabel;
@property (nonatomic) NSObject<PUVideoScrubberViewDelegate> *delegate;
@property (nonatomic, retain) UISlider *scrubberSlider;

- (void).cxx_destruct;
- (id)afterTimeLabel;
- (id)beforeTimeLabel;
- (id)delegate;
- (id)initWithStartingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 endingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 currentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)layoutSubviews;
- (void)offsetTimeLabelsIfNecessary;
- (id)scrubberSlider;
- (void)setAfterTimeLabel:(id)arg1;
- (void)setBeforeTimeLabel:(id)arg1;
- (void)setCurrentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setScrubberSlider:(id)arg1;
- (void)timesChanged:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 endingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 currentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)updateSliderPosition;
- (void)videoScrubberDoneChanging;
- (void)videoScrubberValueChanged:(id)arg1;

@end
