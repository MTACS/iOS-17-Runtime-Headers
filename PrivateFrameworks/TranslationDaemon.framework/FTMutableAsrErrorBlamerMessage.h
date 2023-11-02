
@interface FTMutableAsrErrorBlamerMessage : FTAsrErrorBlamerMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTErrorBlamerRequest *session_messageAsFTErrorBlamerRequest;
@property (nonatomic, copy) FTErrorBlamerResponse *session_messageAsFTErrorBlamerResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTErrorBlamerRequest;
- (id)session_messageAsFTErrorBlamerResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTErrorBlamerRequest:(id)arg1;
- (void)setSession_messageAsFTErrorBlamerResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
