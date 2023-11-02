
@interface FTMutableNapgCreateLanguageProfileMessage : FTNapgCreateLanguageProfileMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTCreateLanguageProfileRequest *session_messageAsFTCreateLanguageProfileRequest;
@property (nonatomic, copy) FTCreateLanguageProfileResponse *session_messageAsFTCreateLanguageProfileResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTCreateLanguageProfileRequest;
- (id)session_messageAsFTCreateLanguageProfileResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTCreateLanguageProfileRequest:(id)arg1;
- (void)setSession_messageAsFTCreateLanguageProfileResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
