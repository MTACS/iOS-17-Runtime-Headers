
@interface CALNNotificationRecordsDiff : NSObject {
    NSArray * _addedRecords;
    NSArray * _modifiedRecords;
    NSArray * _removedRecords;
}

@property (nonatomic, readonly, copy) NSArray *addedRecords;
@property (nonatomic, readonly, copy) NSArray *modifiedRecords;
@property (nonatomic, readonly, copy) NSArray *removedRecords;

+ (id)diffWithAddedRecords:(id)arg1 removedRecords:(id)arg2 modifiedRecords:(id)arg3;
+ (id)emptyDiff;

- (void).cxx_destruct;
- (id)addedRecords;
- (id)description;
- (id)initWithAddedRecords:(id)arg1 removedRecords:(id)arg2 modifiedRecords:(id)arg3;
- (id)modifiedRecords;
- (id)removedRecords;

@end
