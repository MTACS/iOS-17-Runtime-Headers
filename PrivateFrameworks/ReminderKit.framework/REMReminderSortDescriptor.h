
@interface REMReminderSortDescriptor : NSObject <NSSecureCoding> {
    bool  _ascending;
    long long  _type;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly) long long type;

+ (id)sortDescriptorSortingByCreationDateAscending:(bool)arg1;
+ (id)sortDescriptorSortingByDueDateAscending:(bool)arg1;
+ (id)sortDescriptorSortingByOrderingInListAscending:(bool)arg1;
+ (id)sortDescriptorSortingByPriorityAscending:(bool)arg1;
+ (id)sortDescriptorSortingByTitleAscending:(bool)arg1;
+ (bool)supportsSecureCoding;

- (bool)ascending;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 ascending:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
