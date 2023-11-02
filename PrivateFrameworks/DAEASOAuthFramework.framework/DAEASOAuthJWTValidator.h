
@interface DAEASOAuthJWTValidator : NSObject {
    NSData * _decodedHeader;
    NSData * _decodedPayload;
    NSData * _decodedSignature;
    id  _headerJSONObject;
    id  _payloadJSONObject;
    NSString * _rawHeader;
    NSString * _rawPayload;
    NSString * _rawSignature;
}

@property (nonatomic, retain) NSData *decodedHeader;
@property (nonatomic, retain) NSData *decodedPayload;
@property (nonatomic, retain) NSData *decodedSignature;
@property (nonatomic, retain) id headerJSONObject;
@property (nonatomic, retain) id payloadJSONObject;
@property (nonatomic, retain) NSString *rawHeader;
@property (nonatomic, retain) NSString *rawPayload;
@property (nonatomic, retain) NSString *rawSignature;

+ (id)base64URLDecode:(id)arg1;
+ (id)base64URLEncode:(id)arg1;

- (void).cxx_destruct;
- (bool)_signatureValid:(id)arg1;
- (id)decodedHeader;
- (id)decodedPayload;
- (id)decodedSignature;
- (id)headerJSONObject;
- (bool)idTokenValidWithJWKS:(id)arg1 withAudience:(id)arg2 withIssuer:(id)arg3;
- (id)init;
- (id)initWithIdToken:(id)arg1;
- (id)payloadJSONObject;
- (bool)personalAccount;
- (id)rawHeader;
- (id)rawPayload;
- (id)rawSignature;
- (void)setDecodedHeader:(id)arg1;
- (void)setDecodedPayload:(id)arg1;
- (void)setDecodedSignature:(id)arg1;
- (void)setHeaderJSONObject:(id)arg1;
- (void)setPayloadJSONObject:(id)arg1;
- (void)setRawHeader:(id)arg1;
- (void)setRawPayload:(id)arg1;
- (void)setRawSignature:(id)arg1;

@end
