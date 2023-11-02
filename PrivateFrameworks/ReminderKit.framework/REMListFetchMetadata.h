
@interface REMListFetchMetadata : REMFetchMetadata {
    NSDictionary * _incompleteReminderCounts;
    long long  _scheduledCount;
}

@property (nonatomic, readonly) NSDictionary *incompleteReminderCounts;
@property (nonatomic, readonly) long long scheduledCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)incompleteReminderCounts;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncompleteReminderCounts:(id)arg1 scheduledCount:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)scheduledCount;

@end
