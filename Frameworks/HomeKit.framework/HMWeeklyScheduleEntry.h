
@interface HMWeeklyScheduleEntry : NSObject <HMFLogging, NSSecureCoding> {
    NSDateComponents * _end;
    NSDateComponents * _start;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDateComponents *end;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDateComponents *start;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)end;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)serializeForAdd;
- (id)start;

@end
