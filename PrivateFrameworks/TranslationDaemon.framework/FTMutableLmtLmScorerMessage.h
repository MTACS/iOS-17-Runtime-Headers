
@interface FTMutableLmtLmScorerMessage : FTLmtLmScorerMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTLmScorerRequest *session_messageAsFTLmScorerRequest;
@property (nonatomic, copy) FTLmScorerResponse *session_messageAsFTLmScorerResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTLmScorerRequest;
- (id)session_messageAsFTLmScorerResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTLmScorerRequest:(id)arg1;
- (void)setSession_messageAsFTLmScorerResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
