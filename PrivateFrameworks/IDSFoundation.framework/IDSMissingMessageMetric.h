
@interface IDSMissingMessageMetric : NSObject {
    NSDictionary * _additionalInfo;
    NSString * _guid;
    long long  _reason;
    NSString * _service;
}

@property (nonatomic, readonly) NSDictionary *additionalInfo;
@property (nonatomic, readonly) NSNumber *command;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSDictionary *payload;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) NSString *service;

- (void).cxx_destruct;
- (bool)_isInternal;
- (bool)_shouldReportMetricForExternal;
- (bool)_shouldReportReason;
- (bool)_shouldReportReasonForExternal;
- (id)additionalInfo;
- (id)command;
- (id)guid;
- (id)initWithReason:(long long)arg1 guid:(id)arg2 service:(id)arg3 additionalInformation:(id)arg4;
- (id)payload;
- (long long)reason;
- (id)service;
- (bool)shouldReportMetric;

@end
