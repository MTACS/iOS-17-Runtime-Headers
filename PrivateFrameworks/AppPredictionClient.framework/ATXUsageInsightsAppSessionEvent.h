
@interface ATXUsageInsightsAppSessionEvent : NSObject <ATXUsageInsightsGraphProtocol, NSSecureCoding> {
    NSString * _bundleID;
    unsigned long long  _category;
    double  _duration;
    NSDate * _endTime;
    NSString * _launchReason;
    NSDate * _startTime;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly) unsigned long long category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDate *endTime;
@property (nonatomic, readonly) NSDate *eventTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *interruptedBundleID;
@property (nonatomic, readonly, copy) NSString *launchReason;
@property (nonatomic, readonly) NSDate *startTime;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;
+ (id)usageInsightsAppLaunchReasonFromBMAppInFocus:(id)arg1;

- (void).cxx_destruct;
- (id)bundleID;
- (unsigned long long)category;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (id)eventTime;
- (id)initWithBundleID:(id)arg1 category:(unsigned long long)arg2 launchReason:(id)arg3 startTime:(id)arg4 endTime:(id)arg5 duration:(double)arg6;
- (id)initWithCoder:(id)arg1;
- (id)launchReason;
- (id)startTime;

@end
