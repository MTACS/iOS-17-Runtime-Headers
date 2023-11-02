
@protocol _CPNetworkTimingData <NSObject>

@required

- (bool)QUICWhitelistedDomain;
- (bool)TFOSuccess;
- (unsigned int)connectEnd;
- (unsigned int)connectStart;
- (bool)connectionRace;
- (bool)connectionReused;
- (NSString *)connectionUUID;
- (unsigned int)domainLookupEnd;
- (unsigned int)domainLookupStart;
- (unsigned int)fetchStart;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)interfaceIdentifier;
- (NSData *)jsonData;
- (NSString *)networkProtocolName;
- (NSData *)peerAddress;
- (unsigned int)redirectCount;
- (unsigned int)redirectCountW3C;
- (unsigned int)redirectEnd;
- (unsigned int)redirectStart;
- (unsigned int)requestEnd;
- (unsigned int)requestHeaderSize;
- (unsigned int)requestStart;
- (unsigned int)responseBodyBytesDecoded;
- (unsigned int)responseBodyBytesReceived;
- (unsigned int)responseEnd;
- (unsigned int)responseHeaderSize;
- (unsigned int)responseStart;
- (unsigned int)secureConnectStart;
- (void)setConnectEnd:(unsigned int)arg1;
- (void)setConnectStart:(unsigned int)arg1;
- (void)setConnectionRace:(bool)arg1;
- (void)setConnectionReused:(bool)arg1;
- (void)setConnectionUUID:(NSString *)arg1;
- (void)setDomainLookupEnd:(unsigned int)arg1;
- (void)setDomainLookupStart:(unsigned int)arg1;
- (void)setFetchStart:(unsigned int)arg1;
- (void)setInterfaceIdentifier:(NSString *)arg1;
- (void)setNetworkProtocolName:(NSString *)arg1;
- (void)setPeerAddress:(NSData *)arg1;
- (void)setQUICWhitelistedDomain:(bool)arg1;
- (void)setRedirectCount:(unsigned int)arg1;
- (void)setRedirectCountW3C:(unsigned int)arg1;
- (void)setRedirectEnd:(unsigned int)arg1;
- (void)setRedirectStart:(unsigned int)arg1;
- (void)setRequestEnd:(unsigned int)arg1;
- (void)setRequestHeaderSize:(unsigned int)arg1;
- (void)setRequestStart:(unsigned int)arg1;
- (void)setResponseBodyBytesDecoded:(unsigned int)arg1;
- (void)setResponseBodyBytesReceived:(unsigned int)arg1;
- (void)setResponseEnd:(unsigned int)arg1;
- (void)setResponseHeaderSize:(unsigned int)arg1;
- (void)setResponseStart:(unsigned int)arg1;
- (void)setSecureConnectStart:(unsigned int)arg1;
- (void)setStartTimeCounts:(_CPTCPInfo *)arg1;
- (void)setStopTimeCounts:(_CPTCPInfo *)arg1;
- (void)setTFOSuccess:(bool)arg1;
- (void)setTimingDataInit:(double)arg1;
- (_CPTCPInfo *)startTimeCounts;
- (_CPTCPInfo *)stopTimeCounts;
- (double)timingDataInit;

@end
