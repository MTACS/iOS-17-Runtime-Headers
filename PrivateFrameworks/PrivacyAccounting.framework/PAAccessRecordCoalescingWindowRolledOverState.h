
@interface PAAccessRecordCoalescingWindowRolledOverState : NSObject <PAAccessRecordCoalescingWindowState> {
    long long  _epoch;
    NSMutableDictionary * _groupedRecordsByMatcher;
    NSArray * _groupedRecordsToRepublish;
    bool  _reversed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long epoch;
@property (nonatomic, readonly) NSMutableDictionary *groupedRecordsByMatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)epoch;
- (id)groupedRecordsByMatcher;
- (id)initByEndingPreviousWindow:(id)arg1 reversed:(bool)arg2 withInitialAccessRecord:(id)arg3 forNewEpoch:(long long)arg4;
- (id)recordsToRepublish;

@end
