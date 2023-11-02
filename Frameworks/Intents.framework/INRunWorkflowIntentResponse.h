
@interface INRunWorkflowIntentResponse : INIntentResponse <INRunWorkflowIntentResponseExport>

@property (nonatomic, readonly) long long code;
@property (nonatomic, copy) NSNumber *continueRunning;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *requestsIntentExecution;
@property (nonatomic, copy) NSArray *steps;
@property (readonly) Class superclass;
@property (nonatomic, copy) INArchivedObject *underlyingIntent;
@property (nonatomic, copy) INArchivedObject *underlyingIntentResponse;
@property (nonatomic, copy) NSString *utterance;
@property (nonatomic, copy) NSNumber *waitingForResume;

+ (bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(bool)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (long long)_codeWithName:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (long long)_intentResponseCode;
- (bool)_shouldForwardIntentToApp;
- (long long)code;
- (id)continueRunning;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)propertiesByName;
- (id)requestsIntentExecution;
- (void)setContinueRunning:(id)arg1;
- (void)setPropertiesByName:(id)arg1;
- (void)setRequestsIntentExecution:(id)arg1;
- (void)setSteps:(id)arg1;
- (void)setUnderlyingIntent:(id)arg1;
- (void)setUnderlyingIntentResponse:(id)arg1;
- (void)setUtterance:(id)arg1;
- (void)setWaitingForResume:(id)arg1;
- (id)steps;
- (id)underlyingIntent;
- (id)underlyingIntentResponse;
- (id)utterance;
- (id)waitingForResume;

@end
