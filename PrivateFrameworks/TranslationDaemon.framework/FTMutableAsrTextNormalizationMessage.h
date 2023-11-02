
@interface FTMutableAsrTextNormalizationMessage : FTAsrTextNormalizationMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTTextNormalizationRequest *session_messageAsFTTextNormalizationRequest;
@property (nonatomic, copy) FTTextNormalizationResponse *session_messageAsFTTextNormalizationResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTTextNormalizationRequest;
- (id)session_messageAsFTTextNormalizationResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTTextNormalizationRequest:(id)arg1;
- (void)setSession_messageAsFTTextNormalizationResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
