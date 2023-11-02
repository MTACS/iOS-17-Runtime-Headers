
@interface TISKEmojiInputEvent : TISKTimestampEvent {
    NSString * _emojiBucketCategory;
}

@property (nonatomic, retain) NSString *emojiBucketCategory;

- (void).cxx_destruct;
- (id)description;
- (id)emojiBucketCategory;
- (id)init:(double)arg1 emojiSearchMode:(bool)arg2 order:(long long)arg3 emojiBucketCategory:(id)arg4;
- (void)reportToSession:(id)arg1;
- (void)setEmojiBucketCategory:(id)arg1;

@end
