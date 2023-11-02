
@interface IDSOTRSessionNegotiationMetric : NSObject <CUTCoreAnalyticsMetric> {
    unsigned long long  _duration;
    unsigned long long  _priority;
    unsigned int  _result;
    NSString * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) unsigned long long duration;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) unsigned int result;
@property (nonatomic, readonly) NSString *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (id)initWithService:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 result:(unsigned int)arg4;
- (id)name;
- (unsigned long long)priority;
- (unsigned int)result;
- (id)service;

@end
