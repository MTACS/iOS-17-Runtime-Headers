
@interface HUCalendarScrubberContainerViewController : UIViewController <HFCameraPlaybackEngineObserver, HUCalendarScrubberViewDelegate> {
    AVBackgroundView * _backgroundView;
    HUCalendarScrubberViewController * _calendarScrubber;
    NSArray * _constraints;
    UIView * _hairlineViewLeft;
    UIView * _hairlineViewRight;
    bool  _isEditing;
    NSDate * _lastSelectedDate;
    UIButton * _nextWeekButton;
    HFCameraPlaybackEngine * _playbackEngine;
    UIButton * _prevWeekButton;
}

@property (nonatomic, retain) AVBackgroundView *backgroundView;
@property (nonatomic, retain) HUCalendarScrubberViewController *calendarScrubber;
@property (nonatomic, retain) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *hairlineViewLeft;
@property (nonatomic, retain) UIView *hairlineViewRight;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEditing;
@property (nonatomic, retain) NSDate *lastSelectedDate;
@property (nonatomic, retain) UIButton *nextWeekButton;
@property (nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (nonatomic, retain) UIButton *prevWeekButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_jumpToDate:(id)arg1 animated:(bool)arg2;
- (void)_updateNextPreviousButtonState;
- (id)backgroundView;
- (id)calendarScrubber;
- (id)constraints;
- (id)hairlineViewLeft;
- (id)hairlineViewRight;
- (void)handleNextButton:(id)arg1;
- (void)handlePreviousButton:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (bool)isEditing;
- (id)lastSelectedDate;
- (id)nextWeekButton;
- (id)playbackEngine;
- (void)playbackEngine:(id)arg1 didRemoveEvents:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateEvents:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (id)prevWeekButton;
- (void)scrubberViewController:(id)arg1 didMoveToSection:(unsigned long long)arg2;
- (void)scrubberViewController:(id)arg1 didSelectItemAtIndex:(id)arg2;
- (void)setBackgroundView:(id)arg1;
- (void)setCalendarScrubber:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setHairlineViewLeft:(id)arg1;
- (void)setHairlineViewRight:(id)arg1;
- (void)setIsEditing:(bool)arg1;
- (void)setLastSelectedDate:(id)arg1;
- (void)setNextWeekButton:(id)arg1;
- (void)setPlaybackEngine:(id)arg1;
- (void)setPrevWeekButton:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;

@end
