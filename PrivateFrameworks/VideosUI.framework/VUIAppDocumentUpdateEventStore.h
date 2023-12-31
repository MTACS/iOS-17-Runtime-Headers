
@interface VUIAppDocumentUpdateEventStore : NSObject {
    NSMutableDictionary * _eventByEventDescriptor;
}

@property (nonatomic, retain) NSMutableDictionary *eventByEventDescriptor;
@property (nonatomic, readonly, copy) NSArray *events;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (void)addEvents:(id)arg1;
- (id)description;
- (id)eventByEventDescriptor;
- (id)events;
- (id)init;
- (void)removeAllEvents;
- (void)removeEvent:(id)arg1;
- (void)setEventByEventDescriptor:(id)arg1;

@end
