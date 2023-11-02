
@interface TISKInputEvent : TISKEvent {
    bool  _canComputeErrorDistance;
    double  _downErrorDistance;
    bool  _ignoreTapData;
    TIKeyboardInput * _input;
    double  _upErrorDistance;
}

@property (nonatomic) bool ignoreTapData;
@property (nonatomic, retain) TIKeyboardInput *input;

+ (id)makeInputEvent:(id)arg1 emojiSearchMode:(bool)arg2 order:(long long)arg3 wordSeparator:(id)arg4 accentedLanguage:(bool)arg5;

- (void).cxx_destruct;
- (void)_computeErrorDistance;
- (double)downUpTimeDelta;
- (bool)ignoreTapData;
- (id)init:(id)arg1 type:(int)arg2 emojiSearchMode:(bool)arg3 order:(long long)arg4;
- (id)input;
- (bool)isMissingATouch;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (void)reportToSession:(id)arg1;
- (void)setIgnoreTapData:(bool)arg1;
- (void)setInput:(id)arg1;
- (double)touchDownErrorDistance;
- (double)touchUpErrorDistance;
- (id)upTouchEvent;

@end
