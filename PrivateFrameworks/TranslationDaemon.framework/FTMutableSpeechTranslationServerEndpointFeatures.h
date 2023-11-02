
@interface FTMutableSpeechTranslationServerEndpointFeatures : FTSpeechTranslationServerEndpointFeatures

@property (nonatomic, copy) NSString *conversation_id;
@property (nonatomic, copy) NSString *request_id;
@property (nonatomic, copy) FTServerEndpointFeatures *server_endpoint_features;
@property (nonatomic, copy) NSString *source_locale;

- (id)conversation_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)request_id;
- (id)server_endpoint_features;
- (void)setConversation_id:(id)arg1;
- (void)setRequest_id:(id)arg1;
- (void)setServer_endpoint_features:(id)arg1;
- (void)setSource_locale:(id)arg1;
- (id)source_locale;

@end
