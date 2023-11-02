
@interface IDSLocalDeliverySocketClosedMetric : NSObject <CUTCoreAnalyticsMetric> {
    unsigned long long  _bytesReceived;
    unsigned long long  _bytesSent;
    unsigned long long  _closeError;
    bool  _isToDefaultPairedDevice;
    unsigned long long  _packetsReceived;
    unsigned long long  _packetsSent;
    NSString * _service;
    unsigned long long  _socketError;
}

@property (nonatomic, readonly) unsigned long long bytesReceived;
@property (nonatomic, readonly) unsigned long long bytesSent;
@property (nonatomic, readonly) unsigned long long closeError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isToDefaultPairedDevice;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long packetsReceived;
@property (nonatomic, readonly) unsigned long long packetsSent;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) unsigned long long socketError;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)bytesReceived;
- (unsigned long long)bytesSent;
- (unsigned long long)closeError;
- (id)dictionaryRepresentation;
- (id)initWithService:(id)arg1 isToDefaultPairedDevice:(bool)arg2 closeError:(unsigned long long)arg3 socketError:(unsigned long long)arg4 bytesSent:(unsigned long long)arg5 packetsSent:(unsigned long long)arg6 bytesReceived:(unsigned long long)arg7 packetsReceived:(unsigned long long)arg8;
- (bool)isToDefaultPairedDevice;
- (id)name;
- (unsigned long long)packetsReceived;
- (unsigned long long)packetsSent;
- (id)service;
- (unsigned long long)socketError;

@end
