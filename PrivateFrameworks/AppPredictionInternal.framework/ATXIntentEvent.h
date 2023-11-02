
@interface ATXIntentEvent : NSObject <ATXLaunchEventProtocol, NSSecureCoding> {
    ATXAction * _action;
    NSString * _arg1;
    NSString * _arg2;
    NSString * _bundleId;
    NSDateInterval * _dateInterval;
    INIntent * _intent;
    NSString * _intentType;
}

@property (nonatomic, readonly, copy) ATXAction *action;
@property (nonatomic, copy) NSString *arg1;
@property (nonatomic, copy) NSString *arg2;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INIntent *intent;
@property (nonatomic, readonly, copy) NSString *intentType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)arg1;
- (id)arg2;
- (id)bundleId;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleId:(id)arg1 intentType:(id)arg2 dateInterval:(id)arg3;
- (id)initWithBundleId:(id)arg1 intentType:(id)arg2 dateInterval:(id)arg3 action:(id)arg4;
- (id)initWithBundleId:(id)arg1 intentType:(id)arg2 dateInterval:(id)arg3 intent:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)intent;
- (id)intentType;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXIntentEvent:(id)arg1;
- (void)setArg1:(id)arg1;
- (void)setArg2:(id)arg1;
- (void)setBundleId:(id)arg1;
- (id)startDate;

@end
