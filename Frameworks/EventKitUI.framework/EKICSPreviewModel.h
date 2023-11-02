
@interface EKICSPreviewModel : NSObject {
    unsigned long long  _actionsState;
    NSData * _data;
    EKEventStore * _destStore;
    NSMutableSet * _eventsAllowingDelete;
    NSMutableSet * _eventsAllowingUpdate;
    NSMutableArray * _importedEvents;
    unsigned long long  _options;
    EKEventStore * _tempStore;
    NSMutableArray * _unimportedEvents;
}

@property (nonatomic, readonly) unsigned long long actionsState;
@property (nonatomic, readonly) NSArray *allEvents;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) unsigned long long importedEventCount;
@property (nonatomic, readonly) NSArray *importedEvents;
@property (nonatomic, readonly) unsigned long long totalEventCount;
@property (nonatomic, readonly) unsigned long long unimportedEventCount;
@property (nonatomic, readonly) NSArray *unimportedEvents;

- (void).cxx_destruct;
- (unsigned long long)actionsState;
- (id)allEvents;
- (id)eventStore;
- (void)importAllIntoCalendar:(id)arg1;
- (id)importEvent:(id)arg1 intoCalendar:(id)arg2;
- (unsigned long long)importedEventCount;
- (id)importedEvents;
- (id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;
- (bool)shouldAllowDeleteEvent:(id)arg1;
- (bool)shouldAllowUpdateEvent:(id)arg1;
- (unsigned long long)totalEventCount;
- (unsigned long long)unimportedEventCount;
- (id)unimportedEvents;

@end
