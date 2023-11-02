
@interface IDSNoteMessageReceivedMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSNumber * _accountType;
    bool  _fromStorage;
    double  _localTimeDelta;
    double  _serverTimestamp;
    NSString * _service;
}

@property (nonatomic, readonly) NSNumber *accountType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) bool fromStorage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double localTimeDelta;
@property (readonly) NSString *name;
@property (nonatomic, readonly) double serverTimestamp;
@property (nonatomic, readonly) NSString *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountType;
- (id)dictionaryRepresentation;
- (bool)fromStorage;
- (id)initWithService:(id)arg1 accountType:(id)arg2 fromStorage:(bool)arg3 serverTimestamp:(double)arg4 localTimeDelta:(double)arg5;
- (double)localTimeDelta;
- (id)name;
- (double)serverTimestamp;
- (id)service;

@end
