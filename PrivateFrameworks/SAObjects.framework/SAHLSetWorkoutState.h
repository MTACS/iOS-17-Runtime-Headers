
@interface SAHLSetWorkoutState : SADomainCommand

@property (nonatomic, retain) SAHLWorkoutState *targetWorkoutState;

+ (id)setWorkoutState;
+ (id)setWorkoutStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setTargetWorkoutState:(id)arg1;
- (id)targetWorkoutState;

@end
