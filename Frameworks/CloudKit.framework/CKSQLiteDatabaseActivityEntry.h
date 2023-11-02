
@interface CKSQLiteDatabaseActivityEntry : CKSQLiteTableEntry {
    NSDate * _activityEarliestDate;
    NSNumber * _activityID;
    NSDate * _activityLatestDate;
    NSDate * _activityNotBeforeDate;
    NSDate * _activityStartDate;
    NSNumber * _coalescingInterval;
    NSNumber * _databaseID;
    NSNumber * _groupID;
    NSString * _groupName;
    NSNumber * _separationInterval;
    NSString * _tableName;
}

@property (nonatomic, retain) NSDate *activityEarliestDate;
@property (nonatomic, retain) NSNumber *activityID;
@property (nonatomic, retain) NSDate *activityLatestDate;
@property (nonatomic, retain) NSDate *activityNotBeforeDate;
@property (nonatomic, retain) NSDate *activityStartDate;
@property (nonatomic, retain) NSNumber *coalescingInterval;
@property (nonatomic, retain) NSNumber *databaseID;
@property (nonatomic, retain) NSNumber *groupID;
@property (nonatomic, retain) NSString *groupName;
@property (nonatomic, retain) NSNumber *separationInterval;
@property (nonatomic, retain) NSString *tableName;

- (void).cxx_destruct;
- (id)activityEarliestDate;
- (id)activityID;
- (id)activityLatestDate;
- (id)activityNotBeforeDate;
- (id)activityStartDate;
- (id)coalescingInterval;
- (id)databaseID;
- (id)groupID;
- (id)groupName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)separationInterval;
- (void)setActivityEarliestDate:(id)arg1;
- (void)setActivityID:(id)arg1;
- (void)setActivityLatestDate:(id)arg1;
- (void)setActivityNotBeforeDate:(id)arg1;
- (void)setActivityStartDate:(id)arg1;
- (void)setCoalescingInterval:(id)arg1;
- (void)setDatabaseID:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setSeparationInterval:(id)arg1;
- (void)setTableName:(id)arg1;
- (id)tableName;
- (id)targetDescription;

@end
