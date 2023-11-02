
@interface RMProtocolSynchronizationTokens : RMModelPayloadBase {
    NSString * _tokensDeclarationsToken;
    NSDate * _tokensTimestamp;
}

@property (nonatomic, copy) NSString *tokensDeclarationsToken;
@property (nonatomic, copy) NSDate *tokensTimestamp;

+ (id)requestWithTimestamp:(id)arg1 declarationsToken:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializeWithType:(short)arg1;
- (void)setTokensDeclarationsToken:(id)arg1;
- (void)setTokensTimestamp:(id)arg1;
- (id)tokensDeclarationsToken;
- (id)tokensTimestamp;

@end
