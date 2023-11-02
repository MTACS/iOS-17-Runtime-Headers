
@interface IDSLocalMessageDeliveryConnectionResetMetric : NSObject <CUTCoreAnalyticsMetric> {
    unsigned long long  _RTT;
    unsigned long long  _deliveryError;
    bool  _isToDefaultPairedDevice;
    unsigned long long  _linkType;
    unsigned long long  _messageSize;
    unsigned long long  _priority;
    NSString * _service;
}

@property (nonatomic, readonly) unsigned long long RTT;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long deliveryError;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isToDefaultPairedDevice;
@property (nonatomic, readonly) unsigned long long linkType;
@property (nonatomic, readonly) unsigned long long messageSize;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) NSString *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)RTT;
- (unsigned long long)deliveryError;
- (id)dictionaryRepresentation;
- (id)initWithService:(id)arg1 isToDefaultPairedDevice:(bool)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 deliveryError:(unsigned long long)arg5 RTT:(unsigned long long)arg6 priority:(unsigned long long)arg7;
- (bool)isToDefaultPairedDevice;
- (unsigned long long)linkType;
- (unsigned long long)messageSize;
- (id)name;
- (unsigned long long)priority;
- (id)service;

@end
