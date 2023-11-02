
@interface TISKLayoutSwitchEvent : TISKTimestampEvent {
    TIKeyboardLayout * _layout;
}

@property (nonatomic, retain) TIKeyboardLayout *layout;

- (void).cxx_destruct;
- (id)description;
- (id)init:(double)arg1 layout:(id)arg2 emojiSearchMode:(bool)arg3 order:(long long)arg4;
- (id)layout;
- (void)reportToSession:(id)arg1;
- (void)setLayout:(id)arg1;
- (double)touchDownTimestamp;
- (double)touchUpTimestamp;

@end
