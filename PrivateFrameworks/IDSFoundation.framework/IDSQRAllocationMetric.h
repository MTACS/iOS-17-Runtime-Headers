
@interface IDSQRAllocationMetric : NSObject <CUTCoreAnalyticsMetric> {
    unsigned long long  _duration;
    unsigned int  _hasRecipientAccepted;
    unsigned int  _payloadSize;
    unsigned int  _result;
    NSString * _service;
    NSString * _topic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) unsigned long long duration;
@property (nonatomic, readonly) unsigned int hasRecipientAccepted;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned int payloadSize;
@property (nonatomic, readonly) unsigned int result;
@property (nonatomic, readonly) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *topic;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (unsigned int)hasRecipientAccepted;
- (id)initWithDuration:(unsigned long long)arg1 result:(unsigned int)arg2 hasRecipientAccepted:(unsigned int)arg3 payloadSize:(unsigned int)arg4 topic:(id)arg5 service:(id)arg6;
- (id)name;
- (unsigned int)payloadSize;
- (unsigned int)result;
- (id)service;
- (id)topic;

@end
