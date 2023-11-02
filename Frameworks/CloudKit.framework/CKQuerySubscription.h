
@interface CKQuerySubscription : CKSubscription <NSCopying, NSSecureCoding> {
    NSPredicate * _predicate;
    unsigned long long  _querySubscriptionOptions;
}

@property (readonly, copy) NSPredicate *predicate;
@property (readonly) unsigned long long querySubscriptionOptions;
@property (readonly, copy) NSString *recordType;
@property (copy) CKRecordZoneID *zoneID;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_predicateWithoutCopy;
- (void)_validateQuerySubscriptionOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (unsigned long long)querySubscriptionOptions;
- (void)setPredicate_modelMutation:(id)arg1;
- (void)setQuerySubscriptionOptions_modelMutation:(unsigned long long)arg1;
- (void)setRecordType:(id)arg1;
- (void)setRecordType_modelMutation:(id)arg1;

@end
