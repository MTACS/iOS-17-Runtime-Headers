
@interface PDSRegistrationAbandonedMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSString * _failureReason;
    NSDate * _heartbeatDate;
    NSNumber * _registrationReason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *failureReason;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *heartbeatDate;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *registrationReason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)failureReason;
- (id)heartbeatDate;
- (id)initWithFailureReason:(id)arg1 registrationReason:(id)arg2 heartbeatDate:(id)arg3;
- (id)name;
- (id)registrationReason;

@end
