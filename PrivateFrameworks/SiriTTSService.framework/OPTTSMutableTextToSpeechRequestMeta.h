
@interface OPTTSMutableTextToSpeechRequestMeta : OPTTSTextToSpeechRequestMeta

@property (nonatomic, copy) NSString *app_id;
@property (nonatomic) long long channel_type;

- (id)app_id;
- (long long)channel_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setApp_id:(id)arg1;
- (void)setChannel_type:(long long)arg1;

@end
