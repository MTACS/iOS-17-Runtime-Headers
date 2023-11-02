
@interface SetTrunkStatusIntent : INIntent

@property (nonatomic, retain) INSpeakableString *carName;
@property (nonatomic) long long trunkStatus;

- (id)init;
- (id)initWithCoder:(id)arg1;

@end
