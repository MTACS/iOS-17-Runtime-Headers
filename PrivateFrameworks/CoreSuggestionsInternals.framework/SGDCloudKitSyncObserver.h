
@interface SGDCloudKitSyncObserver : NSObject <SGJournalCalendarObserver> {
    SGDCloudKitSync * _cks;
    id /* block */  _cksGetter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)calendarDeleted;
- (void)cancelEvent:(id)arg1;
- (void)cancelEvents:(id)arg1;
- (id)cloudKitSync;
- (void)confirmEventFromOtherDevice:(id)arg1;
- (void)confirmEventFromThisDevice:(id)arg1;
- (id)init;
- (id)initWithCloudKitSyncGetter:(id /* block */)arg1;
- (void)orphanEvent:(id)arg1;
- (void)rejectEventFromOtherDevice:(id)arg1;
- (void)rejectEventFromThisDevice:(id)arg1;

@end
