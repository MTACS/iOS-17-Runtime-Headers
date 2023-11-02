
@interface PSYActivityInfo : NSObject <NSSecureCoding> {
    NSString * _backboardPrelaunchBundleIdentifier;
    NSArray * _dependentBuddyStages;
    NSArray * _dependentServices;
    NSString * _label;
    NSString * _machServiceName;
    NSString * _priority;
    NSArray * _sessionTypes;
    NSNumber * _timeoutSeconds;
}

@property (nonatomic, copy) NSString *backboardPrelaunchBundleIdentifier;
@property (nonatomic, copy) NSArray *dependentBuddyStages;
@property (nonatomic, copy) NSArray *dependentServices;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *machServiceName;
@property (nonatomic, copy) NSString *priority;
@property (nonatomic, copy) NSArray *sessionTypes;
@property (nonatomic, copy) NSNumber *timeoutSeconds;

+ (id)activityWithPlist:(id)arg1;
+ (unsigned long long)buddyStageValueForString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backboardPrelaunchBundleIdentifier;
- (id)dependentBuddyStages;
- (id)dependentServices;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (id)machServiceName;
- (id)priority;
- (id)sessionTypes;
- (void)setBackboardPrelaunchBundleIdentifier:(id)arg1;
- (void)setDependentBuddyStages:(id)arg1;
- (void)setDependentServices:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMachServiceName:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setSessionTypes:(id)arg1;
- (void)setTimeoutSeconds:(id)arg1;
- (id)timeoutSeconds;

@end
