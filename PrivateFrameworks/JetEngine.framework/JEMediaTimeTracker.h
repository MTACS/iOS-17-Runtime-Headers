
@interface JEMediaTimeTracker : NSObject {
    NSDate * _date;
    JEMediaTimeTrackerDateProvider * _dateProvider;
    float  _playbackRate;
    unsigned long long  _position;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) JEMediaTimeTrackerDateProvider *dateProvider;
@property (nonatomic) float playbackRate;
@property (nonatomic) unsigned long long position;

- (void).cxx_destruct;
- (id)date;
- (id)dateProvider;
- (id)estimatedTimeAtPastPosition:(unsigned long long)arg1;
- (id)estimatedTimeAtPosition:(unsigned long long)arg1;
- (id)initWithPosition:(unsigned long long)arg1 playbackRate:(float)arg2;
- (float)playbackRate;
- (unsigned long long)position;
- (void)setDate:(id)arg1;
- (void)setDateProvider:(id)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setPosition:(unsigned long long)arg1;
- (void)updatePosition:(unsigned long long)arg1;
- (void)updatePosition:(unsigned long long)arg1 playbackRate:(float)arg2;

@end
