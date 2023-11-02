
@interface TLAlertContext : NSObject {
    bool  _beingInterrupted;
    long long  _playbackBackEnd;
    NSDate * _playbackStartDate;
    NSObject<OS_dispatch_source> * _timeoutTimerSource;
}

@property (getter=isBeingInterrupted, nonatomic) bool beingInterrupted;
@property (nonatomic) long long playbackBackEnd;
@property (nonatomic, retain) NSDate *playbackStartDate;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTimerSource;

- (void).cxx_destruct;
- (bool)isBeingInterrupted;
- (long long)playbackBackEnd;
- (id)playbackStartDate;
- (void)setBeingInterrupted:(bool)arg1;
- (void)setPlaybackBackEnd:(long long)arg1;
- (void)setPlaybackStartDate:(id)arg1;
- (void)setTimeoutTimerSource:(id)arg1;
- (id)timeoutTimerSource;

@end
