
@interface MNETADisplayFormatter : NSObject {
    <MNETADisplayFormatterDelegate> * _delegate;
    NSDate * _displayETAToEndOfLeg;
    NSDate * _displayETAToEndOfRoute;
    double  _displayRemainingTimeToEndOfLeg;
    double  _displayRemainingTimeToEndOfRoute;
    double  _remainingTimeToEndOfLeg;
    double  _remainingTimeToEndOfRoute;
    NSTimeZone * _timeZone;
    MNWeakTimer * _updateTimer;
}

@property (nonatomic) <MNETADisplayFormatterDelegate> *delegate;
@property (nonatomic, readonly) NSDate *displayETAToEndOfLeg;
@property (nonatomic, readonly) NSDate *displayETAToEndOfRoute;
@property (nonatomic, readonly) double displayRemainingTimeToEndOfLeg;
@property (nonatomic, readonly) double displayRemainingTimeToEndOfRoute;
@property (nonatomic) double remainingTimeToEndOfLeg;
@property (nonatomic) double remainingTimeToEndOfRoute;

- (void).cxx_destruct;
- (id)_displayDateWithRemainingTime:(double)arg1;
- (double)_displayTimeIntervalForTimeInterval:(double)arg1;
- (void)_scheduleUpdateTimer;
- (void)_updateDisplayETA;
- (void)_updateTimerFired;
- (void)dealloc;
- (id)delegate;
- (id)displayETAToEndOfLeg;
- (id)displayETAToEndOfRoute;
- (double)displayRemainingTimeToEndOfLeg;
- (double)displayRemainingTimeToEndOfRoute;
- (id)initWithTimeZone:(id)arg1;
- (double)remainingTimeToEndOfLeg;
- (double)remainingTimeToEndOfRoute;
- (void)setDelegate:(id)arg1;
- (void)setRemainingTimeToEndOfLeg:(double)arg1;
- (void)setRemainingTimeToEndOfRoute:(double)arg1;

@end
