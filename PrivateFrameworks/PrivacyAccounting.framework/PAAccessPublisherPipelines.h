
@interface PAAccessPublisherPipelines : NSObject

+ (id)accessPublisherWithoutHiddenOrMissingApps:(id)arg1;
+ (id)accessPublisherWithoutHiddenOrMissingApps:(id)arg1 withBundleLookup:(id /* block */)arg2;
+ (id)accessPublisherWithoutOutOfProcessPickerAccesses:(id)arg1;
+ (id)accessPublisherWithoutUnknownCategoryAccesses:(id)arg1;
+ (id)accessRecordsFromPublisher:(id)arg1;
+ (id)accessRecordsFromPublisher:(id)arg1 reversed:(bool)arg2;
+ (id)coalesceAccessRecordsFromPublisher:(id)arg1 withCoalescingWindowDuration:(double)arg2 reversed:(bool)arg3;
+ (id)completeAccessRecordFromPartialAccessRecord:(id)arg1 nextAccessPublisher:(id /* block */)arg2;
+ (id)completeAccessRecordFromPartialAccessRecord:(id)arg1 nextStartTime:(id /* block */)arg2 accessPublisher:(id /* block */)arg3;
+ (id)findBeginningForPartialAccessRecord:(id)arg1 iteration:(double)arg2 nextStartTime:(id /* block */)arg3 endTime:(double)arg4 accessPublisher:(id /* block */)arg5;
+ (double)nextStartTimeForEndTime:(double)arg1 iteration:(double)arg2;
+ (id)ongoingAccessRecordsFromPublisher:(id)arg1;

@end
