
@interface FCModifyHistoryCommand : FCModifyRecordsCommand {
    NSArray * _historyItems;
    NSArray * _recordItems;
}

@property (nonatomic, readonly, copy) NSArray *historyItems;
@property (nonatomic, readonly, copy) NSArray *recordItems;

+ (id)desiredKeys;

- (void).cxx_destruct;
- (id)historyItems;
- (id)initWithHistoryItems:(id)arg1 merge:(bool)arg2;
- (bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;
- (id)recordItems;
- (id)recordZoneName;

@end
