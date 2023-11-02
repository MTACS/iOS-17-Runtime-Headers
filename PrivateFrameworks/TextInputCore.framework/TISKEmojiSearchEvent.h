
@interface TISKEmojiSearchEvent : TISKTimestampEvent {
    bool  _engaged;
}

@property (nonatomic) bool engaged;

- (id)description;
- (bool)engaged;
- (id)init:(double)arg1 engaged:(bool)arg2 order:(long long)arg3;
- (void)reportToSession:(id)arg1;
- (void)setEngaged:(bool)arg1;

@end
