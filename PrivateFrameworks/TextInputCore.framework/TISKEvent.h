
@interface TISKEvent : NSObject <TISKEventProtocol> {
    bool  _emojiSearchMode;
    bool  _hasTimestamp;
    unsigned long long  _order;
    TISKTap * _tap;
    int  _type;
}

@property (nonatomic) bool emojiSearchMode;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long order;
@property (nonatomic, retain) TISKTap *tap;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)description;
- (id)downTouchEvent;
- (bool)emojiSearchMode;
- (bool)hasTimestamp;
- (id)init:(int)arg1 emojiSearchMode:(bool)arg2 order:(long long)arg3;
- (id)init:(int)arg1 emojiSearchMode:(bool)arg2 order:(long long)arg3 tap:(id)arg4;
- (bool)isMissingATouch;
- (bool)isValidCandidate:(id)arg1;
- (unsigned long long)order;
- (id)privateDescription;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (void)reportToSession:(id)arg1;
- (void)setEmojiSearchMode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOrder:(unsigned long long)arg1;
- (void)setTap:(id)arg1;
- (void)setType:(int)arg1;
- (id)tap;
- (double)touchDownTimestamp;
- (double)touchUpTimestamp;
- (int)type;
- (id)upTouchEvent;

@end
