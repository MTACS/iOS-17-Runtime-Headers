
@interface CSTimerViewController : CSCoverSheetViewControllerBase {
    <CSTimerViewControllerDelegate> * _delegate;
    bool  _enabled;
    NSDate * _endDate;
    MTTimerManager * _timerManager;
    NSTimer * _updateTimer;
}

@property (nonatomic) <CSTimerViewControllerDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) NSString *timerText;

- (void).cxx_destruct;
- (void)_nextTimerChanged:(id)arg1;
- (void)_startTimer;
- (void)_stopTimer;
- (void)_stopTimerNotifyingDelegate:(bool)arg1;
- (void)_updateNextTimer;
- (void)_updateTimerFired;
- (void)_updateTimerLabelView;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isEnabled;
- (bool)isEndDateValid;
- (bool)isTimerActive;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (id)timerText;
- (id)timerView;

@end
