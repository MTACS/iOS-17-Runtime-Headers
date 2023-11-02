
@interface IDSWiFiSetupAttemptMetric : NSObject <CUTCoreAnalyticsMetric> {
    unsigned long long  _attemptType;
    NSString * _client;
    unsigned long long  _msDuration;
    unsigned long long  _result;
}

@property (nonatomic, readonly) unsigned long long attemptType;
@property (nonatomic, readonly) NSString *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long msDuration;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long result;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)attemptType;
- (id)client;
- (id)dictionaryRepresentation;
- (id)initWithAttemptType:(unsigned long long)arg1 msDuration:(unsigned long long)arg2 result:(unsigned long long)arg3 client:(id)arg4;
- (unsigned long long)msDuration;
- (id)name;
- (unsigned long long)result;

@end
