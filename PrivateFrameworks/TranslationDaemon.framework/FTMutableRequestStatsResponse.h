
@interface FTMutableRequestStatsResponse : FTRequestStatsResponse

@property (nonatomic, copy) NSArray *bool_stats;
@property (nonatomic, copy) NSArray *double_stats;
@property (nonatomic, copy) NSArray *int32_stats;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *request_locale;
@property (nonatomic, copy) NSString *speech_id;

- (id)bool_stats;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)double_stats;
- (id)init;
- (id)int32_stats;
- (id)language;
- (id)request_locale;
- (void)setBool_stats:(id)arg1;
- (void)setDouble_stats:(id)arg1;
- (void)setInt32_stats:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setRequest_locale:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end
