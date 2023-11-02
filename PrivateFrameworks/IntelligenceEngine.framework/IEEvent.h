
@interface IEEvent : NSObject {
    NSString * _eventId;
    NSString * _name;
    NSArray * _parsers;
    IENLParameters * _producer;
    NSDictionary * _slots;
}

@property (nonatomic, retain) NSString *eventId;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *parsers;
@property (nonatomic, retain) IENLParameters *producer;
@property (nonatomic, retain) NSDictionary *slots;

+ (id)normalizeUtterance:(id)arg1;

- (void).cxx_destruct;
- (id)eventId;
- (id)initWithId:(id)arg1;
- (id)initWithId:(id)arg1 withName:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 withId:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)parsers;
- (id)producer;
- (void)setEventId:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParsers:(id)arg1;
- (void)setProducer:(id)arg1;
- (void)setSlots:(id)arg1;
- (id)slots;

@end
