
@interface REMEventKitBridgingDataViewInvocation_fetchIncompleteRemindersWithDueDate : REMStoreInvocation <NSSecureCoding> {
    NSDate * _endDate;
    NSArray * _listIDs;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSArray *listIDs;
@property (nonatomic, readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithListIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)listIDs;
- (id)startDate;

@end
