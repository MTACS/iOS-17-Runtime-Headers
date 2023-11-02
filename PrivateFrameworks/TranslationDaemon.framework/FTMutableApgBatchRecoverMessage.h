
@interface FTMutableApgBatchRecoverMessage : FTApgBatchRecoverMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTBatchRecoverFinalResponse *session_messageAsFTBatchRecoverFinalResponse;
@property (nonatomic, copy) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property (nonatomic, copy) FTStartBatchRecoverRequest *session_messageAsFTStartBatchRecoverRequest;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTBatchRecoverFinalResponse;
- (id)session_messageAsFTPronGuessResponse;
- (id)session_messageAsFTStartBatchRecoverRequest;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTBatchRecoverFinalResponse:(id)arg1;
- (void)setSession_messageAsFTPronGuessResponse:(id)arg1;
- (void)setSession_messageAsFTStartBatchRecoverRequest:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
