
@interface _CPEndNetworkSearchFeedback : PBCodable <NSSecureCoding, _CPEndNetworkSearchFeedback, _CPFeedbackUUID, _CPProcessableFeedback> {
    unsigned long long  _decompressedResponseSize;
    double  _duration;
    int  _endpointType;
    NSString * _fbq;
    NSString * _parsecStatus;
    NSString * _partialClientIp;
    unsigned long long  _rawResponseSize;
    long long  _responseSize;
    int  _statusCode;
    unsigned long long  _timestamp;
    _CPNetworkTimingData * _timingData;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long decompressedResponseSize;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) int endpointType;
@property (nonatomic, copy) NSString *fbq;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *parsecStatus;
@property (nonatomic, copy) NSString *partialClientIp;
@property (nonatomic) unsigned long long rawResponseSize;
@property (nonatomic) long long responseSize;
@property (nonatomic) int statusCode;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) _CPNetworkTimingData *timingData;
@property (nonatomic, readonly, copy) NSString *uuid;
@property (nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (unsigned long long)decompressedResponseSize;
- (double)duration;
- (int)endpointType;
- (id)fbq;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (id)initWithStartSearch:(id)arg1 responseSize:(long long)arg2 statusCode:(long long)arg3 parsecStatus:(id)arg4 parsecDuration:(double)arg5 fbq:(id)arg6 partialClientIp:(id)arg7 networkTimingData:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)parsecStatus;
- (id)partialClientIp;
- (unsigned long long)rawResponseSize;
- (bool)readFrom:(id)arg1;
- (long long)responseSize;
- (void)setDecompressedResponseSize:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndpointType:(int)arg1;
- (void)setFbq:(id)arg1;
- (void)setParsecStatus:(id)arg1;
- (void)setPartialClientIp:(id)arg1;
- (void)setRawResponseSize:(unsigned long long)arg1;
- (void)setResponseSize:(long long)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTimingData:(id)arg1;
- (void)setUuid:(id)arg1;
- (int)statusCode;
- (unsigned long long)timestamp;
- (id)timingData;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
