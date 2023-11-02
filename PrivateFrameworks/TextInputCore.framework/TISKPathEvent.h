
@interface TISKPathEvent : TISKEvent {
    NSArray * _allTouches;
    TIKeyboardCandidate * _candidate;
    NSString * _candidateString;
    TIKeyboardTouchEvent * _pathTouchUp;
}

- (void).cxx_destruct;
- (double)countPathPauses:(id)arg1;
- (id)description;
- (id)init:(id)arg1 candidate:(id)arg2 allTouches:(id)arg3 emojiSearchMode:(bool)arg4 order:(long long)arg5;
- (bool)isMissingATouch;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (void)reportToSession:(id)arg1;

@end
