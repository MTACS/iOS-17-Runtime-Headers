
@interface HMEEvent : NSObject {
    NSData * _eventData;
    HMEEventMetadata * _eventMetadata;
}

@property (readonly, copy) NSData *encodedData;
@property (nonatomic, readonly, copy) NSData *eventData;
@property (readonly) HMEEventMetadata *eventMetadata;

+ (id)eventFromProtobuff:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithEventData:(id)arg1 metadata:(id)arg2;
- (id)description;
- (id)encodedData;
- (id)eventData;
- (id)eventMetadata;
- (id)initWithEventData:(id)arg1;
- (id)initWithEventData:(id)arg1 metadata:(id)arg2;
- (id)initWithSubclassedEventMetadata:(id)arg1;
- (id)pbEvent;

@end
