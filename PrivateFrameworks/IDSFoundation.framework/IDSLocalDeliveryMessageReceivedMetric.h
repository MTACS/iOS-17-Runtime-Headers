
@interface IDSLocalDeliveryMessageReceivedMetric : NSObject <CUTCoreAnalyticsMetric> {
    bool  _isFromDefaultPairedDevice;
    unsigned long long  _linkType;
    unsigned long long  _messageSize;
    unsigned long long  _priority;
    NSString * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFromDefaultPairedDevice;
@property (nonatomic, readonly) unsigned long long linkType;
@property (nonatomic, readonly) unsigned long long messageSize;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) NSString *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithService:(id)arg1 isFromDefaultPairedDevice:(bool)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 priority:(unsigned long long)arg5;
- (bool)isFromDefaultPairedDevice;
- (unsigned long long)linkType;
- (unsigned long long)messageSize;
- (id)name;
- (unsigned long long)priority;
- (id)service;

@end
