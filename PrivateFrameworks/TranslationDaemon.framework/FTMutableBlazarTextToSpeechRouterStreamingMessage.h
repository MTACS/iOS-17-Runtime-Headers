
@interface FTMutableBlazarTextToSpeechRouterStreamingMessage : FTBlazarTextToSpeechRouterStreamingMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTBeginTextToSpeechStreamingResponse *session_messageAsFTBeginTextToSpeechStreamingResponse;
@property (nonatomic, copy) FTFinalTextToSpeechStreamingResponse *session_messageAsFTFinalTextToSpeechStreamingResponse;
@property (nonatomic, copy) FTPartialTextToSpeechStreamingResponse *session_messageAsFTPartialTextToSpeechStreamingResponse;
@property (nonatomic, copy) FTStartTextToSpeechStreamingRequest *session_messageAsFTStartTextToSpeechStreamingRequest;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTBeginTextToSpeechStreamingResponse;
- (id)session_messageAsFTFinalTextToSpeechStreamingResponse;
- (id)session_messageAsFTPartialTextToSpeechStreamingResponse;
- (id)session_messageAsFTStartTextToSpeechStreamingRequest;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTBeginTextToSpeechStreamingResponse:(id)arg1;
- (void)setSession_messageAsFTFinalTextToSpeechStreamingResponse:(id)arg1;
- (void)setSession_messageAsFTPartialTextToSpeechStreamingResponse:(id)arg1;
- (void)setSession_messageAsFTStartTextToSpeechStreamingRequest:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
