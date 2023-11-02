
@interface FTMutableTextToSpeechCacheContainerRpcV2 : FTTextToSpeechCacheContainerRpcV2

@property (nonatomic, copy) FTTextToSpeechRequest *cached_request;
@property (nonatomic, copy) FTTextToSpeechResponse *cached_response;
@property (nonatomic, copy) NSString *original_session_id;

- (id)cached_request;
- (id)cached_response;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)original_session_id;
- (void)setCached_request:(id)arg1;
- (void)setCached_response:(id)arg1;
- (void)setOriginal_session_id:(id)arg1;

@end
