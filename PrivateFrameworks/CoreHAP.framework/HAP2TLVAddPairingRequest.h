
@interface HAP2TLVAddPairingRequest : NSObject <HAPTLVProtocol, NSCopying> {
    NSString * _identifier;
    HAP2TLVPairingMethodWrapper * _method;
    HAPTLVUnsignedNumberValue * _permissions;
    NSData * _publicKey;
    HAP2TLVPairingStateWrapper * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) HAP2TLVPairingMethodWrapper *method;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *permissions;
@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic, retain) HAP2TLVPairingStateWrapper *state;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithState:(id)arg1 method:(id)arg2 identifier:(id)arg3 publicKey:(id)arg4 permissions:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)method;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)permissions;
- (id)publicKey;
- (id)serializeWithError:(id*)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMethod:(id)arg1;
- (void)setPermissions:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
