
@interface SetCarClimateIntent : INIntent

@property (nonatomic, retain) INSpeakableString *carName;
@property (nonatomic, retain) NSNumber *enabled;
@property (nonatomic, retain) NSNumber *isSetCarActivationStatusRequest;

- (id)init;
- (id)initWithCoder:(id)arg1;

@end
