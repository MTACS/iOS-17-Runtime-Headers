
@interface OPTTSMutableTextToSpeechRouterStreamingStreamingResponse : OPTTSTextToSpeechRouterStreamingStreamingResponse

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, copy) OPTTSBeginTextToSpeechStreamingResponse *contentAsOPTTSBeginTextToSpeechStreamingResponse;
@property (nonatomic, copy) OPTTSFinalTextToSpeechStreamingResponse *contentAsOPTTSFinalTextToSpeechStreamingResponse;
@property (nonatomic, copy) OPTTSPartialTextToSpeechStreamingResponse *contentAsOPTTSPartialTextToSpeechStreamingResponse;
@property (nonatomic) long long content_type;

+ (Class)content_mutableClassForType:(long long)arg1;
+ (long long)content_typeForMutableObject:(id)arg1;
+ (long long)content_typeForObject:(id)arg1;

- (id)contentAsOPTTSBeginTextToSpeechStreamingResponse;
- (id)contentAsOPTTSFinalTextToSpeechStreamingResponse;
- (id)contentAsOPTTSPartialTextToSpeechStreamingResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContent:(id)arg1;
- (void)setContentAsOPTTSBeginTextToSpeechStreamingResponse:(id)arg1;
- (void)setContentAsOPTTSFinalTextToSpeechStreamingResponse:(id)arg1;
- (void)setContentAsOPTTSPartialTextToSpeechStreamingResponse:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
