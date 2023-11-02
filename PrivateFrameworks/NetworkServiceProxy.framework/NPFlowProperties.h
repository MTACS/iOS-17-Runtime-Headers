
@interface NPFlowProperties : NSObject {
    int  _dataMode;
    NWEndpoint * _directEndpoint;
    double  _fallbackTimeout;
    unsigned int  _flags;
    unsigned int  _flowIdentifier;
    NSDictionary * _replacementAddressMap;
    NPTunnelTuscanyEndpoint * _replacementEndpoint;
    NSData * _requestData;
    unsigned long long  _serviceID;
    unsigned long long * _timestamps;
}

@property (nonatomic) int dataMode;
@property (nonatomic, retain) NWEndpoint *directEndpoint;
@property (nonatomic) bool disableIdleTimeout;
@property (nonatomic) bool enableNSP;
@property (nonatomic) double fallbackTimeout;
@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned int flowIdentifier;
@property (nonatomic) bool isLoopback;
@property (nonatomic, retain) NSDictionary *replacementAddressMap;
@property (nonatomic, retain) NPTunnelTuscanyEndpoint *replacementEndpoint;
@property (nonatomic, retain) NSData *requestData;
@property (nonatomic) unsigned long long serviceID;
@property (nonatomic) unsigned long long*timestamps;

- (void).cxx_destruct;
- (id)copyTLVData;
- (int)dataMode;
- (void)dealloc;
- (id)directEndpoint;
- (bool)disableIdleTimeout;
- (bool)enableNSP;
- (double)fallbackTimeout;
- (unsigned int)flags;
- (unsigned int)flowIdentifier;
- (id)initWithTLVData:(id)arg1;
- (bool)isLoopback;
- (id)replacementAddressMap;
- (id)replacementEndpoint;
- (id)requestData;
- (unsigned long long)serviceID;
- (void)setDataMode:(int)arg1;
- (void)setDirectEndpoint:(id)arg1;
- (void)setDisableIdleTimeout:(bool)arg1;
- (void)setEnableNSP:(bool)arg1;
- (void)setFallbackTimeout:(double)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setFlowIdentifier:(unsigned int)arg1;
- (void)setIsLoopback:(bool)arg1;
- (void)setReplacementAddressMap:(id)arg1;
- (void)setReplacementEndpoint:(id)arg1;
- (void)setRequestData:(id)arg1;
- (void)setServiceID:(unsigned long long)arg1;
- (void)setTimestamps:(unsigned long long*)arg1;
- (unsigned long long*)timestamps;

@end
