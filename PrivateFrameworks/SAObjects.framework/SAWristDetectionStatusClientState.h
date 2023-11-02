
@interface SAWristDetectionStatusClientState : SAAceClientState

@property (nonatomic) bool wristDetected;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)wristDetectionStatusClientState;
+ (id)wristDetectionStatusClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setWristDetected:(bool)arg1;
- (bool)wristDetected;

@end
