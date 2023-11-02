
@interface IDSClientProcessReceivedMessageMetric : NSObject <CUTCoreAnalyticsMetric> {
    unsigned long long  _deltaTime;
    unsigned long long  _messageSize;
    unsigned long long  _priority;
    NSString * _serviceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long deltaTime;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long messageSize;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)deltaTime;
- (id)dictionaryRepresentation;
- (id)initWithServiceIdentifier:(id)arg1 messageSize:(unsigned long long)arg2 deltaTime:(unsigned long long)arg3 priority:(unsigned long long)arg4;
- (unsigned long long)messageSize;
- (id)name;
- (unsigned long long)priority;
- (id)serviceIdentifier;

@end
