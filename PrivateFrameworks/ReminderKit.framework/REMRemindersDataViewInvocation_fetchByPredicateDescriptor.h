
@interface REMRemindersDataViewInvocation_fetchByPredicateDescriptor : REMStoreInvocation <NSSecureCoding> {
    REMReminderFetchOptions * _options;
    REMReminderPredicateDescriptor * _predicateDescriptor;
    NSArray * _sortDescriptors;
}

@property (nonatomic, readonly) REMReminderFetchOptions *options;
@property (nonatomic, readonly) REMReminderPredicateDescriptor *predicateDescriptor;
@property (nonatomic, readonly) NSArray *sortDescriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 options:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)options;
- (id)predicateDescriptor;
- (id)sortDescriptors;

@end
