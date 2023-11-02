
@protocol _CPEndNetworkSearchFeedback <NSObject>

@required

- (unsigned long long)decompressedResponseSize;
- (double)duration;
- (int)endpointType;
- (NSString *)fbq;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)parsecStatus;
- (NSString *)partialClientIp;
- (unsigned long long)rawResponseSize;
- (long long)responseSize;
- (void)setDecompressedResponseSize:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndpointType:(int)arg1;
- (void)setFbq:(NSString *)arg1;
- (void)setParsecStatus:(NSString *)arg1;
- (void)setPartialClientIp:(NSString *)arg1;
- (void)setRawResponseSize:(unsigned long long)arg1;
- (void)setResponseSize:(long long)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTimingData:(_CPNetworkTimingData *)arg1;
- (void)setUuid:(NSString *)arg1;
- (int)statusCode;
- (unsigned long long)timestamp;
- (_CPNetworkTimingData *)timingData;
- (NSString *)uuid;

@end
