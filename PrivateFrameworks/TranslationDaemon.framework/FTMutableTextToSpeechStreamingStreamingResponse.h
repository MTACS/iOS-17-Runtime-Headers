
@interface FTMutableTextToSpeechStreamingStreamingResponse : FTTextToSpeechStreamingStreamingResponse

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, copy) FTBeginTextToSpeechStreamingResponse *contentAsFTBeginTextToSpeechStreamingResponse;
@property (nonatomic, copy) FTFinalTextToSpeechStreamingResponse *contentAsFTFinalTextToSpeechStreamingResponse;
@property (nonatomic, copy) FTPartialTextToSpeechStreamingResponse *contentAsFTPartialTextToSpeechStreamingResponse;
@property (nonatomic, copy) FTQssAckResponse *contentAsFTQssAckResponse;
@property (nonatomic) long long content_type;

+ (Class)content_mutableClassForType:(long long)arg1;
+ (long long)content_typeForMutableObject:(id)arg1;
+ (long long)content_typeForObject:(id)arg1;

- (id)contentAsFTBeginTextToSpeechStreamingResponse;
- (id)contentAsFTFinalTextToSpeechStreamingResponse;
- (id)contentAsFTPartialTextToSpeechStreamingResponse;
- (id)contentAsFTQssAckResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContent:(id)arg1;
- (void)setContentAsFTBeginTextToSpeechStreamingResponse:(id)arg1;
- (void)setContentAsFTFinalTextToSpeechStreamingResponse:(id)arg1;
- (void)setContentAsFTPartialTextToSpeechStreamingResponse:(id)arg1;
- (void)setContentAsFTQssAckResponse:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
