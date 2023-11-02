
@interface OPTTSMutableTextToSpeechRequestDevConfig : OPTTSTextToSpeechRequestDevConfig

@property (nonatomic, copy) NSString *resource_asset_path;
@property (nonatomic) bool return_log;
@property (nonatomic) bool return_server_info;
@property (nonatomic, copy) NSString *voice_asset_path;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)resource_asset_path;
- (bool)return_log;
- (bool)return_server_info;
- (void)setResource_asset_path:(id)arg1;
- (void)setReturn_log:(bool)arg1;
- (void)setReturn_server_info:(bool)arg1;
- (void)setVoice_asset_path:(id)arg1;
- (id)voice_asset_path;

@end
