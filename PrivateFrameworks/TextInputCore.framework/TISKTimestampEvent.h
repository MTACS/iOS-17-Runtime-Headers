
@interface TISKTimestampEvent : TISKEvent {
    double  _timestamp;
}

@property (nonatomic) double timestamp;

- (id)init:(int)arg1 timestamp:(double)arg2 emojiSearchMode:(bool)arg3 order:(long long)arg4;
- (bool)isMissingATouch;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (double)touchDownTimestamp;
- (double)touchUpTimestamp;

@end
