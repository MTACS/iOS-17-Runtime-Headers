
@interface FTMutableAsrPostItnHammerMessage : FTAsrPostItnHammerMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTPostItnHammerRequest *session_messageAsFTPostItnHammerRequest;
@property (nonatomic, copy) FTPostItnHammerResponse *session_messageAsFTPostItnHammerResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTPostItnHammerRequest;
- (id)session_messageAsFTPostItnHammerResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTPostItnHammerRequest:(id)arg1;
- (void)setSession_messageAsFTPostItnHammerResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
