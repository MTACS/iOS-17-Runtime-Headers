
@protocol INRunWorkflowIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSNumber *)continueRunning;
- (NSNumber *)requestsIntentExecution;
- (void)setContinueRunning:(NSNumber *)arg1;
- (void)setRequestsIntentExecution:(NSNumber *)arg1;
- (void)setSteps:(NSArray *)arg1;
- (void)setUnderlyingIntent:(INArchivedObject *)arg1;
- (void)setUnderlyingIntentResponse:(INArchivedObject *)arg1;
- (void)setUtterance:(NSString *)arg1;
- (void)setWaitingForResume:(NSNumber *)arg1;
- (NSArray *)steps;
- (INArchivedObject *)underlyingIntent;
- (INArchivedObject *)underlyingIntentResponse;
- (NSString *)utterance;
- (NSNumber *)waitingForResume;

@end
