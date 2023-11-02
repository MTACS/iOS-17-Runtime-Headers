
@interface IRBiomeParameters : NSObject {
    long long  _eventType;
}

@property (nonatomic) long long eventType;

- (Class)biomeEventClass;
- (id)contextPublisher;
- (long long)eventType;
- (id)initWithBiomeEventType:(long long)arg1;
- (id)queryPublisherWithOptions:(id)arg1;
- (void)setEventType:(long long)arg1;

@end
