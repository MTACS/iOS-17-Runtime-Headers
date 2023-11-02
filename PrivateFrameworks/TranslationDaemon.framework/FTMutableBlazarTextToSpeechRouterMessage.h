
@interface FTMutableBlazarTextToSpeechRouterMessage : FTBlazarTextToSpeechRouterMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTTextToSpeechRequest *session_messageAsFTTextToSpeechRequest;
@property (nonatomic, copy) FTTextToSpeechResponse *session_messageAsFTTextToSpeechResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTTextToSpeechRequest;
- (id)session_messageAsFTTextToSpeechResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTTextToSpeechRequest:(id)arg1;
- (void)setSession_messageAsFTTextToSpeechResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
