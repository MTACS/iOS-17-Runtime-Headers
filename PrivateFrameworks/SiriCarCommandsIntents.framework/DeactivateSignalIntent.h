
@interface DeactivateSignalIntent : INIntent

@property (nonatomic, retain) INSpeakableString *carName;
@property (nonatomic, retain) NSNumber *carSignal;

- (id)init;
- (id)initWithCoder:(id)arg1;

@end
