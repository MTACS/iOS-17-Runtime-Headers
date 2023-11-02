
@interface HMDNetworkRouterAccessViolation : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _clientIdentifier;
    HAPTLVUnsignedNumberValue * _lastResetTimestamp;
    HAPTLVUnsignedNumberValue * _lastViolationTimestamp;
}

@property (nonatomic, retain) HAPTLVUnsignedNumberValue *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *lastResetTimestamp;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *lastViolationTimestamp;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithClientIdentifier:(id)arg1 lastViolationTimestamp:(id)arg2 lastResetTimestamp:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)lastResetTimestamp;
- (id)lastViolationTimestamp;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setLastResetTimestamp:(id)arg1;
- (void)setLastViolationTimestamp:(id)arg1;

@end
