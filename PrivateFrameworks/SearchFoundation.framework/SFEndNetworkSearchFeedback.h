
@interface SFEndNetworkSearchFeedback : SFEndSearchFeedback {
    unsigned long long  _decompressedResponseSize;
    NSDictionary * _networkTimingData;
    unsigned long long  _rawResponseSize;
    long long  _responseSize;
    long long  _statusCode;
}

@property (nonatomic) unsigned long long decompressedResponseSize;
@property (nonatomic, copy) NSDictionary *networkTimingData;
@property (nonatomic) unsigned long long rawResponseSize;
@property (nonatomic) long long responseSize;
@property (nonatomic) long long statusCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)decompressedResponseSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartSearch:(id)arg1 responseSize:(long long)arg2 statusCode:(long long)arg3 networkTimingData:(id)arg4;
- (id)networkTimingData;
- (unsigned long long)rawResponseSize;
- (long long)responseSize;
- (void)setDecompressedResponseSize:(unsigned long long)arg1;
- (void)setNetworkTimingData:(id)arg1;
- (void)setRawResponseSize:(unsigned long long)arg1;
- (void)setResponseSize:(long long)arg1;
- (void)setStatusCode:(long long)arg1;
- (long long)statusCode;

@end
