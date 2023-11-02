
@interface HAP2TLVRemovePairingRequest : NSObject <HAPTLVProtocol, NSCopying> {
    NSString * _identifier;
    HAP2TLVPairingMethodWrapper * _method;
    HAP2TLVPairingStateWrapper * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) HAP2TLVPairingMethodWrapper *method;
@property (nonatomic, retain) HAP2TLVPairingStateWrapper *state;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithState:(id)arg1 method:(id)arg2 identifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)method;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMethod:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
