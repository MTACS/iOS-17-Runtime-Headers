
@interface ATXInterruptingAppSessionEvent : NSObject <ATXUsageInsightsGraphProtocol, NSSecureCoding> {
    NSDate * _endTime;
    NSString * _interruptedBundleID;
    unsigned long long  _interruptedCategory;
    NSString * _interruptingBundleID;
    unsigned long long  _interruptingCategory;
    NSDate * _startTime;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endTime;
@property (nonatomic, readonly) NSDate *eventTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *interruptedBundleID;
@property (nonatomic, readonly) unsigned long long interruptedCategory;
@property (nonatomic, readonly, copy) NSString *interruptingBundleID;
@property (nonatomic, readonly) unsigned long long interruptingCategory;
@property (nonatomic, readonly) NSDate *startTime;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (id)eventTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterruptingBundleID:(id)arg1 interruptedBundleID:(id)arg2 eventStartTime:(id)arg3 eventEndTime:(id)arg4 interruptingCategory:(unsigned long long)arg5 interruptedCategory:(unsigned long long)arg6;
- (id)interruptedBundleID;
- (unsigned long long)interruptedCategory;
- (id)interruptingBundleID;
- (unsigned long long)interruptingCategory;
- (id)startTime;

@end
