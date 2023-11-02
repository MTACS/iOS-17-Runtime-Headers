
@interface RMProtocolPushMessage : RMModelPayloadBase {
    NSString * _messageEnrollmentToken;
    RMProtocolSynchronizationTokens * _messageSyncTokens;
}

@property (nonatomic, copy) NSString *messageEnrollmentToken;
@property (nonatomic, copy) RMProtocolSynchronizationTokens *messageSyncTokens;

+ (id)requestWithEnrollmentToken:(id)arg1 syncTokens:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)messageEnrollmentToken;
- (id)messageSyncTokens;
- (id)serializeWithType:(short)arg1;
- (void)setMessageEnrollmentToken:(id)arg1;
- (void)setMessageSyncTokens:(id)arg1;

@end
