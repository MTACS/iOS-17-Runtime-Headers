
@interface FTMutableAsrCorrectionsValidatorMessage : FTAsrCorrectionsValidatorMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTCorrectionsValidatorRequest *session_messageAsFTCorrectionsValidatorRequest;
@property (nonatomic, copy) FTCorrectionsValidatorResponse *session_messageAsFTCorrectionsValidatorResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTCorrectionsValidatorRequest;
- (id)session_messageAsFTCorrectionsValidatorResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTCorrectionsValidatorRequest:(id)arg1;
- (void)setSession_messageAsFTCorrectionsValidatorResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
