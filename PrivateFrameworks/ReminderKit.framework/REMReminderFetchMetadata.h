
@interface REMReminderFetchMetadata : REMFetchMetadata {
    NSArray * _dueDateCounts;
    NSDictionary * _subtaskCounts;
}

@property (nonatomic, readonly) NSArray *dueDateCounts;
@property (nonatomic, readonly) NSDictionary *subtaskCounts;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dueDateCounts;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDueDateCounts:(id)arg1;
- (id)initWithSubtaskCounts:(id)arg1;
- (id)initWithSubtaskCounts:(id)arg1 dueDateCounts:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)subtaskCounts;

@end
