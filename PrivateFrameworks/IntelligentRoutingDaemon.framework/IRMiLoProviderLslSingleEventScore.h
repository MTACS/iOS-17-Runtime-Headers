
@interface IRMiLoProviderLslSingleEventScore : NSObject {
    NSUUID * _eventId;
    NSNumber * _score;
}

@property (nonatomic, retain) NSUUID *eventId;
@property (nonatomic, retain) NSNumber *score;

- (void).cxx_destruct;
- (id)eventId;
- (id)initWithMiloPlace:(id)arg1;
- (id)score;
- (void)setEventId:(id)arg1;
- (void)setScore:(id)arg1;

@end
