
@interface PAAccessRecordCoalescingInWindowState : NSObject <PAAccessRecordCoalescingWindowState> {
    long long  _epoch;
    NSMutableDictionary * _groupedRecordsByMatcher;
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
- (id)initByContinuingWindow:(id)arg1 withAccessRecord:(id)arg2;
- (id)initWithFirstAccessRecord:(id)arg1 forEpoch:(long long)arg2;
- (id)recordsToRepublish;

@end
