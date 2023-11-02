
@interface HAP2TLVAddOrRemovePairingResponse : NSObject <HAPTLVProtocol, NSCopying> {
    HAP2TLVErrorsWrapper * _responseError;
    HAP2TLVPairingStateWrapper * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAP2TLVErrorsWrapper *responseError;
@property (nonatomic, retain) HAP2TLVPairingStateWrapper *state;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithState:(id)arg1 responseError:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)responseError;
- (id)serializeWithError:(id*)arg1;
- (void)setResponseError:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
