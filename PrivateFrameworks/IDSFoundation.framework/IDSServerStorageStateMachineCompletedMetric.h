
@interface IDSServerStorageStateMachineCompletedMetric : NSObject <CUTCoreAnalyticsMetric> {
    long long  _linkType;
    long long  _numberProcessed;
    NSString * _service;
    double  _timeTaken;
    bool  _wasPrimary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long linkType;
@property (readonly) NSString *name;
@property (nonatomic, readonly) long long numberProcessed;
@property (nonatomic, readonly) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeTaken;
@property (nonatomic, readonly) bool wasPrimary;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithService:(id)arg1 linkType:(long long)arg2 wasPrimary:(bool)arg3 timeTaken:(double)arg4 numberProcessed:(long long)arg5;
- (long long)linkType;
- (id)name;
- (long long)numberProcessed;
- (id)service;
- (double)timeTaken;
- (bool)wasPrimary;

@end
