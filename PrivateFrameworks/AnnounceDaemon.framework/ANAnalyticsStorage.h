
@interface ANAnalyticsStorage : NSObject {
    ANDefaults * _defaults;
    NSMutableDictionary * _eventPayloads;
}

@property (nonatomic, retain) ANDefaults *defaults;
@property (nonatomic, retain) NSMutableDictionary *eventPayloads;
@property (readonly) NSDictionary *eventsToReport;

- (void).cxx_destruct;
- (void)_synchronizedSave;
- (id)defaults;
- (void)erase;
- (id)eventPayloads;
- (id)eventsToReport;
- (id)init;
- (id)initWithDefaults:(id)arg1;
- (void)save:(id)arg1 counter:(id)arg2;
- (void)save:(id)arg1 payload:(id)arg2;
- (void)setDefaults:(id)arg1;
- (void)setEventPayloads:(id)arg1;

@end
