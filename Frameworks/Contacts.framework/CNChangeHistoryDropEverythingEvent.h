
@interface CNChangeHistoryDropEverythingEvent : CNChangeHistoryEvent

+ (unsigned long long)instanceSortOrder;
+ (bool)supportsSecureCoding;

- (void)acceptEventVisitor:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
