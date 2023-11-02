
@interface VUINowPlayingTimerFeatureInfo : NSObject {
    NSDate * _backgroundedDate;
    NSTimer * _oneTimeTimer;
    NSTimer * _repeatingTimer;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *backgroundedDate;
@property (nonatomic) NSTimer *oneTimeTimer;
@property (nonatomic) NSTimer *repeatingTimer;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)backgroundedDate;
- (id)oneTimeTimer;
- (id)repeatingTimer;
- (void)setBackgroundedDate:(id)arg1;
- (void)setOneTimeTimer:(id)arg1;
- (void)setRepeatingTimer:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
