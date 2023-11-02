
@interface _UIVoiceCommandButtonTapGestureRecognizer : UITapGestureRecognizer {
    double  _pressEventBeginTimestamp;
    double  _pressEventEndTimestamp;
}

@property (nonatomic) double pressEventBeginTimestamp;
@property (nonatomic) double pressEventEndTimestamp;

- (double)pressEventBeginTimestamp;
- (double)pressEventEndTimestamp;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)setPressEventBeginTimestamp:(double)arg1;
- (void)setPressEventEndTimestamp:(double)arg1;
- (id)voiceCommandButtonTapDuration;

@end
