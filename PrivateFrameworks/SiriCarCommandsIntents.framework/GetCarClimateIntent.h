
@interface GetCarClimateIntent : INIntent

@property (nonatomic, retain) INSpeakableString *carName;
@property (nonatomic, retain) NSNumber *isGetCarActivationStatusRequest;

- (id)init;
- (id)initWithCoder:(id)arg1;

@end
