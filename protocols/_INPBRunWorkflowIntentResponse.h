
@protocol _INPBRunWorkflowIntentResponse <NSObject>

@required

+ (Class)stepType;

- (void)addStep:(_INPBVoiceCommandStepInfo *)arg1;
- (void)clearSteps;
- (bool)continueRunning;
- (bool)hasContinueRunning;
- (bool)hasRequestsIntentExecution;
- (bool)hasUnderlyingIntent;
- (bool)hasUnderlyingIntentResponse;
- (bool)hasUtterance;
- (bool)hasWaitingForResume;
- (bool)requestsIntentExecution;
- (void)setContinueRunning:(bool)arg1;
- (void)setHasContinueRunning:(bool)arg1;
- (void)setHasRequestsIntentExecution:(bool)arg1;
- (void)setHasWaitingForResume:(bool)arg1;
- (void)setRequestsIntentExecution:(bool)arg1;
- (void)setSteps:(NSArray *)arg1;
- (void)setUnderlyingIntent:(_INPBArchivedObject *)arg1;
- (void)setUnderlyingIntentResponse:(_INPBArchivedObject *)arg1;
- (void)setUtterance:(NSString *)arg1;
- (void)setWaitingForResume:(bool)arg1;
- (_INPBVoiceCommandStepInfo *)stepAtIndex:(unsigned long long)arg1;
- (NSArray *)steps;
- (unsigned long long)stepsCount;
- (_INPBArchivedObject *)underlyingIntent;
- (_INPBArchivedObject *)underlyingIntentResponse;
- (NSString *)utterance;
- (bool)waitingForResume;

@end
