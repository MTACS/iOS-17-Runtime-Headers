
@interface HMEPendingEventsCollection : NSObject {
    NSMutableArray * _mutableEventItems;
}

@property (nonatomic, readonly, copy) NSArray *eventItems;
@property (nonatomic, retain) NSMutableArray *mutableEventItems;

- (void).cxx_destruct;
- (void)addEventInfo:(id)arg1;
- (void)combinePreviousEvents:(id)arg1;
- (unsigned long long)eventInfoMaxSizeInBytes:(id)arg1;
- (id)eventItems;
- (bool)hasEventItem;
- (id)init;
- (id)initWithEvents:(id)arg1;
- (id)mutableEventItems;
- (id)popEventItemsUpWithFragments:(bool)arg1 toSizeInBytes:(unsigned long long)arg2 usedBytes:(unsigned long long*)arg3;
- (void)resetItems;
- (void)setMutableEventItems:(id)arg1;

@end
