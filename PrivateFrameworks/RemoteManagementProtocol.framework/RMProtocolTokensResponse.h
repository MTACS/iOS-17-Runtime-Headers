
@interface RMProtocolTokensResponse : RMModelPayloadBase {
    RMProtocolSynchronizationTokens * _responseSyncTokens;
}

@property (nonatomic, copy) RMProtocolSynchronizationTokens *responseSyncTokens;

+ (id)requestWithSyncTokens:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)responseSyncTokens;
- (id)serializeWithType:(short)arg1;
- (void)setResponseSyncTokens:(id)arg1;

@end
