
@interface HAPNFCAccessDeviceCredentialKeyRequest : NSObject <HAPTLVProtocol, NSCopying> {
    NSData * _identifier;
    NSData * _issuerKeyIdentifier;
    NSData * _key;
    HAPNFCAccessKeyStateWrapper * _state;
    HAPNFCAccessKeyTypeWrapper * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *identifier;
@property (nonatomic, retain) NSData *issuerKeyIdentifier;
@property (nonatomic, retain) NSData *key;
@property (nonatomic, retain) HAPNFCAccessKeyStateWrapper *state;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPNFCAccessKeyTypeWrapper *type;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithType:(id)arg1 key:(id)arg2 issuerKeyIdentifier:(id)arg3 state:(id)arg4 identifier:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)issuerKeyIdentifier;
- (id)key;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIssuerKeyIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setState:(id)arg1;
- (void)setType:(id)arg1;
- (id)state;
- (id)type;

@end
