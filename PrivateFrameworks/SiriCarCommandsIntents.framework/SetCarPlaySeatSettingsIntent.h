
@interface SetCarPlaySeatSettingsIntent : INIntent

@property (nonatomic, retain) NSNumber *enableHeating;
@property (nonatomic) long long seat;

- (id)init;
- (id)initWithCoder:(id)arg1;

@end
