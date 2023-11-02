
@interface FTMutableAsrGraphemeToPhonemeMessage : FTAsrGraphemeToPhonemeMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTGraphemeToPhonemeRequest *session_messageAsFTGraphemeToPhonemeRequest;
@property (nonatomic, copy) FTGraphemeToPhonemeResponse *session_messageAsFTGraphemeToPhonemeResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTGraphemeToPhonemeRequest;
- (id)session_messageAsFTGraphemeToPhonemeResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTGraphemeToPhonemeRequest:(id)arg1;
- (void)setSession_messageAsFTGraphemeToPhonemeResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
