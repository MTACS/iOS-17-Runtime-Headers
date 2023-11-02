
@protocol PAAccessRecordCoalescingWindowState <PAAccessRecordCoalescingState>

@required

- (long long)epoch;
- (NSMutableDictionary *)groupedRecordsByMatcher;

@end
