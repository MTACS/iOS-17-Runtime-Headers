
@interface NATimeFormatter : NSObject {
    AVTimeFormatter * _elapsedDurationFormatter;
    AVTimeFormatter * _remainingDurationFormatter;
}

@property (nonatomic, retain) AVTimeFormatter *elapsedDurationFormatter;
@property (nonatomic, retain) AVTimeFormatter *remainingDurationFormatter;

- (void).cxx_destruct;
- (id)elapsedDurationFormatter;
- (id)formatElapsedDuration:(double)arg1;
- (id)formatRemainingDuration:(double)arg1;
- (id)init;
- (id)remainingDurationFormatter;
- (void)setElapsedDurationFormatter:(id)arg1;
- (void)setRemainingDurationFormatter:(id)arg1;

@end
