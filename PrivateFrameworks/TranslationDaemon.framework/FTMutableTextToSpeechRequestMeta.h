
@interface FTMutableTextToSpeechRequestMeta : FTTextToSpeechRequestMeta

@property (nonatomic, copy) NSString *app_id;
@property (nonatomic) long long channel_type;
@property (nonatomic) bool is_synthesis;

- (id)app_id;
- (long long)channel_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)is_synthesis;
- (void)setApp_id:(id)arg1;
- (void)setChannel_type:(long long)arg1;
- (void)setIs_synthesis:(bool)arg1;

@end
