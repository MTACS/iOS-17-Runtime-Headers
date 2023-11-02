
@interface HDSPSleepSession : NSObject <BSDescriptionProviding, NSSecureCoding> {
    unsigned long long  _endReason;
    NSDateInterval * _interval;
    NSDictionary * _metadata;
    bool  _requiresFirstUnlock;
    NSArray * _sleepIntervals;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long endReason;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDateInterval *interval;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) bool requiresFirstUnlock;
@property (nonatomic, readonly) NSArray *sleepIntervals;
@property (readonly) Class superclass;

+ (id)sleepSessionWithDateInterval:(id)arg1 sleepIntervals:(id)arg2 endReason:(unsigned long long)arg3 metadata:(id)arg4 requiresFirstUnlock:(bool)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endReason;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 sleepIntervals:(id)arg2 endReason:(unsigned long long)arg3 metadata:(id)arg4 requiresFirstUnlock:(bool)arg5;
- (id)interval;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (bool)requiresFirstUnlock;
- (id)sleepIntervals;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
