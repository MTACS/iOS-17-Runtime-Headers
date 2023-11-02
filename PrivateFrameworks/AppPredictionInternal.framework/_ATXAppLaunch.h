
@interface _ATXAppLaunch : NSObject <ATXLaunchEventProtocol, ATXTimedEventProtocol> {
    NSString * _bundleId;
    NSDate * _endDate;
    NSString * _reason;
    NSDate * _startDate;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)bundleId;
- (id)description;
- (id)endDate;
- (id)eventTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 reason:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLaunch:(id)arg1;
- (id)reason;
- (id)startDate;
- (id)timeZone;

@end
