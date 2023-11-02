
@interface FTMutableTextToSpeechCacheContainerStreamingV2 : FTTextToSpeechCacheContainerStreamingV2

@property (nonatomic, copy) FTBeginTextToSpeechStreamingResponse *cached_begin_response;
@property (nonatomic, copy) FTFinalTextToSpeechStreamingResponse *cached_final_response;
@property (nonatomic, copy) NSArray *cached_partial_response;
@property (nonatomic, copy) FTStartTextToSpeechStreamingRequest *cached_request;
@property (nonatomic, copy) NSString *original_session_id;

- (id)cached_begin_response;
- (id)cached_final_response;
- (id)cached_partial_response;
- (id)cached_request;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)original_session_id;
- (void)setCached_begin_response:(id)arg1;
- (void)setCached_final_response:(id)arg1;
- (void)setCached_partial_response:(id)arg1;
- (void)setCached_request:(id)arg1;
- (void)setOriginal_session_id:(id)arg1;

@end
