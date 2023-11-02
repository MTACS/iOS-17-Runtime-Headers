
@interface PDSRegisterMessage : FTIDSMessage {
    PDSProtoBatchRegisterReq * _protoRequest;
    PDSProtoBatchRegisterResp * _protoResponse;
    unsigned long long  _regReason;
}

@property (nonatomic, retain) PDSProtoBatchRegisterReq *protoRequest;
@property (nonatomic, retain) PDSProtoBatchRegisterResp *protoResponse;
@property (nonatomic) unsigned long long regReason;

- (void).cxx_destruct;
- (id)additionalMessageHeaders;
- (double)anisetteHeadersTimeout;
- (id)bagKey;
- (void)handleResponseBody:(id)arg1;
- (bool)hasRequiredKeys:(id*)arg1;
- (id)messageBodyDataOverride;
- (id)overrideContentType;
- (id)parsedIDSMessageResult;
- (id)protoRequest;
- (id)protoResponse;
- (unsigned long long)regReason;
- (bool)requiresPushTokenKeys;
- (void)setProtoRequest:(id)arg1;
- (void)setProtoResponse:(id)arg1;
- (void)setRegReason:(unsigned long long)arg1;
- (bool)wantsClientInfo;
- (bool)wantsIDSProtocolVersion;
- (bool)wantsUDID;

@end
