
@interface FTMutableAsrItnMessage : FTAsrItnMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTItnRequest *session_messageAsFTItnRequest;
@property (nonatomic, copy) FTItnResponse *session_messageAsFTItnResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTItnRequest;
- (id)session_messageAsFTItnResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTItnRequest:(id)arg1;
- (void)setSession_messageAsFTItnResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
