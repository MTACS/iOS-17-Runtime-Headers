
@interface SetCarRadioStationIntent : INIntent

@property (nonatomic) long long band;
@property (nonatomic, copy) NSString *callsign;
@property (nonatomic, copy) NSString *channel;
@property (nonatomic, retain) NSNumber *frequency;
@property (nonatomic, copy) NSString *name;

- (id)init;
- (id)initWithCoder:(id)arg1;

@end
