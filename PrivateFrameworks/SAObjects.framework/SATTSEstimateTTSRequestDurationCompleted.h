
@interface SATTSEstimateTTSRequestDurationCompleted : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *durations;

+ (id)estimateTTSRequestDurationCompleted;
+ (id)estimateTTSRequestDurationCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)durations;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDurations:(id)arg1;

@end
