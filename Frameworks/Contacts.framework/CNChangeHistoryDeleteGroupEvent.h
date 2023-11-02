
@interface CNChangeHistoryDeleteGroupEvent : CNChangeHistoryEvent {
    NSString * _externalModificationTag;
    NSString * _externalURI;
    NSString * _groupIdentifier;
}

@property (nonatomic, readonly, copy) NSString *externalModificationTag;
@property (nonatomic, readonly, copy) NSString *externalURI;
@property (nonatomic, readonly) NSString *groupIdentifier;

+ (unsigned long long)instanceSortOrder;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalModificationTag;
- (id)externalURI;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupIdentifier:(id)arg1;
- (id)initWithGroupIdentifier:(id)arg1 externalURI:(id)arg2 externalModificationTag:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
