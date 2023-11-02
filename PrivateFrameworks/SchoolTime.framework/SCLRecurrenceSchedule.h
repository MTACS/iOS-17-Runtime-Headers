
@interface SCLRecurrenceSchedule : SCLSchedule {
    NSArray * _recurrences;
}

+ (void)performBlockWithSharedFormatter:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecurrences:(id)arg1;
- (id)initWithTimeIntervals:(id)arg1 repeatSchedule:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)recurrences;

@end
