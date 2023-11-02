
@interface HDSPSleepSessionInterval : NSObject <BSDescriptionProviding, NSSecureCoding> {
    NSDateInterval * _interval;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDateInterval *interval;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (id)sleepSessionIntervalWithInterval:(id)arg1 type:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterval:(id)arg1 type:(unsigned long long)arg2;
- (id)interval;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)type;

@end
