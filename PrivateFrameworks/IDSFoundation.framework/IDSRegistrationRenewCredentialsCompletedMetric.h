
@interface IDSRegistrationRenewCredentialsCompletedMetric : NSObject <CUTCoreAnalyticsMetric> {
    long long  _errorCode;
    NSString * _errorDomain;
    long long  _renewResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long errorCode;
@property (nonatomic, readonly) NSString *errorDomain;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) long long renewResult;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDomain;
- (id)initWithRenewResult:(long long)arg1 errorDomain:(id)arg2 errorCode:(long long)arg3;
- (id)name;
- (long long)renewResult;

@end
