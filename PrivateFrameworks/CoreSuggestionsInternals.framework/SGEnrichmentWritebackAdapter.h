
@interface SGEnrichmentWritebackAdapter : NSObject <SGJournalCalendarObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_attributeSetForEvent:(id)arg1;
+ (id)_index;
+ (bool)_isEligibleEvent:(id)arg1;

- (id)_deleteEventsMatchingEvent:(id)arg1 keepingNewerEvents:(bool)arg2;
- (id)_deleteEventsMatchingGroupId:(id)arg1 fallbackGroupId:(id)arg2 olderThanDate:(id)arg3;
- (id)_uniqueIdentifiersMatchingEvent:(id)arg1 olderThanDate:(id)arg2;
- (id)_uniqueIdentifiersMatchingGroupId:(id)arg1 fallbackGroupId:(id)arg2 olderThanDate:(id)arg3;
- (void)addEvent:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)calendarDeleted;
- (void)cancelEvent:(id)arg1;
- (void)cancelEvents:(id)arg1;
- (void)confirmEventFromOtherDevice:(id)arg1;
- (void)confirmEventFromThisDevice:(id)arg1;
- (void)orphanEvent:(id)arg1;
- (void)rejectEventFromOtherDevice:(id)arg1;
- (void)rejectEventFromThisDevice:(id)arg1;

@end
